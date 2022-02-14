
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int name; } ;
struct fsl_ifc_mtd {size_t bank; scalar_t__ vbase; int chip; } ;
struct TYPE_2__ {int ** chips; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 struct mtd_info* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fsl_ifc_mtd *VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_2(&VAR_1->chip);

 FUNC_1(VAR_2->name);

 if (VAR_1->vbase)
  FUNC_0(VAR_1->vbase);

 VAR_0->chips[VAR_1->bank] = ((void*)0);

 return 0;
}
