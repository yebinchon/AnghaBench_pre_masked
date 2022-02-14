
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ushort ;
struct scsi_device {int id; scalar_t__ lun; scalar_t__ tagged_supported; scalar_t__ sdtr; } ;
struct TYPE_6__ {int use_tagged_qng; int init_sdtr; int* max_dvc_qng; int iop_base; TYPE_1__* cfg; } ;
struct TYPE_5__ {int sdtr_enable; int cmd_qng_enabled; int can_tagged_qng; int disc_enable; int* max_tag_qng; } ;
typedef int ASC_SCSI_BIT_ID_TYPE ;
typedef TYPE_2__ ASC_DVC_VAR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,struct scsi_device*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct scsi_device*,int) ;

__attribute__((used)) static void
FUNC_3(struct scsi_device *VAR_4, ASC_DVC_VAR *VAR_5)
{
 ASC_SCSI_BIT_ID_TYPE VAR_6 = 1 << VAR_4->id;
 ASC_SCSI_BIT_ID_TYPE VAR_7 = VAR_5->use_tagged_qng;

 if (VAR_4->lun == 0) {
  ASC_SCSI_BIT_ID_TYPE VAR_8 = VAR_5->init_sdtr;
  if ((VAR_5->cfg->sdtr_enable & VAR_6) && VAR_4->sdtr) {
   VAR_5->init_sdtr |= VAR_6;
  } else {
   VAR_5->init_sdtr &= ~VAR_6;
  }

  if (VAR_8 != VAR_5->init_sdtr)
   FUNC_0(VAR_5, VAR_4);
 }

 if (VAR_4->tagged_supported) {
  if (VAR_5->cfg->cmd_qng_enabled & VAR_6) {
   if (VAR_4->lun == 0) {
    VAR_5->cfg->can_tagged_qng |= VAR_6;
    VAR_5->use_tagged_qng |= VAR_6;
   }
   FUNC_2(VAR_4,
      VAR_5->max_dvc_qng[VAR_4->id]);
  }
 } else {
  if (VAR_4->lun == 0) {
   VAR_5->cfg->can_tagged_qng &= ~VAR_6;
   VAR_5->use_tagged_qng &= ~VAR_6;
  }
 }

 if ((VAR_4->lun == 0) &&
     (VAR_7 != VAR_5->use_tagged_qng)) {
  FUNC_1(VAR_5->iop_base, VAR_1,
     VAR_5->cfg->disc_enable);
  FUNC_1(VAR_5->iop_base, VAR_3,
     VAR_5->use_tagged_qng);
  FUNC_1(VAR_5->iop_base, VAR_0,
     VAR_5->cfg->can_tagged_qng);

  VAR_5->max_dvc_qng[VAR_4->id] =
     VAR_5->cfg->max_tag_qng[VAR_4->id];
  FUNC_1(VAR_5->iop_base,
     (ushort)(VAR_2 + VAR_4->id),
     VAR_5->max_dvc_qng[VAR_4->id]);
 }
}
