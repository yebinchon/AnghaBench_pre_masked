
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct scsi_qla_host {int vp_idx; TYPE_1__* hw; } ;
struct rsp_que {int id; struct req_que* req; } ;
struct req_que {int id; size_t num_outstanding_cmds; int ** outstanding_cmds; } ;
struct TYPE_2__ {struct req_que** req_q_map; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*,int ,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void *FUNC_3(struct scsi_qla_host *VAR_7,
 struct rsp_que *VAR_8, uint32_t VAR_9, void *VAR_10)
{
 void *VAR_11 = ((void*)0);
 struct req_que *VAR_12;
 int VAR_13 = FUNC_0(VAR_9);
 uint32_t VAR_14 = VAR_9 & ~VAR_1;

 if (FUNC_2(VAR_14 == VAR_3))
  return ((void*)0);

 if (VAR_13 == VAR_8->req->id) {
  VAR_12 = VAR_8->req;
 } else if (VAR_7->hw->req_q_map[VAR_13]) {
  FUNC_1(VAR_6, VAR_7, 0x1000a,
      "qla_target(%d): CTIO completion with different QID %d handle %x\n",
      VAR_7->vp_idx, VAR_8->id, VAR_9);
  VAR_12 = VAR_7->hw->req_q_map[VAR_13];
 } else {
  return ((void*)0);
 }

 VAR_14 &= VAR_0;

 if (VAR_14 != VAR_2) {
  if (FUNC_2(VAR_14 >= VAR_12->num_outstanding_cmds)) {
   FUNC_1(VAR_5, VAR_7, 0xe052,
       "qla_target(%d): Wrong handle %x received\n",
       VAR_7->vp_idx, VAR_9);
   return ((void*)0);
  }

  VAR_11 = (void *) VAR_12->outstanding_cmds[VAR_14];
  if (FUNC_2(VAR_11 == ((void*)0))) {
   FUNC_1(VAR_4, VAR_7, 0xe053,
       "qla_target(%d): Suspicious: unable to find the command with handle %x req->id %d rsp->id %d\n",
    VAR_7->vp_idx, VAR_9, VAR_12->id, VAR_8->id);
   return ((void*)0);
  }
  VAR_12->outstanding_cmds[VAR_14] = ((void*)0);
 } else if (VAR_10 != ((void*)0)) {

  FUNC_1(VAR_5, VAR_7, 0xe054,
      "qla_target(%d): Wrong CTIO received: QLA24xx doesn't "
      "support NULL handles\n", VAR_7->vp_idx);
  return ((void*)0);
 }

 return VAR_11;
}
