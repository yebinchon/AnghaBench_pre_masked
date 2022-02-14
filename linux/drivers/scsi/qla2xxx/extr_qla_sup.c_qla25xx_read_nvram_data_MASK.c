
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int flt_region_vpd_nvram; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct qla_hw_data*,int) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*,int,int*) ;

uint8_t *
FUNC_3(scsi_qla_host_t *VAR_0, void *VAR_1, uint32_t VAR_2,
    uint32_t VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_0->hw;
 uint32_t *VAR_5 = VAR_1;
 uint32_t VAR_6;


 VAR_2 = FUNC_1(VAR_4, VAR_4->flt_region_vpd_nvram | VAR_2);
 VAR_3 >>= 2;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_2++, VAR_5++) {
  if (FUNC_2(VAR_4, VAR_2, VAR_5))
   break;

  FUNC_0(VAR_5);
 }

 return VAR_1;
}
