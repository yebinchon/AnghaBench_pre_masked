
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abx500_chargalg {int dev; int chargalg_kobject; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int *,int *,char*) ;

__attribute__((used)) static int FUNC_2(struct abx500_chargalg *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_1(&VAR_1->chargalg_kobject,
  &VAR_0,
  ((void*)0), "abx500_chargalg");
 if (VAR_2 < 0)
  FUNC_0(VAR_1->dev, "failed to create sysfs entry\n");

 return VAR_2;
}
