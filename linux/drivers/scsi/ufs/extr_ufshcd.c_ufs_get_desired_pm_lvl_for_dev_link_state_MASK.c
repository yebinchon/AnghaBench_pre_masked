
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum uic_link_state { ____Placeholder_uic_link_state } uic_link_state ;
typedef enum ufs_pm_level { ____Placeholder_ufs_pm_level } ufs_pm_level ;
typedef enum ufs_dev_pwr_mode { ____Placeholder_ufs_dev_pwr_mode } ufs_dev_pwr_mode ;
struct TYPE_2__ {int dev_state; int link_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline enum ufs_pm_level
FUNC_0(enum ufs_dev_pwr_mode VAR_3,
     enum uic_link_state VAR_4)
{
 enum ufs_pm_level VAR_5;

 for (VAR_5 = VAR_0; VAR_5 < VAR_1; VAR_5++) {
  if ((VAR_2[VAR_5].dev_state == VAR_3) &&
   (VAR_2[VAR_5].link_state == VAR_4))
   return VAR_5;
 }


 return VAR_0;
}
