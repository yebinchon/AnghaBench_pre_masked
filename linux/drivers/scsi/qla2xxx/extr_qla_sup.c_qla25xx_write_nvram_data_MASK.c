
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int flt_region_vpd_nvram; TYPE_1__* isp_ops; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_6__ {int (* write_optrom ) (TYPE_2__*,int *,int,int ) ;int (* read_optrom ) (TYPE_2__*,int *,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void*,int) ;
 int FUNC_1 (TYPE_2__*,int *,int,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

int
FUNC_5(scsi_qla_host_t *VAR_3, void *VAR_4, uint32_t VAR_5,
    uint32_t VAR_6)
{
 struct qla_hw_data *VAR_7 = VAR_3->hw;
 uint8_t *VAR_8 = FUNC_4(VAR_2);

 if (!VAR_8)
  return VAR_0;
 VAR_7->isp_ops->read_optrom(VAR_3, VAR_8, VAR_7->flt_region_vpd_nvram << 2,
     VAR_2);
 FUNC_0(VAR_8 + (VAR_5 << 2), VAR_4, VAR_6);
 VAR_7->isp_ops->write_optrom(VAR_3, VAR_8, VAR_7->flt_region_vpd_nvram << 2,
     VAR_2);
 FUNC_3(VAR_8);

 return VAR_1;
}
