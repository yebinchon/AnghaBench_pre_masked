
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tssi_data {int tx0_delta_offset; int * offset; int slope; } ;
struct seq_file {struct mt7601u_dev* private; } ;
struct mt7601u_rate_power {TYPE_4__* ht; TYPE_3__* ofdm; TYPE_2__* cck; } ;
struct mt7601u_dev {TYPE_5__* ee; } ;
struct TYPE_6__ {scalar_t__ num; scalar_t__ start; } ;
struct TYPE_10__ {int tssi_enabled; int * chan_pwr; TYPE_1__ reg; int lna_gain; int ref_temp; int * rssi_offset; int rf_freq_off; struct tssi_data tssi_data; struct mt7601u_rate_power power_rate_table; } ;
struct TYPE_9__ {int bw40; int bw20; int raw; } ;
struct TYPE_8__ {int bw40; int bw20; int raw; } ;
struct TYPE_7__ {int bw40; int bw20; int raw; } ;


 int FUNC_0 (struct seq_file*,char*,int,...) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int
FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct mt7601u_dev *VAR_2 = VAR_0->private;
 struct mt7601u_rate_power *VAR_3 = &VAR_2->ee->power_rate_table;
 struct tssi_data *VAR_4 = &VAR_2->ee->tssi_data;
 int VAR_5;

 FUNC_0(VAR_0, "RF freq offset: %hhx\n", VAR_2->ee->rf_freq_off);
 FUNC_0(VAR_0, "RSSI offset: %hhx %hhx\n",
     VAR_2->ee->rssi_offset[0], VAR_2->ee->rssi_offset[1]);
 FUNC_0(VAR_0, "Reference temp: %hhx\n", VAR_2->ee->ref_temp);
 FUNC_0(VAR_0, "LNA gain: %hhx\n", VAR_2->ee->lna_gain);
 FUNC_0(VAR_0, "Reg channels: %hhu-%hhu\n", VAR_2->ee->reg.start,
     VAR_2->ee->reg.start + VAR_2->ee->reg.num - 1);

 FUNC_1(VAR_0, "Per rate power:\n");
 for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
  FUNC_0(VAR_0, "\t raw:%02hhx bw20:%02hhx bw40:%02hhx\n",
      VAR_3->cck[VAR_5].raw, VAR_3->cck[VAR_5].bw20, VAR_3->cck[VAR_5].bw40);
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  FUNC_0(VAR_0, "\t raw:%02hhx bw20:%02hhx bw40:%02hhx\n",
      VAR_3->ofdm[VAR_5].raw, VAR_3->ofdm[VAR_5].bw20, VAR_3->ofdm[VAR_5].bw40);
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  FUNC_0(VAR_0, "\t raw:%02hhx bw20:%02hhx bw40:%02hhx\n",
      VAR_3->ht[VAR_5].raw, VAR_3->ht[VAR_5].bw20, VAR_3->ht[VAR_5].bw40);

 FUNC_1(VAR_0, "Per channel power:\n");
 for (VAR_5 = 0; VAR_5 < 7; VAR_5++)
  FUNC_0(VAR_0, "\t tx_power  ch%u:%02hhx ch%u:%02hhx\n",
      VAR_5 * 2 + 1, VAR_2->ee->chan_pwr[VAR_5 * 2],
      VAR_5 * 2 + 2, VAR_2->ee->chan_pwr[VAR_5 * 2 + 1]);

 if (!VAR_2->ee->tssi_enabled)
  return 0;

 FUNC_1(VAR_0, "TSSI:\n");
 FUNC_0(VAR_0, "\t slope:%02hhx\n", VAR_4->slope);
 FUNC_0(VAR_0, "\t offset=%02hhx %02hhx %02hhx\n",
     VAR_4->offset[0], VAR_4->offset[1], VAR_4->offset[2]);
 FUNC_0(VAR_0, "\t delta_off:%08x\n", VAR_4->tx0_delta_offset);

 return 0;
}
