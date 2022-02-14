
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct device* FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_5)
{
 struct device *VAR_6 = FUNC_0(&VAR_5->dev);

 FUNC_1(VAR_6, VAR_3, 0,
  VAR_4 | VAR_1 | VAR_2 | VAR_0);
 return 0;
}
