
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct platform_device*,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{




 int VAR_3 = FUNC_2(VAR_2, 0);

 if (VAR_3 < 0) {
  if (VAR_3 != -VAR_0)
   FUNC_0(&VAR_2->dev, "cannot obtain irq\n");
  return VAR_3;
 }

 return FUNC_1(VAR_2, &VAR_1);
}
