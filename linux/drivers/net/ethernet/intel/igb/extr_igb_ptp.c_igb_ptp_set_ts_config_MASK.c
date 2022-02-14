
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igb_adapter {int tstamp_config; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int dummy; } ;
typedef int config ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 int FUNC_2 (struct igb_adapter*,struct hwtstamp_config*) ;
 int FUNC_3 (int *,struct hwtstamp_config*,int) ;
 struct igb_adapter* FUNC_4 (struct net_device*) ;

int FUNC_5(struct net_device *VAR_1, struct ifreq *VAR_2)
{
 struct igb_adapter *VAR_3 = FUNC_4(VAR_1);
 struct hwtstamp_config VAR_4;
 int VAR_5;

 if (FUNC_0(&VAR_4, VAR_2->ifr_data, sizeof(VAR_4)))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;


 FUNC_3(&VAR_3->tstamp_config, &VAR_4,
        sizeof(VAR_3->tstamp_config));

 return FUNC_1(VAR_2->ifr_data, &VAR_4, sizeof(VAR_4)) ?
  -VAR_0 : 0;
}
