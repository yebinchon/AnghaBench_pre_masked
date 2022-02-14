
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qlcnic_adapter {int drv_sds_rings; scalar_t__ max_sds_rings; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int ) ;

void FUNC_1(struct qlcnic_adapter *VAR_1, u8 VAR_2)
{

 if (VAR_1->max_sds_rings)
  VAR_1->drv_sds_rings = FUNC_0(VAR_1, VAR_2,
         VAR_0);
 else
  VAR_1->drv_sds_rings = VAR_2;
}
