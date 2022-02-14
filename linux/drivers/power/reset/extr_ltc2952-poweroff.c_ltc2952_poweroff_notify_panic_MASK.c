
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct ltc2952_poweroff {int kernel_panic; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ltc2952_poweroff* FUNC_0 (struct notifier_block*,int ) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_2,
      unsigned long VAR_3, void *VAR_4)
{
 struct ltc2952_poweroff *VAR_5 = FUNC_0(VAR_2, VAR_1);

 VAR_5->kernel_panic = 1;
 return VAR_0;
}
