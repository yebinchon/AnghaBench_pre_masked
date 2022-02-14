
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_fuse {int dummy; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {scalar_t__ size; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 struct tegra_fuse* FUNC_0 (struct device*) ;
 char FUNC_1 (struct tegra_fuse*,scalar_t__) ;
 struct device* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_0, struct kobject *VAR_1,
    struct bin_attribute *VAR_2, char *VAR_3,
    loff_t VAR_4, size_t VAR_5)
{
 struct device *VAR_6 = FUNC_2(VAR_1);
 struct tegra_fuse *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 if (VAR_4 < 0 || VAR_4 >= VAR_2->size)
  return 0;

 if (VAR_5 > VAR_2->size - VAR_4)
  VAR_5 = VAR_2->size - VAR_4;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  VAR_3[VAR_8] = FUNC_1(VAR_7, VAR_4 + VAR_8);

 return VAR_8;
}
