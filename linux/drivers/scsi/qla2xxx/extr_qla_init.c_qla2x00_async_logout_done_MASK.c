
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_4__ {int flags; int login_gen; } ;
typedef TYPE_1__ fc_port_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

void
FUNC_1(struct scsi_qla_host *VAR_1, fc_port_t *VAR_2,
    uint16_t *VAR_3)
{
 FUNC_0(VAR_2, VAR_3[0]);
 VAR_2->login_gen++;
 VAR_2->flags &= ~VAR_0;
 return;
}
