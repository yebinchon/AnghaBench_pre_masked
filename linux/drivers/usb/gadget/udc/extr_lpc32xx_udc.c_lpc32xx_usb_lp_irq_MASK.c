
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_udc {int enabled_devints; int lock; int dev; int udp_baseaddr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct lpc32xx_udc*) ;
 int FUNC_7 (struct lpc32xx_udc*,int ) ;
 int FUNC_8 (struct lpc32xx_udc*,int ) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_6, void *VAR_7)
{
 u32 VAR_8, VAR_9;
 struct lpc32xx_udc *VAR_10 = VAR_7;

 FUNC_4(&VAR_10->lock);


 VAR_9 = FUNC_3(FUNC_1(VAR_10->udp_baseaddr));

 VAR_9 &= ~VAR_5;
 FUNC_9(VAR_9, FUNC_0(VAR_10->udp_baseaddr));
 VAR_9 = VAR_9 & VAR_10->enabled_devints;


 if (VAR_9 & VAR_4)
  FUNC_6(VAR_10);






 if (VAR_9 & VAR_2) {




  FUNC_8(VAR_10, VAR_0);
  VAR_8 = FUNC_7(VAR_10, VAR_1);
  FUNC_2(VAR_10->dev, "Device error (0x%x)!\n", VAR_8);
 }

 FUNC_5(&VAR_10->lock);

 return VAR_3;
}
