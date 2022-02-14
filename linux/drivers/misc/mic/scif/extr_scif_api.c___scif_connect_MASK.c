
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scif_port_id {size_t node; } ;
struct TYPE_9__ {TYPE_3__* qp; } ;
struct TYPE_7__ {int port; int node; } ;
struct scif_endpt {size_t state; scalar_t__ conn_async_state; int conn_err; int lock; int conn_list; int conn_pend_wq; TYPE_4__ qp_info; struct scif_dev* remote_dev; int conwq; int recvwq; int sendwq; struct scif_port_id conn_port; TYPE_2__ port; } ;
struct scif_dev {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ scif_epd_t ;
struct TYPE_6__ {int this_device; } ;
struct TYPE_10__ {size_t maxid; int conn_work; int nb_connect_lock; int nb_connect_list; int nodeid; TYPE_1__ mdev; } ;
struct TYPE_8__ {int magic; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;







 int VAR_8 ;



 int FUNC_2 (int ,char*,struct scif_endpt*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct scif_endpt*) ;
 struct scif_dev* VAR_9 ;
 int * VAR_10 ;
 int FUNC_9 () ;
 struct device* FUNC_10 (struct scif_dev*) ;
 TYPE_5__ VAR_11 ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;

int FUNC_15(scif_epd_t VAR_12, struct scif_port_id *VAR_13, bool VAR_14)
{
 struct scif_endpt *VAR_15 = (struct scif_endpt *)VAR_12;
 int VAR_16 = 0;
 struct scif_dev *VAR_17;
 struct device *VAR_18;

 FUNC_2(VAR_11.mdev.this_device, "SCIFAPI connect: ep %p %s\n", VAR_15,
  VAR_10[VAR_15->state]);

 if (!VAR_9 || VAR_13->node > VAR_11.maxid)
  return -VAR_6;

 FUNC_6();

 VAR_17 = &VAR_9[VAR_13->node];
 VAR_18 = FUNC_10(VAR_17);
 if (FUNC_0(VAR_18)) {
  VAR_16 = FUNC_1(VAR_18);
  return VAR_16;
 }

 FUNC_12(&VAR_15->lock);
 switch (VAR_15->state) {
 case 128:
 case 135:
  VAR_16 = -VAR_4;
  break;
 case 132:
  if (VAR_15->conn_async_state == VAR_2)
   VAR_15->conn_async_state = VAR_0;
  else
   VAR_16 = -VAR_4;
  break;
 case 131:
 case 136:
  VAR_16 = -VAR_7;
  break;
 case 133:
 case 130:
  if (VAR_15->conn_async_state == VAR_2)
   VAR_16 = -VAR_3;
  else
   VAR_16 = -VAR_5;
  break;
 case 134:
  if (VAR_15->conn_async_state == VAR_2)
   VAR_15->conn_async_state = VAR_0;
  else
   VAR_16 = -VAR_5;
  break;
 case 129:
  VAR_16 = FUNC_9();
  if (VAR_16 < 0)
   break;
  VAR_15->port.port = VAR_16;
  VAR_15->port.node = VAR_11.nodeid;
  VAR_15->conn_async_state = VAR_1;

 case 137:
  if (VAR_15->conn_async_state == VAR_2) {
   VAR_15->conn_async_state = VAR_0;
  } else if (VAR_15->conn_async_state == VAR_0) {
   VAR_16 = -VAR_3;
  } else {
   VAR_15->conn_port = *VAR_13;
   FUNC_4(&VAR_15->sendwq);
   FUNC_4(&VAR_15->recvwq);
   FUNC_4(&VAR_15->conwq);
   VAR_15->conn_async_state = 0;

   if (FUNC_14(VAR_14))
    VAR_15->conn_async_state = VAR_2;
  }
  break;
 }

 if (VAR_16 || VAR_15->conn_async_state == VAR_0)
   goto connect_simple_unlock1;

 VAR_15->state = 133;
 VAR_15->remote_dev = &VAR_9[VAR_13->node];
 VAR_15->qp_info.qp->magic = VAR_8;
 if (VAR_15->conn_async_state == VAR_2) {
  FUNC_4(&VAR_15->conn_pend_wq);
  FUNC_12(&VAR_11.nb_connect_lock);
  FUNC_5(&VAR_15->conn_list, &VAR_11.nb_connect_list);
  FUNC_13(&VAR_11.nb_connect_lock);
  VAR_16 = -VAR_3;
  FUNC_7(&VAR_11.conn_work);
 }
connect_simple_unlock1:
 FUNC_13(&VAR_15->lock);
 FUNC_11(VAR_18);
 if (VAR_16) {
  return VAR_16;
 } else if (VAR_15->conn_async_state == VAR_0) {
  FUNC_3(&VAR_11.conn_work);
  VAR_16 = VAR_15->conn_err;
  FUNC_12(&VAR_15->lock);
  VAR_15->conn_async_state = VAR_1;
  FUNC_13(&VAR_15->lock);
 } else {
  VAR_16 = FUNC_8(VAR_15);
 }
 return VAR_16;
}
