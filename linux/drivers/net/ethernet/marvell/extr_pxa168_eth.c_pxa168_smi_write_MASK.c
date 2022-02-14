
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pxa168_eth_private {int dev; } ;
struct mii_bus {struct pxa168_eth_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct pxa168_eth_private*) ;
 int FUNC_3 (struct pxa168_eth_private*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_3, int VAR_4, int VAR_5,
       u16 VAR_6)
{
 struct pxa168_eth_private *VAR_7 = VAR_3->priv;

 if (FUNC_2(VAR_7)) {
  FUNC_1(VAR_7->dev, "pxa168_eth: SMI bus busy timeout\n");
  return -VAR_0;
 }

 FUNC_3(VAR_7, VAR_1, (VAR_4 << 16) | (VAR_5 << 21) |
     VAR_2 | (VAR_6 & 0xffff));

 if (FUNC_2(VAR_7)) {
  FUNC_0(VAR_7->dev, "pxa168_eth: SMI bus busy timeout\n");
  return -VAR_0;
 }

 return 0;
}
