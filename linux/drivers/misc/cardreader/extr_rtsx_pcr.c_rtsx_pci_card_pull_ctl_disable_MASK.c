
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_pcr {int * ms_pull_ctl_disable_tbl; int * sd_pull_ctl_disable_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_pcr*,int const*) ;

int FUNC_1(struct rtsx_pcr *VAR_3, int VAR_4)
{
 const u32 *VAR_5;

 if (VAR_4 == VAR_2)
  VAR_5 = VAR_3->sd_pull_ctl_disable_tbl;
 else if (VAR_4 == VAR_1)
  VAR_5 = VAR_3->ms_pull_ctl_disable_tbl;
 else
  return -VAR_0;


 return FUNC_0(VAR_3, VAR_5);
}
