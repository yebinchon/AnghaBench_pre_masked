
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct bbc_i2c_bus {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bbc_i2c_bus*,struct platform_device*,int ) ;
 int FUNC_3 (struct bbc_i2c_bus*,struct platform_device*,int ) ;
 struct platform_device* FUNC_4 (struct bbc_i2c_bus*,int ) ;
 int FUNC_5 (struct bbc_i2c_bus*) ;
 int FUNC_6 (struct bbc_i2c_bus*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_7 (int ,int *,char*) ;
 scalar_t__ FUNC_8 (int ,char*) ;

int FUNC_9(struct bbc_i2c_bus *VAR_2)
{
 struct platform_device *VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;

 while ((VAR_3 = FUNC_4(VAR_2, VAR_6++)) != ((void*)0)) {
  if (FUNC_8(VAR_3->dev.of_node, "temperature"))
   FUNC_3(VAR_2, VAR_3, VAR_4++);
  if (FUNC_8(VAR_3->dev.of_node, "fan-control"))
   FUNC_2(VAR_2, VAR_3, VAR_5++);
 }
 if (VAR_4 != 0 && VAR_5 != 0) {
  VAR_1 = FUNC_7(VAR_0, ((void*)0), "kenvctrld");
  if (FUNC_0(VAR_1)) {
   int VAR_7 = FUNC_1(VAR_1);

   VAR_1 = ((void*)0);
   FUNC_6(VAR_2);
   FUNC_5(VAR_2);
   return VAR_7;
  }
 }

 return 0;
}
