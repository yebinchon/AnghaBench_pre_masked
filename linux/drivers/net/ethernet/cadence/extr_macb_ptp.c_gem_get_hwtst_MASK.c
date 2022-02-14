
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hwtstamp_config {int dummy; } ;
struct macb {int hw_dma_cap; struct hwtstamp_config tstamp_config; } ;
struct ifreq {int ifr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct hwtstamp_config*,int) ;
 struct macb* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_3, struct ifreq *VAR_4)
{
 struct hwtstamp_config *VAR_5;
 struct macb *VAR_6 = FUNC_1(VAR_3);

 VAR_5 = &VAR_6->tstamp_config;
 if ((VAR_6->hw_dma_cap & VAR_2) == 0)
  return -VAR_1;

 if (FUNC_0(VAR_4->ifr_data, VAR_5, sizeof(*VAR_5)))
  return -VAR_0;
 else
  return 0;
}
