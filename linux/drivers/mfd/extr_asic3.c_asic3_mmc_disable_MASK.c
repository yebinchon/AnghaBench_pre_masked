
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct asic3 {int * clocks; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct asic3*,int *) ;
 int FUNC_2 (struct asic3*,int ,int ,int) ;
 struct asic3* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_7)
{
 struct asic3 *VAR_8 = FUNC_3(VAR_7->dev.parent);


 FUNC_2(VAR_8, FUNC_0(VAR_6, VAR_5),
      VAR_4, 1);


 FUNC_1(VAR_8, &VAR_8->clocks[VAR_3]);
 FUNC_1(VAR_8, &VAR_8->clocks[VAR_2]);
 FUNC_1(VAR_8, &VAR_8->clocks[VAR_0]);
 FUNC_1(VAR_8, &VAR_8->clocks[VAR_1]);
 return 0;
}
