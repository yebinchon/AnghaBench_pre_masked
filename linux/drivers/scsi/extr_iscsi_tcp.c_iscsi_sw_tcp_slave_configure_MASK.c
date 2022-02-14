
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {TYPE_2__* request_queue; int host; } ;
struct iscsi_sw_tcp_host {struct iscsi_session* session; } ;
struct iscsi_session {struct iscsi_conn* leadconn; } ;
struct iscsi_conn {scalar_t__ datadgst_en; } ;
struct TYPE_4__ {TYPE_1__* backing_dev_info; } ;
struct TYPE_3__ {int capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 struct iscsi_sw_tcp_host* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_1)
{
 struct iscsi_sw_tcp_host *VAR_2 = FUNC_1(VAR_1->host);
 struct iscsi_session *VAR_3 = VAR_2->session;
 struct iscsi_conn *VAR_4 = VAR_3->leadconn;

 if (VAR_4->datadgst_en)
  VAR_1->request_queue->backing_dev_info->capabilities
   |= VAR_0;
 FUNC_0(VAR_1->request_queue, 0);
 return 0;
}
