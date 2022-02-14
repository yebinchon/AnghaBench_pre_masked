
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_switch {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (char const*,int ,unsigned int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (struct tb_switch*,unsigned int) ;
 struct tb_switch* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct tb_switch *VAR_5 = FUNC_5(VAR_1);
 unsigned int VAR_6;
 ssize_t VAR_7;

 VAR_7 = FUNC_0(VAR_3, 0, &VAR_6);
 if (VAR_7)
  return VAR_7;
 if (VAR_6 > 2)
  return -VAR_0;

 FUNC_1(&VAR_5->dev);
 VAR_7 = FUNC_4(VAR_5, VAR_6);
 FUNC_2(&VAR_5->dev);
 FUNC_3(&VAR_5->dev);

 return VAR_7 ? VAR_7 : VAR_4;
}
