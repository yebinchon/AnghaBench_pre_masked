
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {scalar_t__ speed; int lock; scalar_t__ no_avb_link; scalar_t__ link; } ;
struct phy_device {scalar_t__ speed; scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct ravb_private*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct net_device*,int ,int ,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_2)
{
 struct ravb_private *VAR_3 = FUNC_0(VAR_2);
 struct phy_device *VAR_4 = VAR_2->phydev;
 bool VAR_5 = 0;
 unsigned long VAR_6;

 FUNC_7(&VAR_3->lock, VAR_6);


 if (VAR_3->no_avb_link)
  FUNC_4(VAR_2);

 if (VAR_4->link) {
  if (VAR_4->speed != VAR_3->speed) {
   VAR_5 = 1;
   VAR_3->speed = VAR_4->speed;
   FUNC_6(VAR_2);
  }
  if (!VAR_3->link) {
   FUNC_3(VAR_2, VAR_0, VAR_1, 0);
   VAR_5 = 1;
   VAR_3->link = VAR_4->link;
  }
 } else if (VAR_3->link) {
  VAR_5 = 1;
  VAR_3->link = 0;
  VAR_3->speed = 0;
 }


 if (VAR_3->no_avb_link && VAR_4->link)
  FUNC_5(VAR_2);

 FUNC_8(&VAR_3->lock, VAR_6);

 if (VAR_5 && FUNC_1(VAR_3))
  FUNC_2(VAR_4);
}
