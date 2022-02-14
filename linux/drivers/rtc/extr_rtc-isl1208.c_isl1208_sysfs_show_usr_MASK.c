
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3 = FUNC_0(FUNC_2(VAR_0->parent));
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_2, "0x%.4x\n", VAR_3);
}
