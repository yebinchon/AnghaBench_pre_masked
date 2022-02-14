
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_2,
       unsigned long VAR_3, void *VAR_4)
{
 struct device *VAR_5 = VAR_4;
 int VAR_6 = 0;

 switch (VAR_3) {
 case 129:
  VAR_6 = FUNC_1(VAR_5);
  break;
 case 128:
  VAR_6 = FUNC_2(VAR_5);
  break;
 default:
  return VAR_0;
 }
 if (VAR_6)
  FUNC_0(VAR_5, "Failed to %s - passthrough or MSI/MSI-X might fail!\n",
   VAR_3 == 129 ? "add" :
   (VAR_3 == 128 ? "delete" : "?"));
 return VAR_1;
}
