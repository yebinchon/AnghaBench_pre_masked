
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_reset_data {scalar_t__ membase; } ;
struct reset_controller_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct stm32_reset_data* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_1,
         unsigned long VAR_2)
{
 struct stm32_reset_data *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = sizeof(u32);
 int VAR_5 = VAR_2 / (VAR_4 * VAR_0);
 int VAR_6 = VAR_2 % (VAR_4 * VAR_0);
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_3->membase + (VAR_5 * VAR_4));

 return !!(VAR_7 & FUNC_0(VAR_6));
}
