
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3 {TYPE_1__* pdev; } ;
struct subsys_tbl_ent {scalar_t__ subsys_vendor; scalar_t__ subsys_devid; } ;
struct TYPE_2__ {scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;


 int FUNC_0 (struct subsys_tbl_ent*) ;
 struct subsys_tbl_ent* VAR_0 ;

__attribute__((used)) static struct subsys_tbl_ent *FUNC_1(struct tg3 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if ((VAR_0[VAR_2].subsys_vendor ==
       VAR_1->pdev->subsystem_vendor) &&
      (VAR_0[VAR_2].subsys_devid ==
       VAR_1->pdev->subsystem_device))
   return &VAR_0[VAR_2];
 }
 return ((void*)0);
}
