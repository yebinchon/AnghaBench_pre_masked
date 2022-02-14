
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_8__ {int release; int groups; int * parent; } ;
struct TYPE_7__ {struct zfcp_port* port; struct zfcp_adapter* adapter; } ;
struct zfcp_port {int d_id; int status; int list; TYPE_3__ dev; TYPE_2__ erp_action; int rport_task; scalar_t__ wwpn; struct zfcp_adapter* adapter; int rport_work; int test_link_work; int gid_pn_work; int units; int unit_list; int unit_list_lock; } ;
struct zfcp_adapter {int port_list_lock; int port_list; TYPE_1__* ccw_device; int ref; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct zfcp_port* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char*,unsigned long long) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct zfcp_port*) ;
 int FUNC_8 (int *) ;
 struct zfcp_port* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct zfcp_adapter*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct zfcp_port* FUNC_16 (struct zfcp_adapter*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

struct zfcp_port *FUNC_17(struct zfcp_adapter *VAR_11, u64 VAR_12,
         u32 VAR_13, u32 VAR_14)
{
 struct zfcp_port *VAR_15;
 int VAR_16 = -VAR_2;

 FUNC_8(&VAR_11->ref);

 VAR_15 = FUNC_16(VAR_11, VAR_12);
 if (VAR_15) {
  FUNC_11(&VAR_15->dev);
  VAR_16 = -VAR_0;
  goto err_out;
 }

 VAR_15 = FUNC_9(sizeof(struct zfcp_port), VAR_3);
 if (!VAR_15)
  goto err_out;

 FUNC_12(&VAR_15->unit_list_lock);
 FUNC_1(&VAR_15->unit_list);
 FUNC_4(&VAR_15->units, 0);

 FUNC_2(&VAR_15->gid_pn_work, VAR_7);
 FUNC_2(&VAR_15->test_link_work, VAR_6);
 FUNC_2(&VAR_15->rport_work, VAR_10);

 VAR_15->adapter = VAR_11;
 VAR_15->d_id = VAR_14;
 VAR_15->wwpn = VAR_12;
 VAR_15->rport_task = VAR_4;
 VAR_15->dev.parent = &VAR_11->ccw_device->dev;
 VAR_15->dev.groups = VAR_8;
 VAR_15->dev.release = VAR_9;

 VAR_15->erp_action.adapter = VAR_11;
 VAR_15->erp_action.port = VAR_15;

 if (FUNC_5(&VAR_15->dev, "0x%016llx", (unsigned long long)VAR_12)) {
  FUNC_7(VAR_15);
  goto err_out;
 }
 VAR_16 = -VAR_1;

 if (FUNC_6(&VAR_15->dev)) {
  FUNC_11(&VAR_15->dev);
  goto err_out;
 }

 FUNC_13(&VAR_11->port_list_lock);
 FUNC_10(&VAR_15->list, &VAR_11->port_list);
 FUNC_14(&VAR_11->port_list_lock);

 FUNC_3(VAR_13 | VAR_5, &VAR_15->status);

 return VAR_15;

err_out:
 FUNC_15(VAR_11);
 return FUNC_0(VAR_16);
}
