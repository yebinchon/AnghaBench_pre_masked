
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lpc32xx_udc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct lpc32xx_udc*,int ) ;
 int FUNC_1 (struct lpc32xx_udc*,int ) ;

__attribute__((used)) static u16 FUNC_2(struct lpc32xx_udc *VAR_2)
{
 u16 VAR_3, VAR_4;

 FUNC_1(VAR_2, VAR_0);
 VAR_3 = (u16) FUNC_0(VAR_2, VAR_1);
 VAR_4 = (u16) FUNC_0(VAR_2, VAR_1);

 return (VAR_4 << 8) | VAR_3;
}
