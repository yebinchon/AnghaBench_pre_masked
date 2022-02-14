
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_eee {scalar_t__ advertised; scalar_t__ tx_lpi_timer; } ;
struct tg3 {int phy_flags; int dev; struct ethtool_eee eee; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tg3* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct tg3*,int ) ;
 int FUNC_4 (struct tg3*) ;
 int FUNC_5 (struct tg3*) ;
 int FUNC_6 (struct tg3*) ;
 int FUNC_7 (struct tg3*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5, struct ethtool_eee *VAR_6)
{
 struct tg3 *VAR_7 = FUNC_0(VAR_5);

 if (!(VAR_7->phy_flags & VAR_3)) {
  FUNC_1(VAR_7->dev, "Board does not support EEE!\n");
  return -VAR_1;
 }

 if (VAR_6->advertised != VAR_7->eee.advertised) {
  FUNC_1(VAR_7->dev,
       "Direct manipulation of EEE advertisement is not supported\n");
  return -VAR_0;
 }

 if (VAR_6->tx_lpi_timer > VAR_2) {
  FUNC_1(VAR_7->dev,
       "Maximal Tx Lpi timer supported is %#x(u)\n",
       VAR_2);
  return -VAR_0;
 }

 VAR_7->eee = *VAR_6;

 VAR_7->phy_flags |= VAR_4;
 FUNC_7(VAR_7);

 if (FUNC_2(VAR_7->dev)) {
  FUNC_3(VAR_7, 0);
  FUNC_6(VAR_7);
  FUNC_5(VAR_7);
  FUNC_4(VAR_7);
 }

 return 0;
}
