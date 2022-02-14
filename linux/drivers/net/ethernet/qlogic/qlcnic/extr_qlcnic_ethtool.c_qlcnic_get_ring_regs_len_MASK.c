
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int drv_tx_rings; int max_rds_rings; int drv_sds_rings; } ;



__attribute__((used)) static inline int FUNC_0(struct qlcnic_adapter *VAR_0)
{
 int VAR_1 = (VAR_0->drv_tx_rings * 5) +
       (VAR_0->max_rds_rings * 2) +
       (VAR_0->drv_sds_rings * 3) + 5;
 return VAR_1 * sizeof(u32);
}
