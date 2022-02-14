
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* ulpWord; } ;
struct TYPE_4__ {scalar_t__ ulpStatus; TYPE_1__ un; } ;
struct lpfc_iocbq {TYPE_2__ iocb; } ;
struct lpfc_hba {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct lpfc_hba *VAR_2,
  struct lpfc_iocbq *VAR_3,
  struct lpfc_iocbq *VAR_4)
{

 if ((VAR_4->iocb.ulpStatus != VAR_0) ||
  (VAR_4->iocb.un.ulpWord[4] != VAR_1))
  return 0;
 else
  return 1;
}
