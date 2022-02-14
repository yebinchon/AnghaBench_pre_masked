
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_29__ {int port_name; } ;
struct TYPE_30__ {TYPE_2__ gpsc; } ;
struct ct_sns_req {TYPE_3__ req; } ;
struct TYPE_32__ {int nport_handle; int rsp_size; int req_size; int rsp_dma; int rsp; int req_dma; int req; } ;
struct TYPE_33__ {TYPE_5__ ctarg; } ;
struct TYPE_34__ {int timeout; TYPE_6__ u; } ;
struct TYPE_35__ {TYPE_7__ iocb_cmd; } ;
struct TYPE_25__ {char* name; int (* free ) (TYPE_11__*) ;int handle; int done; TYPE_8__ u; int gen2; int gen1; int type; } ;
typedef TYPE_11__ srb_t ;
struct TYPE_28__ {int online; } ;
struct TYPE_26__ {int mgmt_svr_loop_id; TYPE_1__ flags; } ;
typedef TYPE_12__ scsi_qla_host_t ;
struct TYPE_36__ {int al_pa; int area; int domain; } ;
struct TYPE_24__ {TYPE_9__ b; } ;
struct TYPE_31__ {int ct_sns_dma; int ct_sns; } ;
struct TYPE_27__ {int flags; TYPE_10__ d_id; int loop_id; int port_name; TYPE_4__ ct_desc; int fabric_port_name; int login_gen; int rscn_gen; } ;
typedef TYPE_13__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_12__*,int,char*,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 struct ct_sns_req* FUNC_2 (int ,int ,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (TYPE_12__*) ;
 TYPE_11__* FUNC_4 (TYPE_12__*,TYPE_13__*,int ) ;
 int FUNC_5 (TYPE_11__*,scalar_t__) ;
 int FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (TYPE_11__*) ;

int FUNC_8(scsi_qla_host_t *VAR_13, fc_port_t *VAR_14)
{
 int VAR_15 = VAR_6;
 struct ct_sns_req *VAR_16;
 srb_t *VAR_17;

 if (!VAR_13->flags.online || (VAR_14->flags & VAR_1))
  return VAR_15;

 VAR_17 = FUNC_4(VAR_13, VAR_14, VAR_2);
 if (!VAR_17)
  goto done;

 VAR_17->type = VAR_8;
 VAR_17->name = "gpsc";
 VAR_17->gen1 = VAR_14->rscn_gen;
 VAR_17->gen2 = VAR_14->login_gen;

 FUNC_5(VAR_17, FUNC_3(VAR_13) + 2);


 VAR_16 = FUNC_2(VAR_14->ct_desc.ct_sns, VAR_3,
  VAR_5);


 FUNC_0(VAR_16->req.gpsc.port_name, VAR_14->fabric_port_name,
  VAR_9);

 VAR_17->u.iocb_cmd.u.ctarg.req = VAR_14->ct_desc.ct_sns;
 VAR_17->u.iocb_cmd.u.ctarg.req_dma = VAR_14->ct_desc.ct_sns_dma;
 VAR_17->u.iocb_cmd.u.ctarg.rsp = VAR_14->ct_desc.ct_sns;
 VAR_17->u.iocb_cmd.u.ctarg.rsp_dma = VAR_14->ct_desc.ct_sns_dma;
 VAR_17->u.iocb_cmd.u.ctarg.req_size = VAR_4;
 VAR_17->u.iocb_cmd.u.ctarg.rsp_size = VAR_5;
 VAR_17->u.iocb_cmd.u.ctarg.nport_handle = VAR_13->mgmt_svr_loop_id;

 VAR_17->u.iocb_cmd.timeout = VAR_12;
 VAR_17->done = VAR_11;

 FUNC_1(VAR_10, VAR_13, 0x205e,
     "Async-%s %8phC hdl=%x loopid=%x portid=%02x%02x%02x.\n",
     VAR_17->name, VAR_14->port_name, VAR_17->handle,
     VAR_14->loop_id, VAR_14->d_id.b.domain,
     VAR_14->d_id.b.area, VAR_14->d_id.b.al_pa);

 VAR_15 = FUNC_6(VAR_17);
 if (VAR_15 != VAR_7)
  goto done_free_sp;
 return VAR_15;

done_free_sp:
 VAR_17->free(VAR_17);
 VAR_14->flags &= ~VAR_1;
done:
 VAR_14->flags &= ~VAR_0;
 return VAR_15;
}
