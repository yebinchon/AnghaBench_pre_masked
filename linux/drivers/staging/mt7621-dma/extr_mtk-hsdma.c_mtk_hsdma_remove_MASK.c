
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mtk_hsdam_engine {int ddev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mtk_hsdam_engine*) ;
 int FUNC_2 (int ) ;
 struct mtk_hsdam_engine* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct mtk_hsdam_engine *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1);

 FUNC_2(VAR_0->dev.of_node);
 FUNC_0(&VAR_1->ddev);

 return 0;
}
