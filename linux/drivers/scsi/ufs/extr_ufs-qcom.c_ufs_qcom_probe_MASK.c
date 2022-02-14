
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = &VAR_1->dev;


 VAR_2 = FUNC_1(VAR_1, &VAR_0);
 if (VAR_2)
  FUNC_0(VAR_3, "ufshcd_pltfrm_init() failed %d\n", VAR_2);

 return VAR_2;
}
