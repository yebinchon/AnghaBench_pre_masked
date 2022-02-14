
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_connection {int wait_send_queue; int wait_reassembly_queue; int disconn_wait; void* transport_status; int conn_wait; int ri_done; int ri_rc; } ;
struct rdma_cm_id {struct smbd_connection* context; } ;
struct rdma_cm_event {int event; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
  struct rdma_cm_id *VAR_6, struct rdma_cm_event *VAR_7)
{
 struct smbd_connection *VAR_8 = VAR_6->context;

 FUNC_1(VAR_2, "event=%d status=%d\n",
  VAR_7->event, VAR_7->status);

 switch (VAR_7->event) {
 case 136:
 case 129:
  VAR_8->ri_rc = 0;
  FUNC_0(&VAR_8->ri_done);
  break;

 case 137:
  VAR_8->ri_rc = -VAR_0;
  FUNC_0(&VAR_8->ri_done);
  break;

 case 130:
  VAR_8->ri_rc = -VAR_1;
  FUNC_0(&VAR_8->ri_done);
  break;

 case 132:
  FUNC_1(VAR_2, "connected event=%d\n", VAR_7->event);
  VAR_8->transport_status = VAR_3;
  FUNC_3(&VAR_8->conn_wait);
  break;

 case 135:
 case 128:
 case 131:
  FUNC_1(VAR_2, "connecting failed event=%d\n", VAR_7->event);
  VAR_8->transport_status = VAR_4;
  FUNC_3(&VAR_8->conn_wait);
  break;

 case 134:
 case 133:

  if (VAR_8->transport_status == VAR_5) {
   VAR_8->transport_status = VAR_4;
   FUNC_2(&VAR_8->conn_wait);
   break;
  }

  VAR_8->transport_status = VAR_4;
  FUNC_3(&VAR_8->disconn_wait);
  FUNC_3(&VAR_8->wait_reassembly_queue);
  FUNC_4(&VAR_8->wait_send_queue);
  break;

 default:
  break;
 }

 return 0;
}
