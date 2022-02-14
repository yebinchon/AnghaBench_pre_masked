
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->dev, ((void*)0), VAR_0);
 if (VAR_2)
  FUNC_0(&VAR_1->dev, "can't remove smd device: %d\n", VAR_2);

 return VAR_2;
}
