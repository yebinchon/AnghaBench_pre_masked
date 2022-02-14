
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int,int ) ;
 unsigned long FUNC_1 () ;
 unsigned long FUNC_2 (char const*,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;

 VAR_6 = FUNC_2(VAR_4, ((void*)0), 10);
 if (VAR_6 >= FUNC_1())
  return -VAR_0;

 FUNC_0(0xa5 << 24 | VAR_6 << 4, VAR_1);

 return VAR_5;
}
