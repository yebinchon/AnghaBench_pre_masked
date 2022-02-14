
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2_napi {int dummy; } ;
struct bnx2 {int phy_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2*,struct bnx2_napi*,int ) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bnx2 *VAR_2, struct bnx2_napi *VAR_3)
{
 FUNC_3(&VAR_2->phy_lock);

 if (FUNC_0(VAR_2, VAR_3, VAR_0))
  FUNC_1(VAR_2);
 if (FUNC_0(VAR_2, VAR_3, VAR_1))
  FUNC_2(VAR_2);

 FUNC_4(&VAR_2->phy_lock);

}
