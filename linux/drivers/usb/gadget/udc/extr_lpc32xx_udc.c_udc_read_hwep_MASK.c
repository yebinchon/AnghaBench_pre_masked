
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct lpc32xx_udc {int udp_baseaddr; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lpc32xx_udc*,int) ;
 int FUNC_5 (struct lpc32xx_udc*,int *,int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static u32 FUNC_7(struct lpc32xx_udc *VAR_3, u32 VAR_4, u32 *VAR_5,
    u32 VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 1000;
 u32 VAR_9, VAR_10 = ((VAR_4 & 0x1E) << 1) | VAR_0;


 FUNC_6(VAR_10, FUNC_0(VAR_3->udp_baseaddr));


 while ((((VAR_7 = FUNC_3(FUNC_1(VAR_3->udp_baseaddr))) &
   VAR_2) == 0) && (VAR_8 > 0))
  VAR_8--;
 if (!VAR_8)
  FUNC_2(VAR_3->dev, "No packet ready on FIFO EP read\n");


 VAR_9 = VAR_7 & VAR_1;
 if (VAR_6 < VAR_9)
  VAR_9 = VAR_6;

 if ((VAR_9 > 0) && (VAR_5 != ((void*)0)))
  FUNC_5(VAR_3, (u8 *) VAR_5, VAR_9);

 FUNC_6(((VAR_4 & 0x1E) << 1), FUNC_0(VAR_3->udp_baseaddr));


 FUNC_4(VAR_3, VAR_4);

 return VAR_9;
}
