
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct mm_struct* active_mm; struct mm_struct* mm; scalar_t__ last_switch_time; scalar_t__ nivcsw; scalar_t__ nvcsw; scalar_t__ last_switch_count; scalar_t__ maj_flt; scalar_t__ min_flt; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct mm_struct* FUNC_0 (struct task_struct*,struct mm_struct*) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_3, struct task_struct *VAR_4)
{
 struct mm_struct *VAR_5, *VAR_6;
 int VAR_7;

 VAR_4->min_flt = VAR_4->maj_flt = 0;
 VAR_4->nvcsw = VAR_4->nivcsw = 0;





 VAR_4->mm = ((void*)0);
 VAR_4->active_mm = ((void*)0);






 VAR_6 = VAR_2->mm;
 if (!VAR_6)
  return 0;


 FUNC_2(VAR_4);

 if (VAR_3 & VAR_0) {
  FUNC_1(VAR_6);
  VAR_5 = VAR_6;
  goto good_mm;
 }

 VAR_7 = -VAR_1;
 VAR_5 = FUNC_0(VAR_4, VAR_2->mm);
 if (!VAR_5)
  goto fail_nomem;

good_mm:
 VAR_4->mm = VAR_5;
 VAR_4->active_mm = VAR_5;
 return 0;

fail_nomem:
 return VAR_7;
}
