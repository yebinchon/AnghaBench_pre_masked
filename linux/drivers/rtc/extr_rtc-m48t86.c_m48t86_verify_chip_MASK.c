
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned char,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct platform_device *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0 - 2);
 unsigned int VAR_3 = FUNC_0(VAR_0 - 1);
 unsigned char VAR_4, VAR_5;

 VAR_4 = FUNC_1(&VAR_1->dev, VAR_2);
 VAR_5 = FUNC_1(&VAR_1->dev, VAR_3);

 FUNC_2(&VAR_1->dev, 0x00, VAR_2);
 FUNC_2(&VAR_1->dev, 0x55, VAR_3);
 if (FUNC_1(&VAR_1->dev, VAR_3) == 0x55) {
  FUNC_2(&VAR_1->dev, 0xaa, VAR_3);
  if (FUNC_1(&VAR_1->dev, VAR_3) == 0xaa &&
      FUNC_1(&VAR_1->dev, VAR_2) == 0x00) {
   FUNC_2(&VAR_1->dev, VAR_4, VAR_2);
   FUNC_2(&VAR_1->dev, VAR_5, VAR_3);

   return 1;
  }
 }
 return 0;
}
