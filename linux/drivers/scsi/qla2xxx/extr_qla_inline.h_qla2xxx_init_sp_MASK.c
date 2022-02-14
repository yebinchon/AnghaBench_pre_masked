
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qla_qpair {int dummy; } ;
struct TYPE_4__ {int iocbs; int elem; int cmd_type; struct qla_qpair* qpair; int * vha; int * fcport; } ;
typedef TYPE_1__ srb_t ;
typedef int scsi_qla_host_t ;
typedef int fc_port_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(srb_t *VAR_1, scsi_qla_host_t *VAR_2,
       struct qla_qpair *VAR_3, fc_port_t *VAR_4)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->fcport = VAR_4;
 VAR_1->iocbs = 1;
 VAR_1->vha = VAR_2;
 VAR_1->qpair = VAR_3;
 VAR_1->cmd_type = VAR_0;
 FUNC_0(&VAR_1->elem);
}
