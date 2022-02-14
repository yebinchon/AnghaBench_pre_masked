
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_udc {int udp_baseaddr; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct lpc32xx_udc*,int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static u32 FUNC_7(struct lpc32xx_udc *VAR_2, u32 VAR_3)
{
 int VAR_4 = 1000;


 FUNC_6((VAR_1 | VAR_0),
       FUNC_1(VAR_2->udp_baseaddr));


 FUNC_5(VAR_2, VAR_3);

 while ((!(FUNC_4(FUNC_2(VAR_2->udp_baseaddr)) & VAR_1))
        && (VAR_4 > 0))
  VAR_4--;
 if (!VAR_4)
  FUNC_3(VAR_2->dev,
   "Protocol engine didn't receive response (CDFULL)\n");

 return FUNC_4(FUNC_0(VAR_2->udp_baseaddr));
}
