
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct ath5k_hw {struct device* dev; } ;


 int FUNC_0 (struct ath5k_hw*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

int
FUNC_2(struct ath5k_hw *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->kobj, &VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_1, "failed to create sysfs group\n");
  return VAR_3;
 }

 return 0;
}
