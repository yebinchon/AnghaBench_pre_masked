
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lsRjtRsnCode; } ;
struct TYPE_8__ {TYPE_3__ b; int lsRjtError; } ;
struct ls_rjt {TYPE_4__ un; } ;
struct TYPE_5__ {int* ulpWord; } ;
struct TYPE_6__ {int ulpStatus; TYPE_1__ un; } ;
struct lpfc_iocbq {int iocb_flag; int (* iocb_cmpl ) (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;int (* fabric_iocb_cmpl ) (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;TYPE_2__ iocb; } ;
struct lpfc_hba {int bit_flags; int fabric_iocb_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_5, struct lpfc_iocbq *VAR_6,
 struct lpfc_iocbq *VAR_7)
{
 struct ls_rjt VAR_8;

 FUNC_0((VAR_6->iocb_flag & VAR_1) != VAR_1);

 switch (VAR_7->iocb.ulpStatus) {
  case 128:
  case 131:
   if (VAR_7->iocb.un.ulpWord[4] & VAR_4) {
    FUNC_4(VAR_5);
   }
   break;

  case 129:
  case 132:
   FUNC_4(VAR_5);
   break;

  case 130:
   VAR_8.un.lsRjtError =
    FUNC_3(VAR_7->iocb.un.ulpWord[4]);
   if ((VAR_8.un.b.lsRjtRsnCode == VAR_3) ||
    (VAR_8.un.b.lsRjtRsnCode == VAR_2))
    FUNC_4(VAR_5);
   break;
 }

 FUNC_0(FUNC_2(&VAR_5->fabric_iocb_count) == 0);

 VAR_6->iocb_cmpl = VAR_6->fabric_iocb_cmpl;
 VAR_6->fabric_iocb_cmpl = ((void*)0);
 VAR_6->iocb_flag &= ~VAR_1;
 VAR_6->iocb_cmpl(VAR_5, VAR_6, VAR_7);

 FUNC_1(&VAR_5->fabric_iocb_count);
 if (!FUNC_7(VAR_0, &VAR_5->bit_flags)) {

  FUNC_5(VAR_5);
 }
}
