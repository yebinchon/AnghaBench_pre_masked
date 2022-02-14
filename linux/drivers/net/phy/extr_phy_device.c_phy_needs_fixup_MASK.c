
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_fixup {int phy_uid; int phy_uid_mask; int bus_id; } ;
struct phy_device {int phy_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_2, struct phy_fixup *VAR_3)
{
 if (FUNC_1(VAR_3->bus_id, FUNC_0(VAR_2)) != 0)
  if (FUNC_1(VAR_3->bus_id, VAR_0) != 0)
   return 0;

 if ((VAR_3->phy_uid & VAR_3->phy_uid_mask) !=
     (VAR_2->phy_id & VAR_3->phy_uid_mask))
  if (VAR_3->phy_uid != VAR_1)
   return 0;

 return 1;
}
