
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int ulpStatus; } ;
struct lpfc_iocbq {TYPE_1__ iocb; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int ,...) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_2, struct lpfc_iocbq *VAR_3,
     struct lpfc_dmabuf *VAR_4, uint32_t VAR_5)
{
 if (!VAR_4) {
  FUNC_0(VAR_2, VAR_0, VAR_1,
    "0146 Ignoring unsolicited CT No HBQ "
    "status = x%x\n",
    VAR_3->iocb.ulpStatus);
 }
 FUNC_0(VAR_2, VAR_0, VAR_1,
   "0145 Ignoring unsolicted CT HBQ Size:%d "
   "status = x%x\n",
   VAR_5, VAR_3->iocb.ulpStatus);
}
