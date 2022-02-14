
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hwtstamp_config {int dummy; } ;
struct igb_adapter {struct hwtstamp_config tstamp_config; } ;
struct ifreq {int ifr_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct hwtstamp_config*,int) ;
 struct igb_adapter* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_1, struct ifreq *VAR_2)
{
 struct igb_adapter *VAR_3 = FUNC_1(VAR_1);
 struct hwtstamp_config *VAR_4 = &VAR_3->tstamp_config;

 return FUNC_0(VAR_2->ifr_data, VAR_4, sizeof(*VAR_4)) ?
  -VAR_0 : 0;
}
