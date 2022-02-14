
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_0(struct device_driver *VAR_3,
 const char *VAR_4, size_t VAR_5)
{




 if (VAR_5 > 0) {
  if (VAR_4[0] == '0') {
   VAR_2 = VAR_1;
   return VAR_5;
  } else if (VAR_4[0] == '1') {
   VAR_2 = 1;
   return VAR_5;
  }
 }
 return -VAR_0;
}
