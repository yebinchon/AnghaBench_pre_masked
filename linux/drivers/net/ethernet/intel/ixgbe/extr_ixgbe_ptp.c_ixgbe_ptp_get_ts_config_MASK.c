
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwtstamp_config {int dummy; } ;
struct ixgbe_adapter {struct hwtstamp_config tstamp_config; } ;
struct ifreq {int ifr_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct hwtstamp_config*,int) ;

int FUNC_1(struct ixgbe_adapter *VAR_1, struct ifreq *VAR_2)
{
 struct hwtstamp_config *VAR_3 = &VAR_1->tstamp_config;

 return FUNC_0(VAR_2->ifr_data, VAR_3,
       sizeof(*VAR_3)) ? -VAR_0 : 0;
}
