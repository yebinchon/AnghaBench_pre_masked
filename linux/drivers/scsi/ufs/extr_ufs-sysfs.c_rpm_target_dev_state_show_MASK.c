
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {size_t rpm_lvl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev_state; } ;


 struct ufs_hba* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 TYPE_1__* VAR_0 ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct ufs_hba *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, "%s\n", FUNC_2(
   VAR_0[VAR_4->rpm_lvl].dev_state));
}
