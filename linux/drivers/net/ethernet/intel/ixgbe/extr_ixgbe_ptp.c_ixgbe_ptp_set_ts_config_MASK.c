
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int tstamp_config; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int dummy; } ;
typedef int config ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 int FUNC_2 (struct ixgbe_adapter*,struct hwtstamp_config*) ;
 int FUNC_3 (int *,struct hwtstamp_config*,int) ;

int FUNC_4(struct ixgbe_adapter *VAR_1, struct ifreq *VAR_2)
{
 struct hwtstamp_config VAR_3;
 int VAR_4;

 if (FUNC_0(&VAR_3, VAR_2->ifr_data, sizeof(VAR_3)))
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;


 FUNC_3(&VAR_1->tstamp_config, &VAR_3,
        sizeof(VAR_1->tstamp_config));

 return FUNC_1(VAR_2->ifr_data, &VAR_3, sizeof(VAR_3)) ?
  -VAR_0 : 0;
}
