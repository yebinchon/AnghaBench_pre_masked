
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mfd_cell {size_t id; } ;
struct asic3 {int * clocks; } ;


 int FUNC_0 (struct asic3*,int *) ;
 size_t* VAR_0 ;
 struct asic3* FUNC_1 (int ) ;
 struct mfd_cell* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 const struct mfd_cell *VAR_2 = FUNC_2(VAR_1);
 struct asic3 *VAR_3 = FUNC_1(VAR_1->dev.parent);

 FUNC_0(VAR_3, &VAR_3->clocks[VAR_0[VAR_2->id]]);

 return 0;
}
