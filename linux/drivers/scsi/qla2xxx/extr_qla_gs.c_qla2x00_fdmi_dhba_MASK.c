
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct qla_hw_data {int ms_iocb_dma; int ms_iocb; TYPE_7__* ct_sns; TYPE_1__* isp_ops; } ;
struct ct_sns_rsp {int dummy; } ;
struct TYPE_14__ {int port_name; } ;
struct TYPE_15__ {TYPE_3__ dhba; } ;
struct ct_sns_req {TYPE_4__ req; } ;
struct TYPE_16__ {int port_name; struct qla_hw_data* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_13__ {struct ct_sns_rsp rsp; } ;
struct TYPE_17__ {TYPE_2__ p; } ;
struct TYPE_12__ {int * (* prep_ms_fdmi_iocb ) (TYPE_5__*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,TYPE_5__*,int,char*,...) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_5__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_3 (TYPE_5__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_4 (TYPE_7__*,int ,int ) ;
 int * FUNC_5 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(scsi_qla_host_t *VAR_7)
{
 int VAR_8;
 struct qla_hw_data *VAR_9 = VAR_7->hw;
 ms_iocb_entry_t *VAR_10;
 struct ct_sns_req *VAR_11;
 struct ct_sns_rsp *VAR_12;



 VAR_10 = VAR_9->isp_ops->prep_ms_fdmi_iocb(VAR_7, VAR_1,
     VAR_2);


 VAR_11 = FUNC_4(VAR_9->ct_sns, VAR_0, VAR_2);
 VAR_12 = &VAR_9->ct_sns->p.rsp;


 FUNC_0(VAR_11->req.dhba.port_name, VAR_7->port_name, VAR_5);

 FUNC_1(VAR_6, VAR_7, 0x2036,
     "DHBA portname = %8phN.\n", VAR_11->req.dhba.port_name);


 VAR_8 = FUNC_3(VAR_7, VAR_9->ms_iocb, VAR_9->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_8 != VAR_4) {

  FUNC_1(VAR_6, VAR_7, 0x2037,
      "DHBA issue IOCB failed (%d).\n", VAR_8);
 } else if (FUNC_2(VAR_7, VAR_10, VAR_12, "DHBA") !=
     VAR_4) {
  VAR_8 = VAR_3;
 } else {
  FUNC_1(VAR_6, VAR_7, 0x2038,
      "DHBA exiting normally.\n");
 }

 return VAR_8;
}
