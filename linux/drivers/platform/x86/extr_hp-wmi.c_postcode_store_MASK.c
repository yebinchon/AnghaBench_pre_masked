
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int tmp ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__*,int,int) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3, struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 long unsigned int VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_1(VAR_5, 10, &VAR_7);
 if (!VAR_8 && VAR_7 != 1)
  VAR_8 = -VAR_0;
 if (VAR_8)
  goto out;


 VAR_9 = (u32) VAR_7;
 VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_9,
           sizeof(VAR_9), sizeof(VAR_9));

out:
 if (VAR_8)
  return VAR_8 < 0 ? VAR_8 : -VAR_0;

 return VAR_6;
}
