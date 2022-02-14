
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int vf_id; int err_id; } ;
struct TYPE_12__ {int vf_id; } ;
struct TYPE_11__ {int echo; } ;
struct TYPE_10__ {int cid; } ;
struct TYPE_14__ {TYPE_4__ malicious_vf_event; TYPE_3__ vf_flr_event; TYPE_2__ eth_event; TYPE_1__ cfc_del_event; } ;
struct TYPE_15__ {int opcode; TYPE_5__ data; } ;
union event_ring_elem {TYPE_6__ message; } ;
typedef int u8 ;
typedef int u16 ;
struct bnx2x_virtf {int malicious; int abs_vfid; } ;
struct bnx2x {int dummy; } ;
struct TYPE_17__ {int (* complete_cmd ) (struct bnx2x*,TYPE_8__*,int ) ;} ;
struct TYPE_16__ {TYPE_8__ sp_obj; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,...) ;







 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bnx2x*,int) ;
 struct bnx2x_virtf* FUNC_5 (struct bnx2x*,int) ;
 int FUNC_6 (struct bnx2x*,TYPE_7__*,union event_ring_elem*) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_8 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_10 (struct bnx2x*,TYPE_8__*,int ) ;
 TYPE_7__* FUNC_11 (struct bnx2x_virtf*,int) ;

int FUNC_12(struct bnx2x *VAR_4, union event_ring_elem *VAR_5)
{
 struct bnx2x_virtf *VAR_6;
 int VAR_7 = 0, VAR_8;
 u8 VAR_9;
 u16 VAR_10 = 0xffff;

 if (!FUNC_2(VAR_4))
  return 1;




 VAR_9 = VAR_5->message.opcode;

 switch (VAR_9) {
 case 134:
  VAR_10 = FUNC_3(VAR_5->message.data.cfc_del_event.cid);
  FUNC_1(VAR_1, "checking cfc-del comp cid=%d\n", VAR_10);
  break;
 case 133:
 case 130:
 case 132:
 case 129:
  VAR_10 = FUNC_3(VAR_5->message.data.eth_event.echo);
  FUNC_1(VAR_1, "checking filtering comp cid=%d\n", VAR_10);
  break;
 case 128:
  VAR_8 = VAR_5->message.data.vf_flr_event.vf_id;
  FUNC_1(VAR_1, "Got VF FLR notification abs_vfid=%d\n",
     VAR_8);
  goto get_vf;
 case 131:
  VAR_8 = VAR_5->message.data.malicious_vf_event.vf_id;
  FUNC_0("Got VF MALICIOUS notification abs_vfid=%d err_id=0x%x\n",
     VAR_8,
     VAR_5->message.data.malicious_vf_event.err_id);
  goto get_vf;
 default:
  return 1;
 }


 if (!FUNC_4(VAR_4, VAR_10)) {
  FUNC_1(VAR_1, "cid is outside vf range: %d\n", VAR_10);
  return 1;
 }





 VAR_7 = VAR_10 & ((1 << VAR_3)-1);
 VAR_8 = (VAR_10 >> VAR_3) & (VAR_0-1);
get_vf:
 VAR_6 = FUNC_5(VAR_4, VAR_8);

 if (!VAR_6) {
  FUNC_0("EQ completion for unknown VF, cid %d, abs_vfid %d\n",
     VAR_10, VAR_8);
  return 0;
 }

 switch (VAR_9) {
 case 134:
  FUNC_1(VAR_1, "got VF [%d:%d] cfc delete ramrod\n",
     VAR_6->abs_vfid, VAR_7);
  FUNC_11(VAR_6, VAR_7)->sp_obj.complete_cmd(VAR_4,
             &FUNC_11(VAR_6,
        VAR_7)->sp_obj,
             VAR_2);
  break;
 case 133:
  FUNC_1(VAR_1, "got VF [%d:%d] set mac/vlan ramrod\n",
     VAR_6->abs_vfid, VAR_7);
  FUNC_6(VAR_4, FUNC_11(VAR_6, VAR_7), VAR_5);
  break;
 case 130:
  FUNC_1(VAR_1, "got VF [%d:%d] set mcast ramrod\n",
     VAR_6->abs_vfid, VAR_7);
  FUNC_8(VAR_4, VAR_6);
  break;
 case 132:
  FUNC_1(VAR_1, "got VF [%d:%d] set rx-mode ramrod\n",
     VAR_6->abs_vfid, VAR_7);
  FUNC_7(VAR_4, VAR_6);
  break;
 case 129:
  FUNC_1(VAR_1, "got VF [%d:%d] RSS update ramrod\n",
     VAR_6->abs_vfid, VAR_7);
  FUNC_9(VAR_4, VAR_6);

 case 128:

  return 0;
 case 131:
  VAR_6->malicious = 1;
  return 0;
 }

 return 0;
}
