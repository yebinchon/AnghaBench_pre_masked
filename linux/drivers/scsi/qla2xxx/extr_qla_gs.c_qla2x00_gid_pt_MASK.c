
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_13__ ;


typedef size_t uint16_t ;
struct TYPE_29__ {int rsvd_1; } ;
struct TYPE_23__ {TYPE_7__ b; } ;
struct TYPE_30__ {TYPE_20__ d_id; int fp_speed; int fabric_port_name; } ;
typedef TYPE_8__ sw_info_t ;
struct qla_hw_data {size_t max_fibre_devices; int ms_iocb_dma; int ms_iocb; TYPE_13__* ct_sns; TYPE_1__* isp_ops; int ct_sns_dma; } ;
struct TYPE_27__ {struct ct_sns_gid_pt_data* entries; } ;
struct TYPE_28__ {TYPE_5__ gid_pt; } ;
struct ct_sns_rsp {TYPE_6__ rsp; } ;
struct TYPE_25__ {int port_type; } ;
struct TYPE_26__ {TYPE_3__ gid_pt; } ;
struct ct_sns_req {TYPE_4__ req; } ;
struct ct_sns_gid_pt_data {int control_byte; int port_id; } ;
struct ct_arg {size_t rsp_size; int nport_handle; int req_size; int rsp_dma; int req_dma; int iocb; } ;
struct TYPE_31__ {struct qla_hw_data* hw; } ;
typedef TYPE_9__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_24__ {struct ct_sns_rsp rsp; } ;
struct TYPE_22__ {int * (* prep_ms_iocb ) (TYPE_9__*,struct ct_arg*) ;} ;
struct TYPE_21__ {TYPE_2__ p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_20__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_9__*,int,char*,int) ;
 int VAR_9 ;
 int FUNC_5 (TYPE_9__*,int *,struct ct_sns_rsp*,char*) ;
 size_t FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_8 (TYPE_13__*,int ,size_t) ;
 int FUNC_9 (TYPE_9__*,TYPE_8__*) ;
 int * FUNC_10 (TYPE_9__*,struct ct_arg*) ;

int
FUNC_11(scsi_qla_host_t *VAR_10, sw_info_t *VAR_11)
{
 int VAR_12;
 uint16_t VAR_13;

 ms_iocb_entry_t *VAR_14;
 struct ct_sns_req *VAR_15;
 struct ct_sns_rsp *VAR_16;

 struct ct_sns_gid_pt_data *VAR_17;
 struct qla_hw_data *VAR_18 = VAR_10->hw;
 uint16_t VAR_19;
 struct ct_arg VAR_20;

 if (FUNC_0(VAR_18) || FUNC_1(VAR_18))
  return FUNC_9(VAR_10, VAR_11);

 VAR_17 = ((void*)0);
 VAR_19 = FUNC_6(VAR_10);

 VAR_20.iocb = VAR_18->ms_iocb;
 VAR_20.req_dma = VAR_18->ct_sns_dma;
 VAR_20.rsp_dma = VAR_18->ct_sns_dma;
 VAR_20.req_size = VAR_2;
 VAR_20.rsp_size = VAR_19;
 VAR_20.nport_handle = VAR_3;



 VAR_14 = VAR_18->isp_ops->prep_ms_iocb(VAR_10, &VAR_20);


 VAR_15 = FUNC_8(VAR_18->ct_sns, VAR_1, VAR_19);
 VAR_16 = &VAR_18->ct_sns->p.rsp;


 VAR_15->req.gid_pt.port_type = VAR_4;


 VAR_12 = FUNC_7(VAR_10, VAR_18->ms_iocb, VAR_18->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_12 != VAR_7) {

  FUNC_4(VAR_9, VAR_10, 0x2055,
      "GID_PT issue IOCB failed (%d).\n", VAR_12);
 } else if (FUNC_5(VAR_10, VAR_14, VAR_16, "GID_PT") !=
     VAR_7) {
  VAR_12 = VAR_6;
 } else {

  for (VAR_13 = 0; VAR_13 < VAR_18->max_fibre_devices; VAR_13++) {
   VAR_17 = &VAR_16->rsp.gid_pt.entries[VAR_13];
   VAR_11[VAR_13].d_id = FUNC_2(VAR_17->port_id);
   FUNC_3(VAR_11[VAR_13].fabric_port_name, 0, VAR_8);
   VAR_11[VAR_13].fp_speed = VAR_5;


   if (VAR_17->control_byte & VAR_0) {
    VAR_11[VAR_13].d_id.b.rsvd_1 = VAR_17->control_byte;
    break;
   }
  }







  if (VAR_13 == VAR_18->max_fibre_devices)
   VAR_12 = VAR_6;
 }

 return (VAR_12);
}
