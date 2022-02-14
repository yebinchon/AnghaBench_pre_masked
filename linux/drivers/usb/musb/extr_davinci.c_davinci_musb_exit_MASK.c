
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct musb {int xceiv; int controller; int mregs; int dev_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct musb*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct musb *VAR_6)
{
 int VAR_7 = 30;
 u8 VAR_8, VAR_9 = 0;

 FUNC_4(&VAR_6->dev_timer);


 if (FUNC_2()) {
  u32 VAR_10 = FUNC_0(VAR_0);

  VAR_10 &= ~VAR_1;
  VAR_10 |= VAR_2;
  FUNC_1(VAR_10, VAR_0);
 }

 FUNC_3(VAR_6, 0 , 1);






 do {
  VAR_8 = FUNC_7(VAR_6->mregs, VAR_3);
  if (!(VAR_8 & VAR_4))
   break;
  if ((VAR_8 & VAR_4) != VAR_9) {
   VAR_9 = VAR_8 & VAR_4;
   FUNC_5(VAR_6->controller, "VBUS %d\n",
    VAR_9 >> VAR_5);
  }
  FUNC_6(1000);
  VAR_7--;
 } while (VAR_7 > 0);


 if (VAR_8 & VAR_4)
  FUNC_5(VAR_6->controller, "VBUS off timeout (devctl %02x)\n", VAR_8);

 FUNC_8();

 FUNC_9(VAR_6->xceiv);

 return 0;
}
