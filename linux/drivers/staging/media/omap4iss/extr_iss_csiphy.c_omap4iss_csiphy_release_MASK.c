
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_csiphy {int mutex; scalar_t__ phy_in_use; } ;


 int VAR_0 ;
 int FUNC_0 (struct iss_csiphy*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iss_csiphy *VAR_1)
{
 FUNC_1(&VAR_1->mutex);
 if (VAR_1->phy_in_use) {
  FUNC_0(VAR_1, VAR_0);
  VAR_1->phy_in_use = 0;
 }
 FUNC_2(&VAR_1->mutex);
}
