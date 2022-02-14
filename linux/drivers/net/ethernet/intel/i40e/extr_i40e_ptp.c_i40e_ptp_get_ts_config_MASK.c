
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int dummy; } ;
struct i40e_pf {int flags; struct hwtstamp_config tstamp_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct hwtstamp_config*,int) ;

int FUNC_1(struct i40e_pf *VAR_3, struct ifreq *VAR_4)
{
 struct hwtstamp_config *VAR_5 = &VAR_3->tstamp_config;

 if (!(VAR_3->flags & VAR_2))
  return -VAR_1;

 return FUNC_0(VAR_4->ifr_data, VAR_5, sizeof(*VAR_5)) ?
  -VAR_0 : 0;
}
