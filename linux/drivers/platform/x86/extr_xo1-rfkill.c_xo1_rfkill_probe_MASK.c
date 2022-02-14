
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct platform_device {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct platform_device*,struct rfkill*) ;
 struct rfkill* FUNC_1 (int ,int *,int ,int *,int *) ;
 int FUNC_2 (struct rfkill*) ;
 int VAR_2 ;
 int FUNC_3 (struct rfkill*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct rfkill *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3->name, &VAR_3->dev, VAR_1,
      &VAR_2, ((void*)0));
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return VAR_5;
 }

 FUNC_0(VAR_3, VAR_4);
 return 0;
}
