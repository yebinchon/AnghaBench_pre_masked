
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sama5d4_wdt {scalar_t__ last_ping; scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sama5d4_wdt *VAR_2, u32 VAR_3, u32 VAR_4)
{





 while (FUNC_0(VAR_1, VAR_2->last_ping + VAR_0))
  FUNC_1(30, 125);
 FUNC_2(VAR_4, VAR_2->reg_base + VAR_3);
 VAR_2->last_ping = VAR_1;
}
