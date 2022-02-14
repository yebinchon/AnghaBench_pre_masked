
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int phy_flags; int phy_lock; int mii_bmsr1; scalar_t__ link_up; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*,int ,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct bnx2 *VAR_3)
{
 u32 VAR_4;

 if (!FUNC_3(VAR_3->dev))
  return -VAR_2;

 if (VAR_3->phy_flags & VAR_1) {
  if (VAR_3->link_up)
   return 0;
  return -VAR_2;
 }
 FUNC_4(&VAR_3->phy_lock);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3, VAR_3->mii_bmsr1, &VAR_4);
 FUNC_2(VAR_3, VAR_3->mii_bmsr1, &VAR_4);
 FUNC_0(VAR_3);
 FUNC_5(&VAR_3->phy_lock);

 if (VAR_4 & VAR_0) {
  return 0;
 }
 return -VAR_2;
}
