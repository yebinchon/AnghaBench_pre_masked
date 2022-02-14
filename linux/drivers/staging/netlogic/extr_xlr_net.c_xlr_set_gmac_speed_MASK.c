
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlr_net_priv {int phy_speed; int port_id; int base_addr; } ;
struct phy_device {scalar_t__ interface; int speed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int ,int) ;
 struct phy_device* FUNC_1 (struct xlr_net_priv*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct xlr_net_priv*) ;

void FUNC_4(struct xlr_net_priv *VAR_10)
{
 struct phy_device *VAR_11 = FUNC_1(VAR_10);
 int VAR_12;

 if (VAR_11->interface == VAR_0)
  FUNC_3(VAR_10);

 if (VAR_11->speed != VAR_10->phy_speed) {
  VAR_12 = VAR_11->speed;
  if (VAR_12 == VAR_9) {

   FUNC_2(VAR_10->base_addr, VAR_3, 0x7217);
   VAR_10->phy_speed = VAR_12;
  } else if (VAR_12 == VAR_8 || VAR_12 == VAR_7) {

   FUNC_2(VAR_10->base_addr, VAR_3, 0x7117);
   VAR_10->phy_speed = VAR_12;
  }

  if (VAR_11->interface == VAR_0) {
   if (VAR_12 == VAR_7)
    FUNC_2(VAR_10->base_addr,
          VAR_2,
          VAR_4);
   if (VAR_12 == VAR_8)
    FUNC_2(VAR_10->base_addr,
          VAR_2,
          VAR_5);
   if (VAR_12 == VAR_9)
    FUNC_2(VAR_10->base_addr,
          VAR_2,
          VAR_6);
  }
  if (VAR_12 == VAR_7)
   FUNC_2(VAR_10->base_addr, VAR_1, 0x2);
  if (VAR_12 == VAR_8)
   FUNC_2(VAR_10->base_addr, VAR_1, 0x1);
  if (VAR_12 == VAR_9)
   FUNC_2(VAR_10->base_addr, VAR_1, 0x0);
 }
 FUNC_0("gmac%d : %dMbps\n", VAR_10->port_id, VAR_10->phy_speed);
}
