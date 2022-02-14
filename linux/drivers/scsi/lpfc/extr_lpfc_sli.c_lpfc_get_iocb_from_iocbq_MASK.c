
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_iocbq {int iocb; } ;
typedef int IOCB_t ;



__attribute__((used)) static IOCB_t *
FUNC_0(struct lpfc_iocbq *VAR_0)
{
 return &VAR_0->iocb;
}
