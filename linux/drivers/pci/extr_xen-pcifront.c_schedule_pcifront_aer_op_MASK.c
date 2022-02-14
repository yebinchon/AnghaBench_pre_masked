
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcifront_device {int op_work; TYPE_2__* xdev; int flags; TYPE_1__* sh_info; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static inline void FUNC_4(struct pcifront_device *VAR_2)
{
 if (FUNC_3(VAR_1, (unsigned long *)&VAR_2->sh_info->flags)
  && !FUNC_2(VAR_0, &VAR_2->flags)) {
  FUNC_0(&VAR_2->xdev->dev, "schedule aer frontend job\n");
  FUNC_1(&VAR_2->op_work);
 }
}
