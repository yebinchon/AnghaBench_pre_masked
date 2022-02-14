
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {unsigned long flags; TYPE_1__* sh_info; int op_work; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned long*) ;
 scalar_t__ FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

void FUNC_4(struct xen_pcibk_device *VAR_5)
{


 if (FUNC_2(VAR_3, (unsigned long *)&VAR_5->sh_info->flags)
     && !FUNC_1(VAR_1, &VAR_5->flags)) {
  FUNC_0(&VAR_5->op_work);
 }


 if (!FUNC_2(VAR_2, (unsigned long *)&VAR_5->sh_info->flags)
     && FUNC_2(VAR_0, &VAR_5->flags)) {
  FUNC_3(&VAR_4);
 }
}
