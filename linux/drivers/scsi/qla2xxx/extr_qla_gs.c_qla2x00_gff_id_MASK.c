
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_26__ {scalar_t__ rsvd_1; } ;
struct TYPE_19__ {TYPE_7__ b; } ;
struct TYPE_27__ {int fc4f_nvme; TYPE_17__ d_id; int fc4_type; } ;
typedef TYPE_8__ sw_info_t ;
struct qla_hw_data {size_t max_fibre_devices; int ms_iocb_dma; int ms_iocb; TYPE_11__* ct_sns; TYPE_1__* isp_ops; int ct_sns_dma; } ;
struct TYPE_24__ {int* fc4_features; } ;
struct TYPE_25__ {TYPE_5__ gff_id; } ;
struct ct_sns_rsp {TYPE_6__ rsp; } ;
struct TYPE_22__ {int port_id; } ;
struct TYPE_23__ {TYPE_3__ port_id; } ;
struct ct_sns_req {TYPE_4__ req; } ;
struct ct_arg {int nport_handle; int rsp_size; int req_size; int rsp_dma; int req_dma; int iocb; } ;
struct TYPE_28__ {struct qla_hw_data* hw; } ;
typedef TYPE_9__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_21__ {struct ct_sns_rsp rsp; } ;
struct TYPE_20__ {int * (* prep_ms_iocb ) (TYPE_9__*,struct ct_arg*) ;} ;
struct TYPE_18__ {TYPE_2__ p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_17__) ;
 int FUNC_2 (int ,TYPE_9__*,int,char*,...) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_9__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_4 (TYPE_9__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_5 (TYPE_11__*,int ,int ) ;
 int * FUNC_6 (TYPE_9__*,struct ct_arg*) ;

void
FUNC_7(scsi_qla_host_t *VAR_11, sw_info_t *VAR_12)
{
 int VAR_13;
 uint16_t VAR_14;

 ms_iocb_entry_t *VAR_15;
 struct ct_sns_req *VAR_16;
 struct ct_sns_rsp *VAR_17;
 struct qla_hw_data *VAR_18 = VAR_11->hw;
 uint8_t VAR_19 = 0;
 struct ct_arg VAR_20;

 for (VAR_14 = 0; VAR_14 < VAR_18->max_fibre_devices; VAR_14++) {


  VAR_12[VAR_14].fc4_type = VAR_2;


  if (!FUNC_0(VAR_18))
   continue;

  VAR_20.iocb = VAR_18->ms_iocb;
  VAR_20.req_dma = VAR_18->ct_sns_dma;
  VAR_20.rsp_dma = VAR_18->ct_sns_dma;
  VAR_20.req_size = VAR_5;
  VAR_20.rsp_size = VAR_6;
  VAR_20.nport_handle = VAR_8;


  VAR_15 = VAR_18->isp_ops->prep_ms_iocb(VAR_11, &VAR_20);


  VAR_16 = FUNC_5(VAR_18->ct_sns, VAR_4,
      VAR_6);
  VAR_17 = &VAR_18->ct_sns->p.rsp;


  VAR_16->req.port_id.port_id = FUNC_1(VAR_12[VAR_14].d_id);


  VAR_13 = FUNC_4(VAR_11, VAR_18->ms_iocb, VAR_18->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));

  if (VAR_13 != VAR_9) {
   FUNC_2(VAR_10, VAR_11, 0x205c,
       "GFF_ID issue IOCB failed (%d).\n", VAR_13);
  } else if (FUNC_3(VAR_11, VAR_15, VAR_17,
          "GFF_ID") != VAR_9) {
   FUNC_2(VAR_10, VAR_11, 0x205d,
       "GFF_ID IOCB status had a failure status code.\n");
  } else {
   VAR_19 =
      VAR_17->rsp.gff_id.fc4_features[VAR_3];
   VAR_19 &= 0x0f;

   if (VAR_19)
    VAR_12[VAR_14].fc4_type = VAR_0;
   else
    VAR_12[VAR_14].fc4_type = VAR_1;

   VAR_12[VAR_14].fc4f_nvme =
       VAR_17->rsp.gff_id.fc4_features[VAR_7];
   VAR_12[VAR_14].fc4f_nvme &= 0xf;
  }


  if (VAR_12[VAR_14].d_id.b.rsvd_1 != 0)
   break;
 }
}
