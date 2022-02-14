
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sas_task {int (* task_done ) (struct sas_task*) ;} ;
struct pm8001_hba_info {int lock; } ;
struct pm8001_ccb_info {int dummy; } ;


 int FUNC_0 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sas_task*) ;

__attribute__((used)) static inline void
FUNC_5(struct pm8001_hba_info *VAR_0,
   struct sas_task *VAR_1, struct pm8001_ccb_info *VAR_2,
   u32 VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1();
 FUNC_3(&VAR_0->lock);
 VAR_1->task_done(VAR_1);
 FUNC_2(&VAR_0->lock);
}
