
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtu3 {int qmu_gpd_pool; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int ,int ,int,int ) ;

int FUNC_2(struct mtu3 *VAR_3)
{

 FUNC_0(VAR_2 == 16, "QMU_GPD size SHOULD be 16B");

 VAR_3->qmu_gpd_pool = FUNC_1("QMU_GPD", VAR_3->dev,
   VAR_1, VAR_2, 0);

 if (!VAR_3->qmu_gpd_pool)
  return -VAR_0;

 return 0;
}
