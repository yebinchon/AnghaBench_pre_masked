
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int FUNC_0 (char*,...) ;






 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_0, unsigned long VAR_1, void *VAR_2)
{
 FUNC_0("pm notif %lu\n", VAR_1);

 switch (VAR_1) {
 case 128:
 case 133:
 case 129:
  FUNC_0("suspending displays\n");
  return FUNC_2();

 case 130:
 case 132:
 case 131:
  FUNC_0("resuming displays\n");
  return FUNC_1();

 default:
  return 0;
 }
}
