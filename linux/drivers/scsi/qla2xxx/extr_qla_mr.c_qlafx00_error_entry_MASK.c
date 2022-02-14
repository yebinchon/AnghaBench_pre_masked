
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint16_t ;
struct sts_entry_fx00 {int dummy; } ;
struct rsp_que {int dummy; } ;
struct req_que {int dummy; } ;
struct qla_hw_data {struct req_que** req_q_map; } ;
struct TYPE_8__ {int (* done ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ srb_t ;
struct TYPE_9__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,char const*,struct req_que*,struct sts_entry_fx00*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(scsi_qla_host_t *VAR_2, struct rsp_que *VAR_3,
      struct sts_entry_fx00 *VAR_4)
{
 srb_t *VAR_5;
 struct qla_hw_data *VAR_6 = VAR_2->hw;
 const char VAR_7[] = "ERROR-IOCB";
 uint16_t VAR_8 = 0;
 struct req_que *VAR_9 = ((void*)0);
 int VAR_10 = VAR_0 << 16;

 VAR_9 = VAR_6->req_q_map[VAR_8];

 VAR_5 = FUNC_0(VAR_2, VAR_7, VAR_9, VAR_4);
 if (VAR_5) {
  VAR_5->done(VAR_5, VAR_10);
  return;
 }

 FUNC_2(VAR_1, &VAR_2->dpc_flags);
 FUNC_1(VAR_2);
}
