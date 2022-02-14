
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct hl_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct hl_device*,int,int) ;
 int FUNC_2 (char const*,int ,long*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, const char *VAR_3,
    size_t VAR_4)
{
 struct hl_device *VAR_5 = FUNC_0(VAR_1);
 long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, 0, &VAR_6);

 if (VAR_7) {
  VAR_4 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_5, 0, 0);

out:
 return VAR_4;
}
