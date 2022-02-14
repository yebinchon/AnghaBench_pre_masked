
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct musb {int controller; int mregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(struct musb *VAR_3)
{
 u8 VAR_4;
 bool VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_3->mregs, VAR_0);
 FUNC_0(VAR_3->controller, "babble: MUSB_BABBLE_CTL value %x\n",
  VAR_4);




 FUNC_0(VAR_3->controller, "STUCK_J is %s\n",
  VAR_4 & VAR_2 ? "set" : "reset");

 if (VAR_4 & VAR_2) {
  int VAR_6 = 10;





  VAR_4 = FUNC_1(VAR_3->mregs, VAR_0);
  VAR_4 |= VAR_1;
  FUNC_2(VAR_3->mregs, VAR_0, VAR_4);


  FUNC_0(VAR_3->controller, "Set TXIDLE, wait J to clear\n");
  do {
   VAR_4 = FUNC_1(VAR_3->mregs, VAR_0);
   FUNC_3(1);
  } while ((VAR_4 & VAR_2) && VAR_6--);


  if (VAR_4 & VAR_2) {





   FUNC_0(VAR_3->controller, "J not cleared, misc (%x)\n",
    VAR_4);
   VAR_5 = 1;
  }
 } else {
  VAR_5 = 1;
 }

 return VAR_5;
}
