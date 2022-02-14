
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint32_t ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_type; } ;
struct TYPE_12__ {int data_size; int hdr_size; int cid; int sid; } ;
struct TYPE_20__ {int flag; int cid; int sid; } ;
struct TYPE_17__ {int cid; int sid; } ;
struct TYPE_16__ {int transport_eph; int is_leading; int cid; int sid; } ;
struct TYPE_15__ {int sid; } ;
struct TYPE_14__ {int queue_depth; int cmds_max; int initial_cmdsn; int ep_handle; } ;
struct TYPE_13__ {int queue_depth; int cmds_max; int initial_cmdsn; } ;
struct TYPE_19__ {TYPE_1__ send_pdu; TYPE_9__ stop_conn; TYPE_6__ start_conn; TYPE_5__ b_conn; TYPE_4__ d_session; TYPE_3__ c_bound_session; TYPE_2__ c_session; } ;
struct TYPE_18__ {int retcode; } ;
struct iscsi_uevent {TYPE_8__ u; TYPE_7__ r; int transport_handle; } ;
struct iscsi_transport {int owner; int (* send_pdu ) (struct iscsi_cls_conn*,struct iscsi_hdr*,char*,int ) ;int (* stop_conn ) (struct iscsi_cls_conn*,int ) ;int (* start_conn ) (struct iscsi_cls_conn*) ;int ep_connect; int (* bind_conn ) (struct iscsi_cls_session*,struct iscsi_cls_conn*,int ,int ) ;int (* destroy_session ) (struct iscsi_cls_session*) ;} ;
struct iscsi_internal {struct iscsi_transport* iscsi_transport; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_endpoint {struct iscsi_cls_conn* conn; int id; } ;
struct iscsi_cls_session {int unbind_work; } ;
struct iscsi_cls_conn {int ep_mutex; struct iscsi_endpoint* ep; } ;
struct TYPE_11__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_10__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct iscsi_cls_conn*,char*) ;
 struct iscsi_cls_conn* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_4 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_5 (struct iscsi_transport*,struct nlmsghdr*) ;
 int FUNC_6 (struct iscsi_transport*,struct nlmsghdr*) ;
 int FUNC_7 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_8 (struct iscsi_internal*,struct iscsi_endpoint*,struct iscsi_uevent*,int ,int ,int ,int ) ;
 int FUNC_9 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_10 (struct iscsi_transport*,int ) ;
 int FUNC_11 (struct iscsi_transport*,struct nlmsghdr*) ;
 int FUNC_12 (struct iscsi_transport*,struct iscsi_uevent*,int) ;
 struct iscsi_internal* FUNC_13 (int ) ;
 int FUNC_14 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_15 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_16 (struct iscsi_transport*,struct iscsi_uevent*) ;
 struct iscsi_endpoint* FUNC_17 (int ) ;
 int FUNC_18 (struct iscsi_transport*,struct iscsi_uevent*,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct iscsi_transport*,struct iscsi_uevent*) ;
 struct iscsi_cls_session* FUNC_21 (int ) ;
 int FUNC_22 (struct iscsi_cls_session*) ;
 int FUNC_23 (struct iscsi_transport*,struct iscsi_uevent*,int ) ;
 int FUNC_24 (struct iscsi_transport*,struct iscsi_uevent*,int ) ;
 int FUNC_25 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_26 (struct iscsi_transport*,struct iscsi_uevent*,int ) ;
 int FUNC_27 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_28 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_29 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (struct nlmsghdr*,int) ;
 struct iscsi_uevent* FUNC_34 (struct nlmsghdr*) ;
 int FUNC_35 (int ,int *) ;
 int FUNC_36 (struct iscsi_cls_session*) ;
 int FUNC_37 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int ,int ) ;
 int FUNC_38 (struct iscsi_cls_conn*) ;
 int FUNC_39 (struct iscsi_cls_conn*,int ) ;
 int FUNC_40 (struct iscsi_cls_conn*,struct iscsi_hdr*,char*,int ) ;
 int FUNC_41 (int ) ;

__attribute__((used)) static int
FUNC_42(struct sk_buff *VAR_5, struct nlmsghdr *VAR_6, uint32_t *VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9;
 struct iscsi_uevent *VAR_10 = FUNC_34(VAR_6);
 struct iscsi_transport *VAR_11 = ((void*)0);
 struct iscsi_internal *VAR_12;
 struct iscsi_cls_session *VAR_13;
 struct iscsi_cls_conn *VAR_14;
 struct iscsi_endpoint *VAR_15 = ((void*)0);

 if (VAR_6->nlmsg_type == 143)
  *VAR_7 = VAR_3;
 else
  *VAR_7 = VAR_2;

 VAR_12 = FUNC_13(FUNC_19(VAR_10->transport_handle));
 if (!VAR_12)
  return -VAR_0;
 VAR_11 = VAR_12->iscsi_transport;

 if (!FUNC_41(VAR_11->owner))
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_5).portid;

 switch (VAR_6->nlmsg_type) {
 case 155:
  VAR_8 = FUNC_8(VAR_12, VAR_15, VAR_10,
           VAR_9,
           VAR_10->u.c_session.initial_cmdsn,
           VAR_10->u.c_session.cmds_max,
           VAR_10->u.c_session.queue_depth);
  break;
 case 157:
  VAR_15 = FUNC_17(VAR_10->u.c_bound_session.ep_handle);
  if (!VAR_15) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_8 = FUNC_8(VAR_12, VAR_15, VAR_10,
     VAR_9,
     VAR_10->u.c_bound_session.initial_cmdsn,
     VAR_10->u.c_bound_session.cmds_max,
     VAR_10->u.c_bound_session.queue_depth);
  break;
 case 151:
  VAR_13 = FUNC_21(VAR_10->u.d_session.sid);
  if (VAR_13)
   VAR_11->destroy_session(VAR_13);
  else
   VAR_8 = -VAR_0;
  break;
 case 128:
  VAR_13 = FUNC_21(VAR_10->u.d_session.sid);
  if (VAR_13)
   FUNC_35(FUNC_22(VAR_13),
     &VAR_13->unbind_work);
  else
   VAR_8 = -VAR_0;
  break;
 case 156:
  VAR_8 = FUNC_7(VAR_11, VAR_10);
  break;
 case 152:
  VAR_8 = FUNC_9(VAR_11, VAR_10);
  break;
 case 158:
  VAR_13 = FUNC_21(VAR_10->u.b_conn.sid);
  VAR_14 = FUNC_2(VAR_10->u.b_conn.sid, VAR_10->u.b_conn.cid);

  if (VAR_14 && VAR_14->ep)
   FUNC_10(VAR_11, VAR_14->ep->id);

  if (!VAR_13 || !VAR_14) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_10->r.retcode = VAR_11->bind_conn(VAR_13, VAR_14,
      VAR_10->u.b_conn.transport_eph,
      VAR_10->u.b_conn.is_leading);
  if (VAR_10->r.retcode || !VAR_11->ep_connect)
   break;

  VAR_15 = FUNC_17(VAR_10->u.b_conn.transport_eph);
  if (VAR_15) {
   VAR_15->conn = VAR_14;

   FUNC_31(&VAR_14->ep_mutex);
   VAR_14->ep = VAR_15;
   FUNC_32(&VAR_14->ep_mutex);
  } else
   FUNC_1(VAR_4, VAR_14,
           "Could not set ep conn "
           "binding\n");
  break;
 case 136:
  VAR_8 = FUNC_27(VAR_11, VAR_10);
  break;
 case 135:
  VAR_14 = FUNC_2(VAR_10->u.start_conn.sid, VAR_10->u.start_conn.cid);
  if (VAR_14)
   VAR_10->r.retcode = VAR_11->start_conn(VAR_14);
  else
   VAR_8 = -VAR_0;
  break;
 case 134:
  VAR_14 = FUNC_2(VAR_10->u.stop_conn.sid, VAR_10->u.stop_conn.cid);
  if (VAR_14)
   VAR_11->stop_conn(VAR_14, VAR_10->u.stop_conn.flag);
  else
   VAR_8 = -VAR_0;
  break;
 case 141:
  VAR_14 = FUNC_2(VAR_10->u.send_pdu.sid, VAR_10->u.send_pdu.cid);
  if (VAR_14)
   VAR_10->r.retcode = VAR_11->send_pdu(VAR_14,
    (struct iscsi_hdr*)((char*)VAR_10 + sizeof(*VAR_10)),
    (char*)VAR_10 + sizeof(*VAR_10) + VAR_10->u.send_pdu.hdr_size,
    VAR_10->u.send_pdu.data_size);
  else
   VAR_8 = -VAR_0;
  break;
 case 148:
  VAR_8 = FUNC_11(VAR_11, VAR_6);
  break;
 case 132:
 case 129:
 case 130:
 case 131:
  VAR_8 = FUNC_12(VAR_11, VAR_10, VAR_6->nlmsg_type);
  break;
 case 133:
  VAR_8 = FUNC_29(VAR_11, VAR_10);
  break;
 case 138:
  VAR_8 = FUNC_25(VAR_11, VAR_10);
  break;
 case 143:
  VAR_8 = FUNC_28(VAR_11, VAR_10);
  break;
 case 137:
  VAR_8 = FUNC_26(VAR_11, VAR_10,
          FUNC_33(VAR_6, sizeof(*VAR_10)));
  break;
 case 142:
  VAR_8 = FUNC_20(VAR_11, VAR_10);
  break;
 case 150:
  VAR_8 = FUNC_5(VAR_11, VAR_6);
  break;
 case 154:
  VAR_8 = FUNC_4(VAR_11, VAR_10);
  break;
 case 139:
  VAR_8 = FUNC_24(VAR_11, VAR_10,
      FUNC_33(VAR_6,
             sizeof(*VAR_10)));
  break;
 case 144:
  VAR_8 = FUNC_18(VAR_11, VAR_10,
       FUNC_33(VAR_6, sizeof(*VAR_10)));
  break;
 case 153:
  VAR_8 = FUNC_3(VAR_11, VAR_10);
  break;
 case 147:
  VAR_8 = FUNC_14(VAR_11, VAR_10);
  break;
 case 146:
  VAR_8 = FUNC_15(VAR_11, VAR_10);
  break;
 case 145:
  VAR_8 = FUNC_16(VAR_11, VAR_10);
  break;
 case 140:
  VAR_8 = FUNC_23(VAR_11, VAR_10,
         FUNC_33(VAR_6, sizeof(*VAR_10)));
  break;
 case 149:
  VAR_8 = FUNC_6(VAR_11, VAR_6);
  break;
 default:
  VAR_8 = -VAR_1;
  break;
 }

 FUNC_30(VAR_11->owner);
 return VAR_8;
}
