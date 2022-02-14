
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct lpc32xx_udc {int udp_baseaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lpc32xx_udc*,int *,int) ;
 int FUNC_4 (struct lpc32xx_udc*,int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct lpc32xx_udc *VAR_1, u32 VAR_2, u32 *VAR_3,
      u32 VAR_4)
{
 u32 VAR_5 = ((VAR_2 & 0x1E) << 1) | VAR_0;

 if ((VAR_4 > 0) && (VAR_3 == ((void*)0)))
  return;


 FUNC_5(VAR_5, FUNC_0(VAR_1->udp_baseaddr));

 FUNC_5(VAR_4, FUNC_2(VAR_1->udp_baseaddr));


 if (VAR_4 == 0)
  FUNC_5(0, FUNC_1(VAR_1->udp_baseaddr));
 else
  FUNC_3(VAR_1, (u8 *) VAR_3, VAR_4);

 FUNC_5(((VAR_2 & 0x1E) << 1), FUNC_0(VAR_1->udp_baseaddr));

 FUNC_4(VAR_1, VAR_2);
}
