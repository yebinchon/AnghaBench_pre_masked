
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct sja1105_private {TYPE_1__ tagger_data; TYPE_2__* ports; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int rx_filter; int tx_type; scalar_t__ flags; } ;
struct dsa_switch {struct sja1105_private* priv; } ;
typedef int config ;
struct TYPE_4__ {scalar_t__ hwts_tx_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,struct hwtstamp_config*,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_6, int VAR_7,
    struct ifreq *VAR_8)
{
 struct sja1105_private *VAR_9 = VAR_6->priv;
 struct hwtstamp_config VAR_10;

 VAR_10.flags = 0;
 if (VAR_9->ports[VAR_7].hwts_tx_en)
  VAR_10.tx_type = VAR_4;
 else
  VAR_10.tx_type = VAR_3;
 if (FUNC_1(VAR_5, &VAR_9->tagger_data.state))
  VAR_10.rx_filter = VAR_2;
 else
  VAR_10.rx_filter = VAR_1;

 return FUNC_0(VAR_8->ifr_data, &VAR_10, sizeof(VAR_10)) ?
  -VAR_0 : 0;
}
