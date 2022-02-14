
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2 {int phy_flags; int phy_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2*,int) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*,int ) ;
 int FUNC_3 (struct bnx2*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct bnx2 *VAR_2, int VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_2(VAR_2, VAR_0)) != 0)
  return VAR_4;

 FUNC_4(&VAR_2->phy_lock);
 FUNC_0(VAR_2, VAR_3);
 FUNC_3(VAR_2);
 if (VAR_2->phy_flags & VAR_1)
  FUNC_1(VAR_2);
 FUNC_5(&VAR_2->phy_lock);
 return 0;
}
