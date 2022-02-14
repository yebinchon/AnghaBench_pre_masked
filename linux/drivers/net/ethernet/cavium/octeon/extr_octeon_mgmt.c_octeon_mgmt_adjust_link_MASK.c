
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ link; scalar_t__ duplex; scalar_t__ speed; } ;
struct octeon_mgmt {scalar_t__ last_link; scalar_t__ last_duplex; scalar_t__ last_speed; int lock; } ;
struct net_device {struct phy_device* phydev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 struct octeon_mgmt* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct octeon_mgmt*) ;
 int FUNC_3 (struct octeon_mgmt*) ;
 int FUNC_4 (struct octeon_mgmt*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1)
{
 struct octeon_mgmt *VAR_2 = FUNC_1(VAR_1);
 struct phy_device *VAR_3 = VAR_1->phydev;
 unsigned long VAR_4;
 int VAR_5 = 0;

 if (!VAR_3)
  return;

 FUNC_5(&VAR_2->lock, VAR_4);


 if (!VAR_3->link && VAR_2->last_link)
  VAR_5 = -1;

 if (VAR_3->link &&
     (VAR_2->last_duplex != VAR_3->duplex ||
      VAR_2->last_link != VAR_3->link ||
      VAR_2->last_speed != VAR_3->speed)) {
  FUNC_2(VAR_2);
  VAR_5 = 1;
  FUNC_4(VAR_2);
  FUNC_3(VAR_2);
 }

 VAR_2->last_link = VAR_3->link;
 VAR_2->last_speed = VAR_3->speed;
 VAR_2->last_duplex = VAR_3->duplex;

 FUNC_6(&VAR_2->lock, VAR_4);

 if (VAR_5 != 0) {
  if (VAR_5 > 0)
   FUNC_0(VAR_1, "Link is up - %d/%s\n",
        VAR_3->speed, VAR_3->duplex == VAR_0 ? "Full" : "Half");
  else
   FUNC_0(VAR_1, "Link is down\n");
 }
}
