
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,struct resource*) ;
 int VAR_3 ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct resource *VAR_6;

 VAR_6 = FUNC_4(VAR_5, VAR_1, 0);
 if (!VAR_6)
  return -VAR_0;

 VAR_2 = FUNC_3(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_2(&VAR_3,
           &VAR_4);

 return 0;
}
