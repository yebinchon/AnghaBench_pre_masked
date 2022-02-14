
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct lcd_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct lcd_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct lcd_device*) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 struct lcd_device* FUNC_3 (int *,int ,int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_4 (struct lcd_device*,int ) ;
 int FUNC_5 (struct lcd_device*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct platform_device*,struct lcd_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct lcd_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(&VAR_4->dev, VAR_2,
     &VAR_4->dev, ((void*)0), &VAR_3);

 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  FUNC_2(&VAR_4->dev, "failed to register device\n");
  return VAR_6;
 }

 FUNC_7(VAR_4, VAR_5);


 FUNC_4(VAR_5, VAR_1);
 FUNC_5(VAR_5, VAR_0);

 FUNC_6(100);

 return 0;
}
