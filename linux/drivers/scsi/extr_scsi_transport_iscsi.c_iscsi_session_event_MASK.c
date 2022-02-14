
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_7__ {int sid; int host_no; } ;
struct TYPE_6__ {int sid; int host_no; } ;
struct TYPE_5__ {int sid; int host_no; } ;
struct TYPE_8__ {TYPE_3__ unbind_session; TYPE_2__ c_session_ret; TYPE_1__ d_session; } ;
struct iscsi_uevent {int type; TYPE_4__ r; int transport_handle; } ;
struct iscsi_internal {int dummy; } ;
struct iscsi_cls_session {int sid; int transport; } ;
struct Scsi_Host {int host_no; } ;
typedef enum iscsi_uevent_e { ____Placeholder_iscsi_uevent_e } iscsi_uevent_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iscsi_cls_session*,char*,int,int) ;



 int VAR_4 ;
 int VAR_5 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct iscsi_cls_session*,char*,int) ;
 int FUNC_4 (int ) ;
 struct iscsi_internal* FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 struct Scsi_Host* FUNC_7 (struct iscsi_cls_session*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct iscsi_uevent* FUNC_9 (struct nlmsghdr*) ;
 int FUNC_10 (int) ;

int FUNC_11(struct iscsi_cls_session *VAR_6,
   enum iscsi_uevent_e VAR_7)
{
 struct iscsi_internal *VAR_8;
 struct Scsi_Host *VAR_9;
 struct iscsi_uevent *VAR_10;
 struct sk_buff *VAR_11;
 struct nlmsghdr *VAR_12;
 int VAR_13, VAR_14 = FUNC_10(sizeof(*VAR_10));

 VAR_8 = FUNC_5(VAR_6->transport);
 if (!VAR_8)
  return -VAR_0;
 VAR_9 = FUNC_7(VAR_6);

 VAR_11 = FUNC_2(VAR_14, VAR_3);
 if (!VAR_11) {
  FUNC_3(VAR_5, VAR_6,
      "Cannot notify userspace of session "
      "event %u\n", VAR_7);
  return -VAR_1;
 }

 VAR_12 = FUNC_1(VAR_11, 0, 0, 0, (VAR_14 - sizeof(*VAR_12)), 0);
 VAR_10 = FUNC_9(VAR_12);
 VAR_10->transport_handle = FUNC_4(VAR_6->transport);

 VAR_10->type = VAR_7;
 switch (VAR_7) {
 case 129:
  VAR_10->r.d_session.host_no = VAR_9->host_no;
  VAR_10->r.d_session.sid = VAR_6->sid;
  break;
 case 130:
  VAR_10->r.c_session_ret.host_no = VAR_9->host_no;
  VAR_10->r.c_session_ret.sid = VAR_6->sid;
  break;
 case 128:
  VAR_10->r.unbind_session.host_no = VAR_9->host_no;
  VAR_10->r.unbind_session.sid = VAR_6->sid;
  break;
 default:
  FUNC_3(VAR_5, VAR_6, "Invalid event "
      "%u.\n", VAR_7);
  FUNC_8(VAR_11);
  return -VAR_0;
 }





 VAR_13 = FUNC_6(VAR_11, VAR_4, VAR_3);
 if (VAR_13 == -VAR_2)
  FUNC_3(VAR_5, VAR_6,
      "Cannot notify userspace of session "
      "event %u. Check iscsi daemon\n",
      VAR_7);

 FUNC_0(VAR_6, "Completed handling event %d rc %d\n",
    VAR_7, VAR_13);
 return VAR_13;
}
