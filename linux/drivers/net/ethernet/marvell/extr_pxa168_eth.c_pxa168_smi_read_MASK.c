
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168_eth_private {int dev; } ;
struct mii_bus {struct pxa168_eth_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pxa168_eth_private*,int ) ;
 scalar_t__ FUNC_3 (struct pxa168_eth_private*) ;
 int FUNC_4 (struct pxa168_eth_private*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_6, int VAR_7, int VAR_8)
{
 struct pxa168_eth_private *VAR_9 = VAR_6->priv;
 int VAR_10 = 0;
 int VAR_11;

 if (FUNC_3(VAR_9)) {
  FUNC_1(VAR_9->dev, "pxa168_eth: SMI bus busy timeout\n");
  return -VAR_1;
 }
 FUNC_4(VAR_9, VAR_3, (VAR_7 << 16) | (VAR_8 << 21) | VAR_4);

 for (VAR_10 = 0; !((VAR_11 = FUNC_2(VAR_9, VAR_3)) & VAR_5); VAR_10++) {
  if (VAR_10 == VAR_2) {
   FUNC_1(VAR_9->dev,
        "pxa168_eth: SMI bus read not valid\n");
   return -VAR_0;
  }
  FUNC_0(10);
 }

 return VAR_11 & 0xffff;
}
