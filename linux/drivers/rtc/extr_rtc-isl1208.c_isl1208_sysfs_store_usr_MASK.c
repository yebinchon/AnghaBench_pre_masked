
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char const*,char*,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2,
   struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = -1;

 if (VAR_4[0] == '0' && (VAR_4[1] == 'x' || VAR_4[1] == 'X')) {
  if (FUNC_1(VAR_4, "%x", &VAR_6) != 1)
   return -VAR_0;
 } else {
  if (FUNC_1(VAR_4, "%d", &VAR_6) != 1)
   return -VAR_0;
 }

 if (VAR_6 < 0 || VAR_6 > 0xffff)
  return -VAR_0;

 if (FUNC_0(FUNC_2(VAR_2->parent), VAR_6))
  return -VAR_1;

 return VAR_5;
}
