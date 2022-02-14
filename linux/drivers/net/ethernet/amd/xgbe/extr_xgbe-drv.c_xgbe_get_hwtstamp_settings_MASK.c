
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int tstamp_config; } ;
struct ifreq {int ifr_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_1,
          struct ifreq *VAR_2)
{
 if (FUNC_0(VAR_2->ifr_data, &VAR_1->tstamp_config,
    sizeof(VAR_1->tstamp_config)))
  return -VAR_0;

 return 0;
}
