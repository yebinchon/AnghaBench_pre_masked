
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * ulpWord; } ;
struct TYPE_4__ {TYPE_1__ un; int ulpStatus; } ;
struct lpfc_iocbq {int iocb_flag; TYPE_2__ iocb; scalar_t__ context2; } ;
struct lpfc_hba {int fabric_iocb_count; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
typedef TYPE_2__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_3, struct lpfc_iocbq *VAR_4,
   struct lpfc_iocbq *VAR_5)
{
 IOCB_t *VAR_6;
 uint32_t *VAR_7;
 uint32_t VAR_8;

 VAR_7 = (uint32_t *)(((struct lpfc_dmabuf *)VAR_4->context2)->virt);
 VAR_8 = *VAR_7;
 VAR_6 = &VAR_5->iocb;

 FUNC_2(VAR_3, VAR_0, VAR_1,
   "6445 ELS completes after LINK_DOWN: "
   " Status %x/%x cmd x%x flg x%x\n",
   VAR_6->ulpStatus, VAR_6->un.ulpWord[4], VAR_8,
   VAR_4->iocb_flag);

 if (VAR_4->iocb_flag & VAR_2) {
  VAR_4->iocb_flag &= ~VAR_2;
  FUNC_0(&VAR_3->fabric_iocb_count);
 }
 FUNC_1(VAR_3, VAR_4);
}
