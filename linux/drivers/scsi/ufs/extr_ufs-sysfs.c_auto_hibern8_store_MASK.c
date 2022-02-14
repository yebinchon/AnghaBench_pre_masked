
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 struct ufs_hba* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned int*) ;
 int FUNC_2 (struct ufs_hba*,int ) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct ufs_hba *VAR_7 = FUNC_0(VAR_3);
 unsigned int VAR_8;

 if (!FUNC_3(VAR_7))
  return -VAR_1;

 if (FUNC_1(VAR_5, 0, &VAR_8))
  return -VAR_0;

 if (VAR_8 > VAR_2)
  return -VAR_0;

 FUNC_2(VAR_7, FUNC_4(VAR_8));

 return VAR_6;
}
