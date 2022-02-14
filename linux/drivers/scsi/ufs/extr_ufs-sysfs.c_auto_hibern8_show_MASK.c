
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int ahit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ufs_hba* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ufs_hba*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct ufs_hba *VAR_5 = FUNC_0(VAR_2);

 if (!FUNC_3(VAR_5))
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_1, "%d\n", FUNC_2(VAR_5->ahit));
}
