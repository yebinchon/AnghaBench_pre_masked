
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_qpair {int * vha; } ;
typedef int srb_t ;
typedef int scsi_qla_host_t ;


 void* FUNC_0 (struct qla_qpair*,int *) ;
 scalar_t__ FUNC_1 (int *) ;

void *
FUNC_2(struct qla_qpair *VAR_0, srb_t *VAR_1)
{
 scsi_qla_host_t *VAR_2 = VAR_0->vha;

 if (FUNC_1(VAR_2))
  return ((void*)0);

 return FUNC_0(VAR_0, VAR_1);
}
