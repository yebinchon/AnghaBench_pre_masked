
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int scsi_lun; } ;
struct ipr_resource_entry {scalar_t__ bus; scalar_t__ target; scalar_t__ lun; TYPE_2__ dev_lun; int dev_id; TYPE_1__* ioa_cfg; } ;
struct TYPE_12__ {TYPE_5__* cfgte; TYPE_3__* cfgte64; } ;
struct ipr_config_table_entry_wrapper {TYPE_6__ u; } ;
struct TYPE_10__ {scalar_t__ bus; scalar_t__ target; scalar_t__ lun; } ;
struct TYPE_11__ {TYPE_4__ res_addr; } ;
struct TYPE_9__ {int lun; int dev_id; } ;
struct TYPE_7__ {scalar_t__ sis64; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ipr_resource_entry *VAR_0,
         struct ipr_config_table_entry_wrapper *VAR_1)
{
 if (VAR_0->ioa_cfg->sis64) {
  if (!FUNC_0(&VAR_0->dev_id, &VAR_1->u.cfgte64->dev_id,
     sizeof(VAR_1->u.cfgte64->dev_id)) &&
   !FUNC_0(&VAR_0->dev_lun.scsi_lun, &VAR_1->u.cfgte64->lun,
     sizeof(VAR_1->u.cfgte64->lun))) {
   return 1;
  }
 } else {
  if (VAR_0->bus == VAR_1->u.cfgte->res_addr.bus &&
      VAR_0->target == VAR_1->u.cfgte->res_addr.target &&
      VAR_0->lun == VAR_1->u.cfgte->res_addr.lun)
   return 1;
 }

 return 0;
}
