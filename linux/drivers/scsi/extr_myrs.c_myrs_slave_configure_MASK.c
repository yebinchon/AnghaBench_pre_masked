
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {scalar_t__ channel; scalar_t__ type; int no_uld_attach; scalar_t__ lun; int wce_default_on; int tagged_supported; struct myrs_ldev_info* hostdata; TYPE_3__* host; } ;
struct TYPE_5__ {scalar_t__ wce; } ;
struct myrs_ldev_info {TYPE_2__ ldev_control; } ;
struct myrs_hba {TYPE_1__* ctlr_info; } ;
struct TYPE_6__ {scalar_t__ max_channel; } ;
struct TYPE_4__ {scalar_t__ physchan_present; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct myrs_hba* FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_4)
{
 struct myrs_hba *VAR_5 = FUNC_0(VAR_4->host);
 struct myrs_ldev_info *VAR_6;

 if (VAR_4->channel > VAR_4->host->max_channel)
  return -VAR_0;

 if (VAR_4->channel < VAR_5->ctlr_info->physchan_present) {

  if (VAR_4->type == VAR_3)
   return -VAR_0;
  VAR_4->no_uld_attach = 1;
  return 0;
 }
 if (VAR_4->lun != 0)
  return -VAR_0;

 VAR_6 = VAR_4->hostdata;
 if (!VAR_6)
  return -VAR_0;
 if (VAR_6->ldev_control.wce == VAR_2 ||
     VAR_6->ldev_control.wce == VAR_1)
  VAR_4->wce_default_on = 1;
 VAR_4->tagged_supported = 1;
 return 0;
}
