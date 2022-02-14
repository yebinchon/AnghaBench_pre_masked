
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r852_device {int ctlreg; scalar_t__ card_unstable; } ;
struct nand_chip {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct nand_chip*) ;
 struct r852_device* FUNC_1 (int ) ;
 int FUNC_2 (struct r852_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_14, int VAR_15, unsigned int VAR_16)
{
 struct r852_device *VAR_17 = FUNC_1(FUNC_0(VAR_14));

 if (VAR_17->card_unstable)
  return;

 if (VAR_16 & VAR_5) {

  VAR_17->ctlreg &= ~(VAR_10 | VAR_9 |
     VAR_11 | VAR_8);

  if (VAR_16 & VAR_0)
   VAR_17->ctlreg |= VAR_10;

  if (VAR_16 & VAR_1)
   VAR_17->ctlreg |= VAR_9;

  if (VAR_16 & VAR_6)
   VAR_17->ctlreg |= (VAR_8 | VAR_11);
  else
   VAR_17->ctlreg &= ~VAR_12;


  if (VAR_15 == VAR_2)
   VAR_17->ctlreg |= VAR_12;

  FUNC_2(VAR_17, VAR_7, VAR_17->ctlreg);
 }



 if (VAR_15 == VAR_4 && (VAR_17->ctlreg & VAR_9)) {
  VAR_17->ctlreg |= VAR_12;
  FUNC_2(VAR_17, VAR_7, VAR_17->ctlreg);
 }

 if (VAR_15 != VAR_3)
  FUNC_2(VAR_17, VAR_13, VAR_15);
}
