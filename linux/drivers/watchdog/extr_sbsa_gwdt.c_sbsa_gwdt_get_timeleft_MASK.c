
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct watchdog_device {int dummy; } ;
struct sbsa_gwdt {int clk; scalar_t__ control_base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (scalar_t__) ;
 struct sbsa_gwdt* FUNC_4 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_5(struct watchdog_device *VAR_5)
{
 struct sbsa_gwdt *VAR_6 = FUNC_4(VAR_5);
 u64 VAR_7 = 0;






 if (!VAR_4 &&
     !(FUNC_3(VAR_6->control_base + VAR_0) & VAR_1))
  VAR_7 += FUNC_3(VAR_6->control_base + VAR_3);

 VAR_7 += FUNC_2(VAR_6->control_base + VAR_2) -
      FUNC_0();

 FUNC_1(VAR_7, VAR_6->clk);

 return VAR_7;
}
