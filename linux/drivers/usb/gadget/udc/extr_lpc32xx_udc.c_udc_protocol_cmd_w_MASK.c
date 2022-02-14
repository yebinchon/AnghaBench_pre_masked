
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_udc {int udp_baseaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct lpc32xx_udc *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;


 u32 VAR_5 = FUNC_4(FUNC_2(VAR_1->udp_baseaddr));
 (void) VAR_5;

 while (VAR_3 == 0) {
  FUNC_5(VAR_0, FUNC_1(VAR_1->udp_baseaddr));


  FUNC_5(VAR_2, FUNC_0(VAR_1->udp_baseaddr));
  VAR_4 = 10000;
  while (((FUNC_4(FUNC_2(VAR_1->udp_baseaddr)) &
    VAR_0) == 0) && (VAR_4 > 0)) {
   VAR_4--;
  }

  if (VAR_4 > 0)
   VAR_3 = 1;

  FUNC_3();
 }
}
