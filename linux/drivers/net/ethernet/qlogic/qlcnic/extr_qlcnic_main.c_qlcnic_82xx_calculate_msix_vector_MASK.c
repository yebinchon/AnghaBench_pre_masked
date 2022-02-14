
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int drv_sds_rings; scalar_t__ drv_tx_rings; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->drv_sds_rings;

 if (FUNC_0(VAR_1))
  VAR_2 += VAR_1->drv_tx_rings;
 else
  VAR_2 += VAR_0;

 return VAR_2;
}
