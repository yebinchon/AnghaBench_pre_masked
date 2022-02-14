
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int * type; } ;




 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_2, unsigned long VAR_3,
  void *VAR_4)
{
 struct device *VAR_5 = VAR_4;

 switch (VAR_3) {
 case 129:
  if (VAR_5->type == &VAR_0)
   (void) FUNC_2(FUNC_0(VAR_5));
  else if (VAR_5->type == &VAR_1)
   FUNC_3(FUNC_1(VAR_5));
  break;

 case 128:
  if (VAR_5->type == &VAR_0)
   FUNC_4(FUNC_0(VAR_5));
  else if (VAR_5->type == &VAR_1)
   FUNC_5(FUNC_1(VAR_5));
  break;
 }
 return 0;
}
