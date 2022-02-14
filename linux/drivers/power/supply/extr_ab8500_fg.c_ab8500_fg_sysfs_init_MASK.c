
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_fg {int dev; int fg_kobject; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int *,int *,char*) ;

__attribute__((used)) static int FUNC_2(struct ab8500_fg *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_1(&VAR_1->fg_kobject,
  &VAR_0,
  ((void*)0), "battery");
 if (VAR_2 < 0)
  FUNC_0(VAR_1->dev, "failed to create sysfs entry\n");

 return VAR_2;
}
