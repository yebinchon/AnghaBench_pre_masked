
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_type; } ;
struct TYPE_3__ {int sid; int cid; } ;
struct TYPE_4__ {TYPE_1__ get_stats; } ;
struct iscsi_uevent {int custom_length; TYPE_2__ u; int type; int transport_handle; } ;
struct iscsi_transport {int (* get_stats ) (struct iscsi_cls_conn*,struct iscsi_uevent*) ;} ;
struct iscsi_stats_custom {int dummy; } ;
struct iscsi_stats {int custom_length; TYPE_2__ u; int type; int transport_handle; } ;
struct iscsi_internal {int dummy; } ;
struct iscsi_cls_conn {int transport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,int,int ) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct iscsi_cls_conn*,char*) ;
 struct iscsi_cls_conn* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 struct iscsi_internal* FUNC_6 (struct iscsi_transport*) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct iscsi_uevent*,int ,int) ;
 struct iscsi_uevent* FUNC_9 (struct nlmsghdr*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct iscsi_cls_conn*,struct iscsi_uevent*) ;

__attribute__((used)) static int
FUNC_14(struct iscsi_transport *VAR_8, struct nlmsghdr *VAR_9)
{
 struct iscsi_uevent *VAR_10 = FUNC_9(VAR_9);
 struct iscsi_stats *VAR_11;
 struct sk_buff *VAR_12;
 struct iscsi_cls_conn *VAR_13;
 struct nlmsghdr *VAR_14;
 struct iscsi_uevent *VAR_15;
 struct iscsi_internal *VAR_16;
 int VAR_17 = FUNC_11(sizeof(*VAR_10) +
       sizeof(struct iscsi_stats) +
       sizeof(struct iscsi_stats_custom) *
       VAR_6);
 int VAR_18 = 0;

 VAR_16 = FUNC_6(VAR_8);
 if (!VAR_16)
  return -VAR_2;

 VAR_13 = FUNC_4(VAR_10->u.get_stats.sid, VAR_10->u.get_stats.cid);
 if (!VAR_13)
  return -VAR_1;

 do {
  int VAR_19;

  VAR_12 = FUNC_2(VAR_17, VAR_4);
  if (!VAR_12) {
   FUNC_3(VAR_7, VAR_13, "can not "
           "deliver stats: OOM\n");
   return -VAR_3;
  }

  VAR_14 = FUNC_1(VAR_12, 0, 0, 0,
          (VAR_17 - sizeof(*VAR_14)), 0);
  VAR_15 = FUNC_9(VAR_14);
  FUNC_8(VAR_15, 0, sizeof(*VAR_15));
  VAR_15->transport_handle = FUNC_5(VAR_13->transport);
  VAR_15->type = VAR_9->nlmsg_type;
  VAR_15->u.get_stats.cid =
   VAR_10->u.get_stats.cid;
  VAR_15->u.get_stats.sid =
   VAR_10->u.get_stats.sid;
  VAR_11 = (struct iscsi_stats *)
   ((char*)VAR_15 + sizeof(*VAR_15));
  FUNC_8(VAR_11, 0, sizeof(*VAR_11));

  VAR_8->get_stats(VAR_13, VAR_11);
  VAR_19 = FUNC_11(sizeof(struct iscsi_uevent) +
            sizeof(struct iscsi_stats) +
            sizeof(struct iscsi_stats_custom) *
            VAR_11->custom_length);
  VAR_19 -= sizeof(*VAR_14);
  VAR_19 = FUNC_10(VAR_19);
  FUNC_12(VAR_12, FUNC_0(VAR_19));
  VAR_14->nlmsg_len = VAR_19;

  VAR_18 = FUNC_7(VAR_12, VAR_5,
       VAR_4);
 } while (VAR_18 < 0 && VAR_18 != -VAR_0);

 return VAR_18;
}
