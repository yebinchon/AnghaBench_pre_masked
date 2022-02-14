
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sa_info {scalar_t__ mtd; int num_subdev; TYPE_1__* subdev; } ;
struct flash_platform_data {int (* exit ) () ;} ;
struct TYPE_2__ {scalar_t__ mtd; } ;


 int FUNC_0 (struct sa_info*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct sa_info *VAR_0, struct flash_platform_data *VAR_1)
{
 int VAR_2;

 if (VAR_0->mtd) {
  FUNC_2(VAR_0->mtd);
  if (VAR_0->mtd != VAR_0->subdev[0].mtd)
   FUNC_1(VAR_0->mtd);
 }

 for (VAR_2 = VAR_0->num_subdev - 1; VAR_2 >= 0; VAR_2--)
  FUNC_3(&VAR_0->subdev[VAR_2]);
 FUNC_0(VAR_0);

 if (VAR_1->exit)
  VAR_1->exit();
}
