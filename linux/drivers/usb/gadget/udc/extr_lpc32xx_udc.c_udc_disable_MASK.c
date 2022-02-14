
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_udc {int udp_baseaddr; scalar_t__* udca_v_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct lpc32xx_udc*,int) ;
 int FUNC_8 (struct lpc32xx_udc*,int) ;
 int FUNC_9 (struct lpc32xx_udc*,int) ;
 int FUNC_10 (struct lpc32xx_udc*,int) ;
 int FUNC_11 (struct lpc32xx_udc*,int) ;
 int FUNC_12 (struct lpc32xx_udc*,int ,int ) ;
 int FUNC_13 (struct lpc32xx_udc*,int) ;
 int FUNC_14 (int,int ) ;

__attribute__((used)) static void FUNC_15(struct lpc32xx_udc *VAR_2)
{
 u32 VAR_3;


 FUNC_12(VAR_2, VAR_0, FUNC_0(0));
 FUNC_12(VAR_2, VAR_1, FUNC_0(0));


 FUNC_8(VAR_2, 0x3FF);


 for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
  FUNC_9(VAR_2, VAR_3);
  FUNC_7(VAR_2, VAR_3);
  FUNC_10(VAR_2, VAR_3);
  FUNC_13(VAR_2, VAR_3);
  VAR_2->udca_v_base[VAR_3] = 0;


  FUNC_11(VAR_2, VAR_3);
  FUNC_14((1 << VAR_3), FUNC_3(VAR_2->udp_baseaddr));
  FUNC_14((1 << VAR_3), FUNC_4(VAR_2->udp_baseaddr));
  FUNC_14((1 << VAR_3), FUNC_5(VAR_2->udp_baseaddr));
  FUNC_14((1 << VAR_3), FUNC_2(VAR_2->udp_baseaddr));
 }


 FUNC_14(0, FUNC_1(VAR_2->udp_baseaddr));

 FUNC_14(0, FUNC_6(VAR_2->udp_baseaddr));
}
