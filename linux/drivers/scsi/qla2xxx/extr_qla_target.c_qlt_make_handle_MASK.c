
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct req_que {size_t current_outstanding_cmd; int num_outstanding_cmds; int * outstanding_cmds; } ;
struct qla_qpair {TYPE_1__* vha; struct req_que* req; } ;
struct TYPE_2__ {int vp_idx; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static inline uint32_t FUNC_1(struct qla_qpair *VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;
 uint8_t VAR_6 = 0;
 struct req_que *VAR_7 = VAR_3->req;

 VAR_4 = VAR_7->current_outstanding_cmd;

 for (VAR_5 = 1; VAR_5 < VAR_7->num_outstanding_cmds; VAR_5++) {
  VAR_4++;
  if (VAR_4 == VAR_7->num_outstanding_cmds)
   VAR_4 = 1;

  if (VAR_4 == VAR_1)
   continue;

  if (!VAR_7->outstanding_cmds[VAR_4]) {
   VAR_6 = 1;
   break;
  }
 }

 if (VAR_6) {
  VAR_7->current_outstanding_cmd = VAR_4;
 } else {
  FUNC_0(VAR_2, VAR_3->vha, 0x305b,
      "qla_target(%d): Ran out of empty cmd slots\n",
      VAR_3->vha->vp_idx);
  VAR_4 = VAR_0;
 }

 return VAR_4;
}
