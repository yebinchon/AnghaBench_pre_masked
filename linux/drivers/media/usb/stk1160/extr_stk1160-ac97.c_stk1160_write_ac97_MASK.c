
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct stk1160 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct stk1160*) ;
 int FUNC_1 (struct stk1160*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct stk1160 *VAR_3, u16 VAR_4, u16 VAR_5)
{

 FUNC_1(VAR_3, VAR_1, VAR_4);


 FUNC_1(VAR_3, VAR_2, VAR_5 & 0xff);
 FUNC_1(VAR_3, VAR_2 + 1, (VAR_5 & 0xff00) >> 8);


 FUNC_1(VAR_3, VAR_0, 0x8c);


 FUNC_0(VAR_3);
}
