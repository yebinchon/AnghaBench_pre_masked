
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2 {int phy_lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnx2*,int) ;
 int FUNC_1 (struct bnx2*,int ) ;
 scalar_t__ FUNC_2 (struct bnx2*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct bnx2 *VAR_6)
{
 int VAR_7 = 0;

 if (!FUNC_3(VAR_6->dev))
  return VAR_1;

 FUNC_1(VAR_6, VAR_0);
 FUNC_4(&VAR_6->phy_lock);
 FUNC_0(VAR_6, 1);
 FUNC_5(&VAR_6->phy_lock);
 if (FUNC_2(VAR_6, VAR_2))
  VAR_7 |= VAR_3;
 if (FUNC_2(VAR_6, VAR_4))
  VAR_7 |= VAR_5;
 return VAR_7;
}
