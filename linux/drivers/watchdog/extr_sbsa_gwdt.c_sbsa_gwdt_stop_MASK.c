
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct sbsa_gwdt {scalar_t__ control_base; } ;


 scalar_t__ VAR_0 ;
 struct sbsa_gwdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct sbsa_gwdt *VAR_2 = FUNC_0(VAR_1);


 FUNC_1(0, VAR_2->control_base + VAR_0);

 return 0;
}
