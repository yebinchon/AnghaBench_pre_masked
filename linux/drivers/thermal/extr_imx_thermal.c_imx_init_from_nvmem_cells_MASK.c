
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;


 int FUNC_0 (struct platform_device*,int ) ;
 int FUNC_1 (struct platform_device*,int ) ;
 int FUNC_2 (int *,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 int VAR_1;
 u32 VAR_2;

 VAR_1 = FUNC_2(&VAR_0->dev, "calib", &VAR_2);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, VAR_2);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2(&VAR_0->dev, "temp_grade", &VAR_2);
 if (VAR_1)
  return VAR_1;
 FUNC_1(VAR_0, VAR_2);

 return 0;
}
