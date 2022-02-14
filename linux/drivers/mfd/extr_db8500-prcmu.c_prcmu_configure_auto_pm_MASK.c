
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct prcmu_auto_pm_config {int sva_auto_pm_enable; int sia_auto_pm_enable; int sva_power_on; int sia_power_on; int sva_policy; int sia_policy; } ;
struct TYPE_2__ {int auto_pm_enabled; int auto_pm_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct prcmu_auto_pm_config *VAR_5,
 struct prcmu_auto_pm_config *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 unsigned long VAR_9;

 FUNC_0((VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)));

 VAR_7 = (VAR_5->sva_auto_pm_enable & 0xF);
 VAR_7 = ((VAR_7 << 4) | (VAR_5->sia_auto_pm_enable & 0xF));
 VAR_7 = ((VAR_7 << 8) | (VAR_5->sva_power_on & 0xFF));
 VAR_7 = ((VAR_7 << 8) | (VAR_5->sia_power_on & 0xFF));
 VAR_7 = ((VAR_7 << 4) | (VAR_5->sva_policy & 0xF));
 VAR_7 = ((VAR_7 << 4) | (VAR_5->sia_policy & 0xF));

 VAR_8 = (VAR_6->sva_auto_pm_enable & 0xF);
 VAR_8 = ((VAR_8 << 4) | (VAR_6->sia_auto_pm_enable & 0xF));
 VAR_8 = ((VAR_8 << 8) | (VAR_6->sva_power_on & 0xFF));
 VAR_8 = ((VAR_8 << 8) | (VAR_6->sia_power_on & 0xFF));
 VAR_8 = ((VAR_8 << 4) | (VAR_6->sva_policy & 0xF));
 VAR_8 = ((VAR_8 << 4) | (VAR_6->sia_policy & 0xF));

 FUNC_1(&VAR_3.auto_pm_lock, VAR_9);






 FUNC_3(VAR_7, (VAR_4 + VAR_2));
 FUNC_3(VAR_8, (VAR_4 + VAR_1));

 VAR_3.auto_pm_enabled =
  ((VAR_5->sva_auto_pm_enable == VAR_0) ||
   (VAR_5->sia_auto_pm_enable == VAR_0) ||
   (VAR_6->sva_auto_pm_enable == VAR_0) ||
   (VAR_6->sia_auto_pm_enable == VAR_0));

 FUNC_2(&VAR_3.auto_pm_lock, VAR_9);
}
