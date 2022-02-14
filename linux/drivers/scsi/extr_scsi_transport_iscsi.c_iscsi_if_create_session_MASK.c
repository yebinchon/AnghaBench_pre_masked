
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int sid; int host_no; } ;
struct TYPE_4__ {TYPE_1__ c_session_ret; } ;
struct iscsi_uevent {TYPE_2__ r; } ;
struct iscsi_transport {struct iscsi_cls_session* (* create_session ) (struct iscsi_endpoint*,int ,int ,int ) ;} ;
struct iscsi_internal {struct iscsi_transport* iscsi_transport; } ;
struct iscsi_endpoint {int dummy; } ;
struct iscsi_cls_session {int sid; int creator; } ;
struct Scsi_Host {int host_no; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cls_session*,char*) ;
 struct Scsi_Host* FUNC_1 (struct iscsi_cls_session*) ;
 struct iscsi_cls_session* FUNC_2 (struct iscsi_endpoint*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct iscsi_internal *VAR_1, struct iscsi_endpoint *VAR_2,
   struct iscsi_uevent *VAR_3, pid_t VAR_4,
   uint32_t VAR_5, uint16_t VAR_6,
   uint16_t VAR_7)
{
 struct iscsi_transport *VAR_8 = VAR_1->iscsi_transport;
 struct iscsi_cls_session *VAR_9;
 struct Scsi_Host *VAR_10;

 VAR_9 = VAR_8->create_session(VAR_2, VAR_6, VAR_7,
         VAR_5);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->creator = VAR_4;
 VAR_10 = FUNC_1(VAR_9);
 VAR_3->r.c_session_ret.host_no = VAR_10->host_no;
 VAR_3->r.c_session_ret.sid = VAR_9->sid;
 FUNC_0(VAR_9,
    "Completed creating transport session\n");
 return 0;
}
