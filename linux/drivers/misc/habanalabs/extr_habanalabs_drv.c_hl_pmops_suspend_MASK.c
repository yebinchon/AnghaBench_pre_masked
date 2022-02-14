
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dummy; } ;
struct device {int dummy; } ;


 struct hl_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct hl_device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct hl_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_2("Going to suspend PCI device\n");

 if (!VAR_1) {
  FUNC_3("device pointer is NULL in suspend\n");
  return 0;
 }

 return FUNC_1(VAR_1);
}
