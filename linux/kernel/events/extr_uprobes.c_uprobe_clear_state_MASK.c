
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xol_area {struct xol_area* bitmap; int * pages; } ;
struct TYPE_2__ {struct xol_area* xol_area; } ;
struct mm_struct {TYPE_1__ uprobes_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct mm_struct*) ;
 int FUNC_1 (struct xol_area*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct mm_struct *VAR_1)
{
 struct xol_area *VAR_2 = VAR_1->uprobes_state.xol_area;

 FUNC_2(&VAR_0);
 FUNC_0(((void*)0), VAR_1);
 FUNC_3(&VAR_0);

 if (!VAR_2)
  return;

 FUNC_4(VAR_2->pages[0]);
 FUNC_1(VAR_2->bitmap);
 FUNC_1(VAR_2);
}
