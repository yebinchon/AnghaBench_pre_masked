
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


typedef size_t uint16_t ;
struct TYPE_26__ {scalar_t__ rsvd_1; } ;
struct TYPE_19__ {TYPE_7__ b; } ;
struct TYPE_27__ {TYPE_17__ d_id; int fabric_port_name; } ;
typedef TYPE_8__ sw_info_t ;
struct qla_hw_data {size_t max_fibre_devices; int ms_iocb_dma; int ms_iocb; TYPE_11__* ct_sns; TYPE_1__* isp_ops; int ct_sns_dma; } ;
struct TYPE_24__ {int port_name; } ;
struct TYPE_25__ {TYPE_5__ gfpn_id; } ;
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
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_17__) ;
 int FUNC_3 (int ,TYPE_9__*,int,char*,int) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_9__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_5 (TYPE_9__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_6 (TYPE_11__*,int ,int ) ;
 int * FUNC_7 (TYPE_9__*,struct ct_arg*) ;

int
FUNC_8(scsi_qla_host_t *VAR_8, sw_info_t *VAR_9)
{
 int VAR_10 = VAR_5;
 uint16_t VAR_11;
 struct qla_hw_data *VAR_12 = VAR_8->hw;
 ms_iocb_entry_t *VAR_13;
 struct ct_sns_req *VAR_14;
 struct ct_sns_rsp *VAR_15;
 struct ct_arg VAR_16;

 if (!FUNC_0(VAR_12))
  return VAR_4;

 VAR_16.iocb = VAR_12->ms_iocb;
 VAR_16.req_dma = VAR_12->ct_sns_dma;
 VAR_16.rsp_dma = VAR_12->ct_sns_dma;
 VAR_16.req_size = VAR_1;
 VAR_16.rsp_size = VAR_2;
 VAR_16.nport_handle = VAR_3;

 for (VAR_11 = 0; VAR_11 < VAR_12->max_fibre_devices; VAR_11++) {


  VAR_13 = VAR_12->isp_ops->prep_ms_iocb(VAR_8, &VAR_16);


  VAR_14 = FUNC_6(VAR_12->ct_sns, VAR_0,
      VAR_2);
  VAR_15 = &VAR_12->ct_sns->p.rsp;


  VAR_14->req.port_id.port_id = FUNC_2(VAR_9[VAR_11].d_id);


  VAR_10 = FUNC_5(VAR_8, VAR_12->ms_iocb, VAR_12->ms_iocb_dma,
      sizeof(ms_iocb_entry_t));
  if (VAR_10 != VAR_5) {

   FUNC_3(VAR_7, VAR_8, 0x2023,
       "GFPN_ID issue IOCB failed (%d).\n", VAR_10);
   break;
  } else if (FUNC_4(VAR_8, VAR_13, VAR_15,
      "GFPN_ID") != VAR_5) {
   VAR_10 = VAR_4;
   break;
  } else {

   FUNC_1(VAR_9[VAR_11].fabric_port_name,
       VAR_15->rsp.gfpn_id.port_name, VAR_6);
  }


  if (VAR_9[VAR_11].d_id.b.rsvd_1 != 0)
   break;
 }

 return (VAR_10);
}
