
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {int id; scalar_t__ lun; scalar_t__ tagged_supported; scalar_t__ ppr; scalar_t__ sdtr; scalar_t__ wdtr; } ;
struct TYPE_4__ {unsigned short wdtr_able; unsigned short sdtr_able; scalar_t__ chip_type; unsigned short tagqng_able; int max_dvc_qng; int iop_base; } ;
typedef int AdvPortAddr ;
typedef TYPE_1__ ADV_DVC_VAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned short) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,unsigned short) ;
 int FUNC_3 (TYPE_1__*,int ,unsigned short) ;
 int FUNC_4 (int ,unsigned short) ;
 int FUNC_5 (int ,unsigned short) ;
 int FUNC_6 (struct scsi_device*,int ) ;

__attribute__((used)) static void
FUNC_7(struct scsi_device *VAR_3, ADV_DVC_VAR *VAR_4)
{
 AdvPortAddr VAR_5 = VAR_4->iop_base;
 unsigned short VAR_6 = 1 << VAR_3->id;

 if (VAR_3->lun == 0) {






  if ((VAR_4->wdtr_able & VAR_6) && VAR_3->wdtr)
   FUNC_5(VAR_5, VAR_6);
  if ((VAR_4->sdtr_able & VAR_6) && VAR_3->sdtr)
   FUNC_4(VAR_5, VAR_6);
  if (VAR_4->chip_type == VAR_0 && VAR_3->ppr)
   FUNC_3(VAR_4, VAR_5, VAR_6);







  if ((VAR_4->tagqng_able & VAR_6) &&
      VAR_3->tagged_supported) {
   unsigned short VAR_7;
   FUNC_0(VAR_5, VAR_2, VAR_7);
   VAR_7 |= VAR_6;
   FUNC_2(VAR_5, VAR_2,
      VAR_7);
   FUNC_1(VAR_5,
      VAR_1 + VAR_3->id,
      VAR_4->max_dvc_qng);
  }
 }

 if ((VAR_4->tagqng_able & VAR_6) && VAR_3->tagged_supported)
  FUNC_6(VAR_3, VAR_4->max_dvc_qng);
}
