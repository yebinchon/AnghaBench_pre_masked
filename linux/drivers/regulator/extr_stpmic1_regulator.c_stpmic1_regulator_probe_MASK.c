
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_4 (struct platform_device*,int,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_3(&VAR_2->dev, VAR_2->dev.of_node, VAR_0,
     FUNC_0(VAR_0));
 if (VAR_4 < 0) {
  FUNC_2(&VAR_2->dev,
   "Error in PMIC regulator device tree node");
  return VAR_4;
 }

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_4 = FUNC_4(VAR_2, VAR_3, &VAR_0[VAR_3],
       &VAR_1[VAR_3]);
  if (VAR_4 < 0)
   return VAR_4;
 }

 FUNC_1(&VAR_2->dev, "stpmic1_regulator driver probed\n");

 return 0;
}
