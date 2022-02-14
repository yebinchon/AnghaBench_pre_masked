
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
struct sja1105_private {TYPE_2__ tagger_data; TYPE_1__* ports; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; } ;
struct dsa_switch {int dev; struct sja1105_private* priv; } ;
typedef int config ;
struct TYPE_3__ {int hwts_tx_en; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_2 (int ,struct hwtstamp_config*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sja1105_private*,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct dsa_switch *VAR_3, int VAR_4,
    struct ifreq *VAR_5)
{
 struct sja1105_private *VAR_6 = VAR_3->priv;
 struct hwtstamp_config VAR_7;
 bool VAR_8;
 int VAR_9;

 if (FUNC_1(&VAR_7, VAR_5->ifr_data, sizeof(VAR_7)))
  return -VAR_0;

 switch (VAR_7.tx_type) {
 case 129:
  VAR_6->ports[VAR_4].hwts_tx_en = 0;
  break;
 case 128:
  VAR_6->ports[VAR_4].hwts_tx_en = 1;
  break;
 default:
  return -VAR_1;
 }

 switch (VAR_7.rx_filter) {
 case 130:
  VAR_8 = 0;
  break;
 default:
  VAR_8 = 1;
  break;
 }

 if (VAR_8 != FUNC_6(VAR_2, &VAR_6->tagger_data.state)) {
  FUNC_0(VAR_2, &VAR_6->tagger_data.state);

  VAR_9 = FUNC_5(VAR_6, VAR_8);
  if (VAR_9 < 0) {
   FUNC_3(VAR_3->dev,
    "Failed to change RX timestamping: %d\n", VAR_9);
   return VAR_9;
  }
  if (VAR_8)
   FUNC_4(VAR_2, &VAR_6->tagger_data.state);
 }

 if (FUNC_2(VAR_5->ifr_data, &VAR_7, sizeof(VAR_7)))
  return -VAR_0;
 return 0;
}
