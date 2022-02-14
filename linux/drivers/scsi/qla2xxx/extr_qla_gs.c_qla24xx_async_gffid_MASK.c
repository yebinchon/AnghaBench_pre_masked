
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


struct TYPE_29__ {int * port_id; } ;
struct TYPE_30__ {TYPE_2__ gff_id; } ;
struct ct_sns_req {TYPE_3__ req; } ;
struct TYPE_34__ {int nport_handle; int rsp_size; int req_size; int rsp_dma; int rsp; int req_dma; int req; } ;
struct TYPE_35__ {TYPE_7__ ctarg; } ;
struct TYPE_36__ {TYPE_8__ u; int timeout; } ;
struct TYPE_24__ {TYPE_9__ iocb_cmd; } ;
struct TYPE_25__ {char* name; int (* free ) (TYPE_11__*) ;int handle; int done; TYPE_10__ u; int gen2; int gen1; int type; } ;
typedef TYPE_11__ srb_t ;
struct TYPE_28__ {int online; } ;
struct TYPE_26__ {TYPE_1__ flags; } ;
typedef TYPE_12__ scsi_qla_host_t ;
struct TYPE_33__ {int ct_sns_dma; int ct_sns; } ;
struct TYPE_31__ {int al_pa; int area; int domain; } ;
struct TYPE_32__ {TYPE_4__ b; } ;
struct TYPE_27__ {int flags; int port_name; TYPE_6__ ct_desc; TYPE_5__ d_id; int login_gen; int rscn_gen; } ;
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
 int FUNC_0 (int ,TYPE_12__*,int,char*,char*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (TYPE_12__*) ;
 TYPE_11__* FUNC_2 (TYPE_12__*,TYPE_13__*,int ) ;
 int FUNC_3 (TYPE_11__*,scalar_t__) ;
 struct ct_sns_req* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (TYPE_11__*) ;

int FUNC_7(scsi_qla_host_t *VAR_12, fc_port_t *VAR_13)
{
 int VAR_14 = VAR_6;
 struct ct_sns_req *VAR_15;
 srb_t *VAR_16;

 if (!VAR_12->flags.online || (VAR_13->flags & VAR_0))
  return VAR_14;

 VAR_16 = FUNC_2(VAR_12, VAR_13, VAR_4);
 if (!VAR_16)
  return VAR_14;

 VAR_13->flags |= VAR_0;
 VAR_16->type = VAR_8;
 VAR_16->name = "gffid";
 VAR_16->gen1 = VAR_13->rscn_gen;
 VAR_16->gen2 = VAR_13->login_gen;

 VAR_16->u.iocb_cmd.timeout = VAR_11;
 FUNC_3(VAR_16, FUNC_1(VAR_12) + 2);


 VAR_15 = FUNC_4(VAR_13->ct_desc.ct_sns, VAR_1,
     VAR_3);

 VAR_15->req.gff_id.port_id[0] = VAR_13->d_id.b.domain;
 VAR_15->req.gff_id.port_id[1] = VAR_13->d_id.b.area;
 VAR_15->req.gff_id.port_id[2] = VAR_13->d_id.b.al_pa;

 VAR_16->u.iocb_cmd.u.ctarg.req = VAR_13->ct_desc.ct_sns;
 VAR_16->u.iocb_cmd.u.ctarg.req_dma = VAR_13->ct_desc.ct_sns_dma;
 VAR_16->u.iocb_cmd.u.ctarg.rsp = VAR_13->ct_desc.ct_sns;
 VAR_16->u.iocb_cmd.u.ctarg.rsp_dma = VAR_13->ct_desc.ct_sns_dma;
 VAR_16->u.iocb_cmd.u.ctarg.req_size = VAR_2;
 VAR_16->u.iocb_cmd.u.ctarg.rsp_size = VAR_3;
 VAR_16->u.iocb_cmd.u.ctarg.nport_handle = VAR_5;

 VAR_16->done = VAR_10;

 FUNC_0(VAR_9, VAR_12, 0x2132,
     "Async-%s hdl=%x  %8phC.\n", VAR_16->name,
     VAR_16->handle, VAR_13->port_name);

 VAR_14 = FUNC_5(VAR_16);
 if (VAR_14 != VAR_7)
  goto done_free_sp;

 return VAR_14;
done_free_sp:
 VAR_16->free(VAR_16);
 VAR_13->flags &= ~VAR_0;
 return VAR_14;
}
