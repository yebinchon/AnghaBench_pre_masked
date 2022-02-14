
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;


 int FUNC_0 (struct device_attribute**) ;
 struct device_attribute** VAR_0 ;

__attribute__((used)) static int FUNC_1(struct device_attribute *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2] == VAR_1)
   return VAR_2;
 }

 return -1;
}
