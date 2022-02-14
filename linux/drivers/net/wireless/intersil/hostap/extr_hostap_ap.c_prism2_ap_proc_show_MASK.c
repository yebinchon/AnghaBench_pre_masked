
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssid_len; int* ssid; int channel; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;
struct sta_info {int capability; TYPE_2__ u; int last_rx_rate; int last_rx_silence; int last_rx_signal; int addr; int ap; } ;
struct seq_file {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_4, void *VAR_5)
{
 struct sta_info *VAR_6 = VAR_5;
 int VAR_7;

 if (VAR_5 == VAR_0) {
  FUNC_0(VAR_4, "# BSSID CHAN SIGNAL NOISE RATE SSID FLAGS\n");
  return 0;
 }

 if (!VAR_6->ap)
  return 0;

 FUNC_0(VAR_4, "%pM %d %d %d %d '",
     VAR_6->addr,
     VAR_6->u.ap.channel, VAR_6->last_rx_signal,
     VAR_6->last_rx_silence, VAR_6->last_rx_rate);

 for (VAR_7 = 0; VAR_7 < VAR_6->u.ap.ssid_len; VAR_7++) {
  if (VAR_6->u.ap.ssid[VAR_7] >= 32 && VAR_6->u.ap.ssid[VAR_7] < 127)
   FUNC_1(VAR_4, VAR_6->u.ap.ssid[VAR_7]);
  else
   FUNC_0(VAR_4, "<%02x>", VAR_6->u.ap.ssid[VAR_7]);
 }

 FUNC_1(VAR_4, '\'');
 if (VAR_6->capability & VAR_1)
  FUNC_2(VAR_4, " [ESS]");
 if (VAR_6->capability & VAR_2)
  FUNC_2(VAR_4, " [IBSS]");
 if (VAR_6->capability & VAR_3)
  FUNC_2(VAR_4, " [WEP]");
 FUNC_1(VAR_4, '\n');
 return 0;
}
