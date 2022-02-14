
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {long high_pll; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct hl_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct hl_device*) ;
 int FUNC_2 (char const*,int ,long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct hl_device *VAR_6 = FUNC_0(VAR_2);
 long VAR_7;
 int VAR_8;

 if (FUNC_1(VAR_6)) {
  VAR_5 = -VAR_1;
  goto out;
 }

 VAR_8 = FUNC_2(VAR_4, 0, &VAR_7);

 if (VAR_8) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_6->high_pll = VAR_7;

out:
 return VAR_5;
}
