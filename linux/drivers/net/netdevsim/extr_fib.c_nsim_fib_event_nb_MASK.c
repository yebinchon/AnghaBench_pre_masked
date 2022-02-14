
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct fib_notifier_info {int dummy; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (struct fib_notifier_info*,int) ;
 int FUNC_2 (struct fib_notifier_info*,int) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_0, unsigned long VAR_1,
        void *VAR_2)
{
 struct fib_notifier_info *VAR_3 = VAR_2;
 int VAR_4 = 0;

 switch (VAR_1) {
 case 129:
 case 128:
  VAR_4 = FUNC_2(VAR_3, VAR_1 == 129);
  break;

 case 131:
 case 130:
  VAR_4 = FUNC_1(VAR_3, VAR_1 == 131);
  break;
 }

 return FUNC_0(VAR_4);
}
