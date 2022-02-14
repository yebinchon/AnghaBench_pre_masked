
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_csiphy {int phy_in_use; int mutex; int csi2; } ;


 int VAR_0 ;
 int FUNC_0 (struct iss_csiphy*) ;
 int FUNC_1 (struct iss_csiphy*) ;
 int FUNC_2 (struct iss_csiphy*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct iss_csiphy *VAR_1)
{
 int VAR_2;

 FUNC_3(&VAR_1->mutex);

 VAR_2 = FUNC_5(VAR_1->csi2);
 if (VAR_2)
  goto done;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (VAR_2)
  goto done;

 VAR_1->phy_in_use = 1;

done:
 FUNC_4(&VAR_1->mutex);
 return VAR_2;
}
