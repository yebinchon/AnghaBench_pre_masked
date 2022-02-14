
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r852_device {int ctlreg; scalar_t__ card_unstable; } ;
struct nand_chip {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nand_chip*) ;
 struct r852_device* FUNC_1 (int ) ;
 int FUNC_2 (struct r852_device*,int ) ;
 int FUNC_3 (struct r852_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_4, int VAR_5)
{
 struct r852_device *VAR_6 = FUNC_1(FUNC_0(VAR_4));

 if (VAR_6->card_unstable)
  return;

 switch (VAR_5) {
 case 130:
 case 128:

  VAR_6->ctlreg |= VAR_2;


  FUNC_3(VAR_6, VAR_0,
   VAR_6->ctlreg | VAR_1);

  FUNC_2(VAR_6, VAR_3);
  FUNC_3(VAR_6, VAR_0, VAR_6->ctlreg);
  return;

 case 129:

  VAR_6->ctlreg &= ~VAR_2;
  FUNC_3(VAR_6, VAR_0, VAR_6->ctlreg);
 }
}
