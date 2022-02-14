
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_5__ {int tgt_session; int flags; } ;
typedef TYPE_1__ fc_port_t ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_qla_host*,TYPE_1__*,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void
FUNC_2(struct scsi_qla_host *VAR_1, fc_port_t *VAR_2,
    uint16_t *VAR_3)
{
 VAR_2->flags &= ~VAR_0;

 if (!VAR_2->tgt_session)
  FUNC_0(VAR_1, VAR_2, 1, 0);
 FUNC_1(VAR_2, VAR_3[0]);
}
