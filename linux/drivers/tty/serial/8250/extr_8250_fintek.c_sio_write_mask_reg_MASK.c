
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fintek_8250 {int dummy; } ;


 int FUNC_0 (struct fintek_8250*,int) ;
 int FUNC_1 (struct fintek_8250*,int,int) ;

__attribute__((used)) static void FUNC_2(struct fintek_8250 *VAR_0, u8 VAR_1, u8 VAR_2,
          u8 VAR_3)
{
 u8 VAR_4;

 VAR_4 = (FUNC_0(VAR_0, VAR_1) & ~VAR_2) | (VAR_2 & VAR_3);
 FUNC_1(VAR_0, VAR_1, VAR_4);
}
