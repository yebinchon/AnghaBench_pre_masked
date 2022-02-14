
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {scalar_t__ link; int speed; int duplex; } ;
struct net_device {struct phy_device* phydev; } ;
struct au1000_private {int old_speed; int old_duplex; scalar_t__ old_link; int lock; TYPE_1__* mac; } ;
struct TYPE_2__ {int control; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 struct au1000_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void
FUNC_12(struct net_device *VAR_3)
{
 struct au1000_private *VAR_4 = FUNC_5(VAR_3);
 struct phy_device *VAR_5 = VAR_3->phydev;
 unsigned long VAR_6;
 u32 VAR_7;

 int VAR_8 = 0;

 FUNC_0(!VAR_5);

 FUNC_8(&VAR_4->lock, VAR_6);

 if (VAR_5->link && (VAR_4->old_speed != VAR_5->speed)) {


  switch (VAR_5->speed) {
  case 129:
  case 128:
   break;
  default:
   FUNC_6(VAR_3, "Speed (%d) is not 10/100 ???\n",
       VAR_5->speed);
   break;
  }

  VAR_4->old_speed = VAR_5->speed;

  VAR_8 = 1;
 }

 if (VAR_5->link && (VAR_4->old_duplex != VAR_5->duplex)) {



  FUNC_2(VAR_3);

  VAR_7 = FUNC_7(&VAR_4->mac->control);
  if (VAR_0 == VAR_5->duplex) {
   VAR_7 |= VAR_2;
   VAR_7 &= ~VAR_1;
  } else {
   VAR_7 &= ~VAR_2;
   VAR_7 |= VAR_1;
  }
  FUNC_11(VAR_7, &VAR_4->mac->control);
  FUNC_10();
  FUNC_3(1);

  FUNC_1(VAR_3);
  VAR_4->old_duplex = VAR_5->duplex;

  VAR_8 = 1;
 }

 if (VAR_5->link != VAR_4->old_link) {


  if (!VAR_5->link) {

   VAR_4->old_speed = 0;
   VAR_4->old_duplex = -1;
  }

  VAR_4->old_link = VAR_5->link;
  VAR_8 = 1;
 }

 FUNC_9(&VAR_4->lock, VAR_6);

 if (VAR_8) {
  if (VAR_5->link)
   FUNC_4(VAR_3, "link up (%d/%s)\n",
          VAR_5->speed,
          VAR_0 == VAR_5->duplex ? "Full" : "Half");
  else
   FUNC_4(VAR_3, "link down\n");
 }
}
