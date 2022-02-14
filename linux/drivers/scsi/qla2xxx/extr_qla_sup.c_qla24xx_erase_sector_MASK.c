
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ fac_supported; } ;
struct qla_hw_data {int fdt_block_size; int fdt_erase_cmd; TYPE_1__ flags; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (struct qla_hw_data*,int) ;
 int FUNC_1 (struct qla_hw_data*,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(scsi_qla_host_t *VAR_0, uint32_t VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_0->hw;
 uint32_t VAR_3, VAR_4;

 if (VAR_2->flags.fac_supported) {
  VAR_3 = VAR_1 >> 2;
  VAR_4 = VAR_3 + (VAR_2->fdt_block_size >> 2) - 1;
  return FUNC_2(VAR_0, FUNC_0(VAR_2,
      VAR_3), FUNC_0(VAR_2, VAR_4));
 }

 return FUNC_1(VAR_2, VAR_2->fdt_erase_cmd,
     (VAR_1 & 0xff00) | ((VAR_1 << 16) & 0xff0000) |
     ((VAR_1 >> 16) & 0xff));
}
