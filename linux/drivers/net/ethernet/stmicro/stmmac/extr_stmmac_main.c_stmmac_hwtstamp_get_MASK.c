
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ atime_stamp; scalar_t__ time_stamp; } ;
struct hwtstamp_config {int dummy; } ;
struct stmmac_priv {TYPE_1__ dma_cap; struct hwtstamp_config tstamp_config; } ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct hwtstamp_config*,int) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct ifreq *VAR_3)
{
 struct stmmac_priv *VAR_4 = FUNC_1(VAR_2);
 struct hwtstamp_config *VAR_5 = &VAR_4->tstamp_config;

 if (!(VAR_4->dma_cap.time_stamp || VAR_4->dma_cap.atime_stamp))
  return -VAR_1;

 return FUNC_0(VAR_3->ifr_data, VAR_5,
       sizeof(*VAR_5)) ? -VAR_0 : 0;
}
