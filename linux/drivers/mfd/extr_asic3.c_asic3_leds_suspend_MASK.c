
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mfd_cell {size_t id; } ;
struct asic3 {int * clocks; int gpio; } ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct asic3*,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 size_t* VAR_1 ;
 struct asic3* FUNC_3 (int ) ;
 struct mfd_cell* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 const struct mfd_cell *VAR_3 = FUNC_4(VAR_2);
 struct asic3 *VAR_4 = FUNC_3(VAR_2->dev.parent);

 while (FUNC_2(&VAR_4->gpio, FUNC_0(VAR_0, VAR_3->id)) != 0)
  FUNC_5(1000, 5000);

 FUNC_1(VAR_4, &VAR_4->clocks[VAR_1[VAR_3->id]]);

 return 0;
}
