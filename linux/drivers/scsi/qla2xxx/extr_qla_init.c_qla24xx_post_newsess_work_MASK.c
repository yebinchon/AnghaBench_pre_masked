
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_qla_host {int dummy; } ;
struct TYPE_4__ {int node_name; int port_name; int fc4_type; void* pla; int id; } ;
struct TYPE_3__ {TYPE_2__ new_sess; } ;
struct qla_work_evt {TYPE_1__ u; } ;
typedef int port_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 struct qla_work_evt* FUNC_1 (struct scsi_qla_host*,int ) ;
 int FUNC_2 (struct scsi_qla_host*,struct qla_work_evt*) ;

int FUNC_3(struct scsi_qla_host *VAR_3, port_id_t *VAR_4,
    u8 *VAR_5, u8 *VAR_6, void *VAR_7, u8 VAR_8)
{
 struct qla_work_evt *VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_9)
  return VAR_1;

 VAR_9->u.new_sess.id = *VAR_4;
 VAR_9->u.new_sess.pla = VAR_7;
 VAR_9->u.new_sess.fc4_type = VAR_8;
 FUNC_0(VAR_9->u.new_sess.port_name, VAR_5, VAR_2);
 if (VAR_6)
  FUNC_0(VAR_9->u.new_sess.node_name, VAR_6, VAR_2);

 return FUNC_2(VAR_3, VAR_9);
}
