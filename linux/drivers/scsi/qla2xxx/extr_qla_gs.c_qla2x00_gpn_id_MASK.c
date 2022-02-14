
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;
typedef struct TYPE_20__ TYPE_13__ ;


typedef size_t uint16_t ;
struct TYPE_28__ {scalar_t__ rsvd_1; } ;
struct TYPE_21__ {TYPE_7__ b; } ;
struct TYPE_29__ {TYPE_19__ d_id; int port_name; } ;
typedef TYPE_8__ sw_info_t ;
struct qla_hw_data {size_t max_fibre_devices; int ms_iocb_dma; int ms_iocb; TYPE_13__* ct_sns; TYPE_1__* isp_ops; int ct_sns_dma; } ;
struct TYPE_26__ {int port_name; } ;
struct TYPE_27__ {TYPE_5__ gpn_id; } ;
struct ct_sns_rsp {TYPE_6__ rsp; } ;
struct TYPE_24__ {int port_id; } ;
struct TYPE_25__ {TYPE_3__ port_id; } ;
struct ct_sns_req {TYPE_4__ req; } ;
struct ct_arg {int nport_handle; int rsp_size; int req_size; int rsp_dma; int req_dma; int iocb; } ;
struct TYPE_30__ {struct qla_hw_data* hw; } ;
typedef TYPE_9__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_23__ {struct ct_sns_rsp rsp; } ;
struct TYPE_22__ {int * (* prep_ms_iocb ) (TYPE_9__*,struct ct_arg*) ;} ;
struct TYPE_20__ {TYPE_2__ p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_19__) ;
 int FUNC_4 (int ,TYPE_9__*,int,char*,int) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_9__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_6 (TYPE_9__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_7 (TYPE_13__*,int ,int ) ;
 int FUNC_8 (TYPE_9__*,TYPE_8__*) ;
 int * FUNC_9 (TYPE_9__*,struct ct_arg*) ;

int
FUNC_10(scsi_qla_host_t *VAR_8, sw_info_t *VAR_9)
{
 int VAR_10 = VAR_5;
 uint16_t VAR_11;

 ms_iocb_entry_t *VAR_12;
 struct ct_sns_req *VAR_13;
 struct ct_sns_rsp *VAR_14;
 struct qla_hw_data *VAR_15 = VAR_8->hw;
 struct ct_arg VAR_16;

 if (FUNC_0(VAR_15) || FUNC_1(VAR_15))
  return FUNC_8(VAR_8, VAR_9);

 VAR_16.iocb = VAR_15->ms_iocb;
 VAR_16.req_dma = VAR_15->ct_sns_dma;
 VAR_16.rsp_dma = VAR_15->ct_sns_dma;
 VAR_16.req_size = VAR_1;
 VAR_16.rsp_size = VAR_2;
 VAR_16.nport_handle = VAR_3;

 for (VAR_11 = 0; VAR_11 < VAR_15->max_fibre_devices; VAR_11++) {


  VAR_12 = VAR_15->isp_ops->prep_ms_iocb(VAR_8, &VAR_16);


  VAR_13 = FUNC_7(VAR_15->ct_sns, VAR_0,
      VAR_2);
  VAR_14 = &VAR_15->ct_sns->p.rsp;


  VAR_13->req.port_id.port_id = FUNC_3(VAR_9[VAR_11].d_id);


  VAR_10 = FUNC_6(VAR_8, VAR_15->ms_iocb, VAR_15->ms_iocb_dma,
      sizeof(ms_iocb_entry_t));
  if (VAR_10 != VAR_5) {

   FUNC_4(VAR_7, VAR_8, 0x2056,
       "GPN_ID issue IOCB failed (%d).\n", VAR_10);
   break;
  } else if (FUNC_5(VAR_8, VAR_12, VAR_14,
      "GPN_ID") != VAR_5) {
   VAR_10 = VAR_4;
   break;
  } else {

   FUNC_2(VAR_9[VAR_11].port_name,
       VAR_14->rsp.gpn_id.port_name, VAR_6);
  }


  if (VAR_9[VAR_11].d_id.b.rsvd_1 != 0)
   break;
 }

 return (VAR_10);
}
