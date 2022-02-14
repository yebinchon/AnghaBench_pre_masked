
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy_device {scalar_t__ link; scalar_t__ speed; int duplex; } ;
struct net_device {int name; struct phy_device* phydev; } ;
struct greth_private {scalar_t__ speed; int duplex; scalar_t__ link; int devlock; TYPE_1__* regs; } ;
struct TYPE_2__ {int control; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct greth_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6)
{
 struct greth_private *VAR_7 = FUNC_2(VAR_6);
 struct phy_device *VAR_8 = VAR_6->phydev;
 unsigned long VAR_9;
 int VAR_10 = 0;
 u32 VAR_11;

 FUNC_4(&VAR_7->devlock, VAR_9);

 if (VAR_8->link) {

  if ((VAR_7->speed != VAR_8->speed) || (VAR_7->duplex != VAR_8->duplex)) {
   VAR_11 = FUNC_0(VAR_7->regs->control) &
          ~(VAR_1 | VAR_3 | VAR_2);

   if (VAR_8->duplex)
    VAR_11 |= VAR_1;

   if (VAR_8->speed == VAR_4)
    VAR_11 |= VAR_3;
   else if (VAR_8->speed == VAR_5)
    VAR_11 |= VAR_2;

   FUNC_1(VAR_7->regs->control, VAR_11);
   VAR_7->speed = VAR_8->speed;
   VAR_7->duplex = VAR_8->duplex;
   VAR_10 = 1;
  }
 }

 if (VAR_8->link != VAR_7->link) {
  if (!VAR_8->link) {
   VAR_7->speed = 0;
   VAR_7->duplex = -1;
  }
  VAR_7->link = VAR_8->link;

  VAR_10 = 1;
 }

 FUNC_5(&VAR_7->devlock, VAR_9);

 if (VAR_10) {
  if (VAR_8->link)
   FUNC_3("%s: link up (%d/%s)\n",
    VAR_6->name, VAR_8->speed,
    VAR_0 == VAR_8->duplex ? "Full" : "Half");
  else
   FUNC_3("%s: link down\n", VAR_6->name);
 }
}
