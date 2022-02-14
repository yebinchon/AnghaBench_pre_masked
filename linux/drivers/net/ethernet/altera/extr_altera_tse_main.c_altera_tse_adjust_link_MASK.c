
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {int duplex; int speed; scalar_t__ link; } ;
struct net_device {int name; struct phy_device* phydev; } ;
struct altera_tse_private {int oldduplex; int oldspeed; int oldlink; int mac_cfg_lock; TYPE_1__* mac_dev; int dev; } ;
struct TYPE_2__ {int command_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*,int ,int) ;
 struct altera_tse_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 scalar_t__ FUNC_5 (struct altera_tse_private*) ;
 int FUNC_6 (struct phy_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_3)
{
 struct altera_tse_private *VAR_4 = FUNC_3(VAR_3);
 struct phy_device *VAR_5 = VAR_3->phydev;
 int VAR_6 = 0;


 FUNC_7(&VAR_4->mac_cfg_lock);
 if (VAR_5->link) {

  u32 VAR_7 = FUNC_0(&VAR_4->mac_dev->command_config);


  if (VAR_5->duplex != VAR_4->oldduplex) {
   VAR_6 = 1;
   if (!(VAR_5->duplex))
    VAR_7 |= VAR_2;
   else
    VAR_7 &= ~VAR_2;

   FUNC_2(VAR_4->dev, "%s: Link duplex = 0x%x\n",
       VAR_3->name, VAR_5->duplex);

   VAR_4->oldduplex = VAR_5->duplex;
  }


  if (VAR_5->speed != VAR_4->oldspeed) {
   VAR_6 = 1;
   switch (VAR_5->speed) {
   case 1000:
    VAR_7 |= VAR_1;
    VAR_7 &= ~VAR_0;
    break;
   case 100:
    VAR_7 &= ~VAR_1;
    VAR_7 &= ~VAR_0;
    break;
   case 10:
    VAR_7 &= ~VAR_1;
    VAR_7 |= VAR_0;
    break;
   default:
    if (FUNC_5(VAR_4))
     FUNC_4(VAR_3, "Speed (%d) is not 10/100/1000!\n",
          VAR_5->speed);
    break;
   }
   VAR_4->oldspeed = VAR_5->speed;
  }
  FUNC_1(VAR_7, &VAR_4->mac_dev->command_config);

  if (!VAR_4->oldlink) {
   VAR_6 = 1;
   VAR_4->oldlink = 1;
  }
 } else if (VAR_4->oldlink) {
  VAR_6 = 1;
  VAR_4->oldlink = 0;
  VAR_4->oldspeed = 0;
  VAR_4->oldduplex = -1;
 }

 if (VAR_6 && FUNC_5(VAR_4))
  FUNC_6(VAR_5);

 FUNC_8(&VAR_4->mac_cfg_lock);
}
