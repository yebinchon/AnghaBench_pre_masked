
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xol_area {int dummy; } ;
struct TYPE_3__ {int xol_area; } ;
struct mm_struct {TYPE_1__ uprobes_state; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 struct xol_area* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static struct xol_area *FUNC_2(void)
{
 struct mm_struct *VAR_1 = VAR_0->mm;
 struct xol_area *VAR_2;

 if (!VAR_1->uprobes_state.xol_area)
  FUNC_1(0);


 VAR_2 = FUNC_0(VAR_1->uprobes_state.xol_area);
 return VAR_2;
}
