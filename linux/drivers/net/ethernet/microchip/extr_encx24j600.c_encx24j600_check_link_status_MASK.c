
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct encx24j600_priv {scalar_t__ autoneg; int full_duplex; int speed; struct net_device* ndev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct encx24j600_priv*,int ) ;
 int FUNC_1 (struct encx24j600_priv*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct encx24j600_priv*,int ,struct net_device*,char*) ;

__attribute__((used)) static void FUNC_5(struct encx24j600_priv *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->ndev;
 u16 VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_1);

 if (VAR_8 & VAR_2) {
  if (VAR_6->autoneg == VAR_0)
   FUNC_1(VAR_6);

  FUNC_3(VAR_7);
  FUNC_4(VAR_6, VAR_5, VAR_7, "link up\n");
 } else {
  FUNC_4(VAR_6, VAR_4, VAR_7, "link down\n");




  VAR_6->autoneg = VAR_0;
  VAR_6->full_duplex = 1;
  VAR_6->speed = VAR_3;
  FUNC_2(VAR_7);
 }
}
