
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct class_attribute {int dummy; } ;
struct class {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char const*,char*,unsigned long*) ;

__attribute__((used)) static
ssize_t FUNC_1(struct class *VAR_2,
    struct class_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;
 ssize_t VAR_7;
 VAR_7 = FUNC_0(VAR_4, "%lu", &VAR_6);
 if (VAR_7 != 1)
  return -VAR_0;
 VAR_1 = VAR_6;
 return VAR_5;
}
