
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct mm_struct {TYPE_1__* binfmt; int total_vm; int hiwater_vm; int hiwater_rss; int user_ns; } ;
struct TYPE_2__ {int module; } ;


 struct mm_struct* FUNC_0 () ;
 int FUNC_1 (struct mm_struct*,struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct mm_struct*,struct mm_struct*,int) ;
 int FUNC_4 (struct mm_struct*,struct task_struct*,int ) ;
 int FUNC_5 (struct mm_struct*,int *) ;
 int FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static struct mm_struct *FUNC_8(struct task_struct *VAR_0,
    struct mm_struct *VAR_1)
{
 struct mm_struct *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0();
 if (!VAR_2)
  goto fail_nomem;

 FUNC_3(VAR_2, VAR_1, sizeof(*VAR_2));

 if (!FUNC_4(VAR_2, VAR_0, VAR_2->user_ns))
  goto fail_nomem;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3)
  goto free_pt;

 VAR_2->hiwater_rss = FUNC_2(VAR_2);
 VAR_2->hiwater_vm = VAR_2->total_vm;

 if (VAR_2->binfmt && !FUNC_7(VAR_2->binfmt->module))
  goto free_pt;

 return VAR_2;

free_pt:

 VAR_2->binfmt = ((void*)0);
 FUNC_5(VAR_2, ((void*)0));
 FUNC_6(VAR_2);

fail_nomem:
 return ((void*)0);
}
