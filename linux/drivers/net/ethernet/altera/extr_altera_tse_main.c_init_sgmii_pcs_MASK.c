
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct altera_tse_private {scalar_t__ phy_iface; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 struct altera_tse_private* FUNC_2 (struct net_device*) ;
 unsigned int FUNC_3 (struct altera_tse_private*,int ) ;
 scalar_t__ FUNC_4 (struct altera_tse_private*,int) ;
 int FUNC_5 (struct altera_tse_private*,int ,unsigned int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_14)
{
 struct altera_tse_private *VAR_15 = FUNC_2(VAR_14);
 int VAR_16;
 unsigned int VAR_17 = 0;

 if (VAR_15->phy_iface != VAR_9)
  return 0;
 if (FUNC_4(VAR_15, 0x0000) &&
  FUNC_4(VAR_15, 0xffff) &&
  FUNC_4(VAR_15, 0xa5a5) &&
  FUNC_4(VAR_15, 0x5a5a)) {
  FUNC_1(VAR_14, "PCS PHY ID: 0x%04x%04x\n",
    FUNC_3(VAR_15, VAR_7),
    FUNC_3(VAR_15, VAR_8));
 } else {
  FUNC_0(VAR_14, "SGMII PCS Scratch memory test failed.\n");
  return -VAR_4;
 }




 FUNC_5(VAR_15, VAR_11, 0x0D40);
 FUNC_5(VAR_15, VAR_12, 0x03);


 FUNC_5(VAR_15, VAR_10, 0x3);


 VAR_17 = FUNC_3(VAR_15, VAR_6);
 VAR_17 |= (VAR_3 | VAR_1 | VAR_0);
 FUNC_5(VAR_15, VAR_6, VAR_17);


 VAR_17 |= VAR_2;
 FUNC_5(VAR_15, VAR_6, VAR_17);
 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  if (!(FUNC_3(VAR_15, VAR_6) & VAR_2)) {
   FUNC_1(VAR_14, "SGMII PCS block initialised OK\n");
   return 0;
  }
  FUNC_6(1);
 }


 FUNC_0(VAR_14, "SGMII PCS block reset failed.\n");
 return -VAR_5;
}
