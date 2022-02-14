
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int drv_sds_rings; int flags; scalar_t__ drv_tx_rings; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_adapter *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->drv_sds_rings;


 VAR_2 += 1;

 if (!(VAR_1->flags & VAR_0))
  VAR_2 += VAR_1->drv_tx_rings;

 return VAR_2;
}
