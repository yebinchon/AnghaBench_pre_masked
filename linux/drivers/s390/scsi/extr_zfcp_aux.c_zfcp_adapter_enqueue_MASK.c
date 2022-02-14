
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int seq_print; } ;
struct TYPE_8__ {int list_lock; int work; int list; } ;
struct TYPE_7__ {struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int stat_read_buf_num; int dma_parms; struct ccw_device* ccw_device; TYPE_3__ service_level; int abort_lock; int erp_lock; int erp_running_head; int erp_ready_head; int erp_done_wqh; int erp_ready_wq; TYPE_2__ events; int port_list; int port_list_lock; int req_list; TYPE_1__ erp_action; int next_port_scan; int ns_up_work; int scan_work; int stat_work; int ref; } ;
struct TYPE_10__ {int * dma_parms; int kobj; } ;
struct ccw_device {TYPE_4__ dev; int * handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zfcp_adapter* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_4__*,struct zfcp_adapter*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 struct zfcp_adapter* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_14 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_15 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_16 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_17 (struct zfcp_adapter*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_18 (struct zfcp_adapter*) ;
 int FUNC_19 () ;
 int FUNC_20 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_21 (struct zfcp_adapter*) ;
 int VAR_10 ;

struct zfcp_adapter *FUNC_22(struct ccw_device *VAR_11)
{
 struct zfcp_adapter *VAR_12;

 if (!FUNC_5(&VAR_11->dev))
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_8(sizeof(struct zfcp_adapter), VAR_3);
 if (!VAR_12) {
  FUNC_9(&VAR_11->dev);
  return FUNC_0(-VAR_1);
 }

 FUNC_7(&VAR_12->ref);

 VAR_11->handler = ((void*)0);
 VAR_12->ccw_device = VAR_11;

 FUNC_3(&VAR_12->stat_work, VAR_4);
 FUNC_1(&VAR_12->scan_work, VAR_7);
 FUNC_3(&VAR_12->ns_up_work, VAR_8);

 VAR_12->next_port_scan = VAR_5;

 VAR_12->erp_action.adapter = VAR_12;

 if (FUNC_18(VAR_12))
  goto failed;

 if (FUNC_14(VAR_12))
  goto failed;

 VAR_12->req_list = FUNC_19();
 if (!VAR_12->req_list)
  goto failed;

 if (FUNC_15(VAR_12))
  goto failed;

 if (FUNC_21(VAR_12))
  goto failed;

 if (FUNC_17(VAR_12))
  goto failed;

 FUNC_10(&VAR_12->port_list_lock);
 FUNC_2(&VAR_12->port_list);

 FUNC_2(&VAR_12->events.list);
 FUNC_3(&VAR_12->events.work, VAR_6);
 FUNC_11(&VAR_12->events.list_lock);

 FUNC_6(&VAR_12->erp_ready_wq);
 FUNC_6(&VAR_12->erp_done_wqh);

 FUNC_2(&VAR_12->erp_ready_head);
 FUNC_2(&VAR_12->erp_running_head);

 FUNC_10(&VAR_12->erp_lock);
 FUNC_10(&VAR_12->abort_lock);

 if (FUNC_16(VAR_12))
  goto failed;

 VAR_12->service_level.seq_print = VAR_9;

 FUNC_4(&VAR_11->dev, VAR_12);

 if (FUNC_12(&VAR_11->dev.kobj,
          &VAR_10))
  goto failed;


 VAR_12->ccw_device->dev.dma_parms = &VAR_12->dma_parms;

 VAR_12->stat_read_buf_num = VAR_2;

 if (!FUNC_20(VAR_12))
  return VAR_12;

failed:
 FUNC_13(VAR_12);
 return FUNC_0(-VAR_1);
}
