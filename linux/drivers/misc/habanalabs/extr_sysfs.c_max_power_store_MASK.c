
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {unsigned long max_power; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct hl_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct hl_device*) ;
 int FUNC_2 (struct hl_device*,unsigned long) ;
 int FUNC_3 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct hl_device *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;
 int VAR_8;

 if (FUNC_1(VAR_6)) {
  VAR_5 = -VAR_1;
  goto out;
 }

 VAR_8 = FUNC_3(VAR_4, 0, &VAR_7);

 if (VAR_8) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_6->max_power = VAR_7;
 FUNC_2(VAR_6, VAR_7);

out:
 return VAR_5;
}
