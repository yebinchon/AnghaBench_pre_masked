
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct component_match {int dummy; } ;


 int FUNC_0 (int *,int *,struct component_match*) ;
 int FUNC_1 (int *,struct component_match**,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct component_match *VAR_3 = ((void*)0);
 int VAR_4;


 FUNC_1(&VAR_2->dev, &VAR_3, VAR_0);

 VAR_4 = FUNC_0(&VAR_2->dev, &VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;

 return 0;
}
