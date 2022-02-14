
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_device {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct mei_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mei_device*) ;

irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct mei_device *VAR_4 = (struct mei_device *)VAR_3;
 u32 VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 if (!FUNC_2(VAR_5))
  return VAR_0;

 FUNC_0(VAR_4->dev, "interrupt source 0x%08X\n", FUNC_2(VAR_5));


 FUNC_1(VAR_4, VAR_5);
 return VAR_1;
}
