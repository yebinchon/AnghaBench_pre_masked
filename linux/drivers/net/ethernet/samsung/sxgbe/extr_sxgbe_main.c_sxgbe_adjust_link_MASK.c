
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sxgbe_priv_data {int speed; int oldlink; int ioaddr; TYPE_2__* hw; } ;
struct phy_device {int speed; scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;
struct TYPE_4__ {TYPE_1__* mac; } ;
struct TYPE_3__ {int (* set_speed ) (int ,int) ;} ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sxgbe_priv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sxgbe_priv_data*,int ,struct net_device*,char*,int) ;
 int FUNC_2 (struct sxgbe_priv_data*) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct sxgbe_priv_data*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5)
{
 struct sxgbe_priv_data *VAR_6 = FUNC_0(VAR_5);
 struct phy_device *VAR_7 = VAR_5->phydev;
 u8 VAR_8 = 0;
 u8 VAR_9 = 0xff;

 if (!VAR_7)
  return;





 if (VAR_7->link) {
  if (VAR_7->speed != VAR_6->speed) {
   VAR_8 = 1;
   switch (VAR_7->speed) {
   case 129:
    VAR_9 = VAR_1;
    break;
   case 128:
    VAR_9 = VAR_3;
    break;
   case 130:
    VAR_9 = VAR_2;
    break;
   default:
    FUNC_1(VAR_6, VAR_4, VAR_5,
       "Speed (%d) not supported\n",
       VAR_7->speed);
   }

   VAR_6->speed = VAR_7->speed;
   VAR_6->hw->mac->set_speed(VAR_6->ioaddr, VAR_9);
  }

  if (!VAR_6->oldlink) {
   VAR_8 = 1;
   VAR_6->oldlink = 1;
  }
 } else if (VAR_6->oldlink) {
  VAR_8 = 1;
  VAR_6->oldlink = 0;
  VAR_6->speed = VAR_0;
 }

 if (VAR_8 & FUNC_2(VAR_6))
  FUNC_3(VAR_7);


 FUNC_5(VAR_6);
}
