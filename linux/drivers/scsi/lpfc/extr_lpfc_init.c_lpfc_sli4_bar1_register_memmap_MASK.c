
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ drbl_regs_memmap_p; scalar_t__ MQDBregaddr; scalar_t__ EQDBregaddr; scalar_t__ CQDBregaddr; scalar_t__ WQDBregaddr; scalar_t__ RQDBregaddr; scalar_t__ ctrl_regs_memmap_p; scalar_t__ ISCRregaddr; scalar_t__ IMRregaddr; scalar_t__ ISRregaddr; scalar_t__ PSMPHRregaddr; } ;
struct lpfc_hba {TYPE_2__* pcidev; TYPE_1__ sli4_hba; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;




 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_9, uint32_t VAR_10)
{
 switch (VAR_10) {
 case 131:
  VAR_9->sli4_hba.PSMPHRregaddr =
   VAR_9->sli4_hba.ctrl_regs_memmap_p +
   VAR_8;
  VAR_9->sli4_hba.ISRregaddr = VAR_9->sli4_hba.ctrl_regs_memmap_p +
   VAR_2;
  VAR_9->sli4_hba.IMRregaddr = VAR_9->sli4_hba.ctrl_regs_memmap_p +
   VAR_0;
  VAR_9->sli4_hba.ISCRregaddr = VAR_9->sli4_hba.ctrl_regs_memmap_p +
   VAR_1;
  break;
 case 128:
  VAR_9->sli4_hba.RQDBregaddr = VAR_9->sli4_hba.drbl_regs_memmap_p +
   VAR_6;
  VAR_9->sli4_hba.WQDBregaddr = VAR_9->sli4_hba.drbl_regs_memmap_p +
   VAR_7;
  VAR_9->sli4_hba.CQDBregaddr = VAR_9->sli4_hba.drbl_regs_memmap_p +
   VAR_3;
  VAR_9->sli4_hba.EQDBregaddr = VAR_9->sli4_hba.drbl_regs_memmap_p +
   VAR_4;
  VAR_9->sli4_hba.MQDBregaddr = VAR_9->sli4_hba.drbl_regs_memmap_p +
   VAR_5;
  break;
 case 129:
 case 130:
 default:
  FUNC_0(&VAR_9->pcidev->dev,
      "FATAL - unsupported SLI4 interface type - %d\n",
      VAR_10);
  break;
 }
}
