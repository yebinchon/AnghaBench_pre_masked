
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;


typedef int uint32_t ;
struct qla_hw_data {int link_data_rate; int ms_iocb_dma; int ms_iocb; TYPE_2__* init_cb; TYPE_12__* ct_sns; TYPE_3__* isp_ops; } ;
struct new_utsname {char* nodename; } ;
struct init_cb_24xx {int frame_payload_size; } ;
struct TYPE_19__ {scalar_t__ reason_code; scalar_t__ explanation_code; } ;
struct ct_sns_rsp {TYPE_1__ header; } ;
struct TYPE_23__ {void* count; } ;
struct TYPE_24__ {int port_name; TYPE_5__ attrs; } ;
struct TYPE_25__ {TYPE_6__ rpa; } ;
struct ct_sns_req {TYPE_7__ req; } ;
struct TYPE_26__ {int* fc4_types; int max_frame_size; int host_name; int os_dev_name; void* cur_speed; void* sup_speed; } ;
struct ct_fdmi_port_attr {TYPE_8__ a; void* len; void* type; } ;
struct TYPE_27__ {int host; int host_no; int port_name; struct qla_hw_data* hw; } ;
typedef TYPE_9__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_22__ {struct ct_sns_rsp rsp; } ;
struct TYPE_21__ {int * (* prep_ms_fdmi_iocb ) (TYPE_9__*,int ,int ) ;} ;
struct TYPE_20__ {int frame_payload_size; } ;
struct TYPE_18__ {TYPE_4__ p; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*) ;
 scalar_t__ FUNC_7 (struct qla_hw_data*) ;







 char* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (int) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (scalar_t__,TYPE_9__*,int,char*,...) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_14 (scalar_t__,TYPE_9__*,int,void*,int) ;
 int FUNC_15 (TYPE_9__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_16 (TYPE_9__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_17 (TYPE_12__*,int ,int ) ;
 int FUNC_18 (TYPE_9__*,int) ;
 int FUNC_19 (int ,int,char*,char*,...) ;
 int FUNC_20 (int ) ;
 int * FUNC_21 (TYPE_9__*,int ,int ) ;
 struct new_utsname* FUNC_22 () ;
 int FUNC_23 (int ) ;

__attribute__((used)) static int
FUNC_24(scsi_qla_host_t *VAR_26)
{
 int VAR_27, VAR_28;
 uint32_t VAR_29;
 struct qla_hw_data *VAR_30 = VAR_26->hw;
 ms_iocb_entry_t *VAR_31;
 struct ct_sns_req *VAR_32;
 struct ct_sns_rsp *VAR_33;
 void *VAR_34;
 struct ct_fdmi_port_attr *VAR_35;
 struct init_cb_24xx *VAR_36 = (struct init_cb_24xx *)VAR_30->init_cb;
 struct new_utsname *VAR_37 = ((void*)0);




 VAR_31 = VAR_30->isp_ops->prep_ms_fdmi_iocb(VAR_26, 0, VAR_22);


 VAR_32 = FUNC_17(VAR_30->ct_sns, VAR_21,
     VAR_22);
 VAR_33 = &VAR_30->ct_sns->p.rsp;


 FUNC_12(VAR_32->req.rpa.port_name, VAR_26->port_name, VAR_23);
 VAR_29 = VAR_23 + 4;


 VAR_32->req.rpa.attrs.count = FUNC_9(VAR_2);
 VAR_34 = &VAR_32->req;


 VAR_35 = VAR_34 + VAR_29;
 VAR_35->type = FUNC_8(VAR_4);
 VAR_35->len = FUNC_8(4 + 32);
 VAR_35->a.fc4_types[2] = 0x01;
 VAR_29 += 4 + 32;

 FUNC_13(VAR_25, VAR_26, 0x2039,
     "FC4_TYPES=%02x %02x.\n",
     VAR_35->a.fc4_types[2],
     VAR_35->a.fc4_types[1]);


 VAR_35 = VAR_34 + VAR_29;
 VAR_35->type = FUNC_8(VAR_16);
 VAR_35->len = FUNC_8(4 + 4);
 if (FUNC_0(VAR_30))
  VAR_35->a.sup_speed = FUNC_9(
      VAR_8);
 else if (FUNC_6(VAR_30) || FUNC_7(VAR_30))
  VAR_35->a.sup_speed = FUNC_9(
      VAR_12|
      VAR_9|
      VAR_14);
 else if (FUNC_2(VAR_30))
  VAR_35->a.sup_speed = FUNC_9(
      VAR_9|
      VAR_14|
      VAR_13);
 else if (FUNC_5(VAR_30))
  VAR_35->a.sup_speed = FUNC_9(
      VAR_14|
      VAR_13|
      VAR_11|
      VAR_10);
 else if (FUNC_4(VAR_30))
  VAR_35->a.sup_speed = FUNC_9(
      VAR_13|
      VAR_11|
      VAR_10);
 else if (FUNC_3(VAR_30))
  VAR_35->a.sup_speed = FUNC_9(
      VAR_11|
      VAR_10);
 else
  VAR_35->a.sup_speed = FUNC_9(
      VAR_10);
 VAR_29 += 4 + 4;

 FUNC_13(VAR_25, VAR_26, 0x203a,
     "Supported_Speed=%x.\n", VAR_35->a.sup_speed);


 VAR_35 = VAR_34 + VAR_29;
 VAR_35->type = FUNC_8(VAR_3);
 VAR_35->len = FUNC_8(4 + 4);
 switch (VAR_30->link_data_rate) {
 case 132:
  VAR_35->a.cur_speed =
      FUNC_9(VAR_10);
  break;
 case 131:
  VAR_35->a.cur_speed =
      FUNC_9(VAR_11);
  break;
 case 129:
  VAR_35->a.cur_speed =
      FUNC_9(VAR_13);
  break;
 case 128:
  VAR_35->a.cur_speed =
      FUNC_9(VAR_14);
  break;
 case 134:
  VAR_35->a.cur_speed =
      FUNC_9(VAR_8);
  break;
 case 133:
  VAR_35->a.cur_speed =
      FUNC_9(VAR_9);
  break;
 case 130:
  VAR_35->a.cur_speed =
      FUNC_9(VAR_12);
  break;
 default:
  VAR_35->a.cur_speed =
      FUNC_9(VAR_15);
  break;
 }
 VAR_29 += 4 + 4;

 FUNC_13(VAR_25, VAR_26, 0x203b,
     "Current_Speed=%x.\n", VAR_35->a.cur_speed);


 VAR_35 = VAR_34 + VAR_29;
 VAR_35->type = FUNC_8(VAR_6);
 VAR_35->len = FUNC_8(4 + 4);
 VAR_35->a.max_frame_size = FUNC_1(VAR_30) ?
     FUNC_11(VAR_36->frame_payload_size) :
     FUNC_11(VAR_30->init_cb->frame_payload_size);
 VAR_35->a.max_frame_size = FUNC_9(VAR_35->a.max_frame_size);
 VAR_29 += 4 + 4;

 FUNC_13(VAR_25, VAR_26, 0x203c,
     "Max_Frame_Size=%x.\n", VAR_35->a.max_frame_size);


 VAR_35 = VAR_34 + VAR_29;
 VAR_35->type = FUNC_8(VAR_7);
 FUNC_19(VAR_35->a.os_dev_name, sizeof(VAR_35->a.os_dev_name),
     "%s:host%lu", VAR_17, VAR_26->host_no);
 VAR_28 = FUNC_20(VAR_35->a.os_dev_name);
 VAR_28 += 4 - (VAR_28 & 3);
 VAR_35->len = FUNC_8(4 + VAR_28);
 VAR_29 += 4 + VAR_28;

 FUNC_13(VAR_25, VAR_26, 0x204b,
     "OS_Device_Name=%s.\n", VAR_35->a.os_dev_name);


 VAR_35 = VAR_34 + VAR_29;
 VAR_35->type = FUNC_8(VAR_5);
 VAR_37 = FUNC_22();
 if (VAR_37) {
  FUNC_19(VAR_35->a.host_name, sizeof(VAR_35->a.host_name),
      "%s", VAR_37->nodename);
 } else {
  FUNC_19(VAR_35->a.host_name, sizeof(VAR_35->a.host_name),
      "%s", FUNC_10(VAR_26->host));
 }
 VAR_28 = FUNC_20(VAR_35->a.host_name);
 VAR_28 += 4 - (VAR_28 & 3);
 VAR_35->len = FUNC_8(4 + VAR_28);
 VAR_29 += 4 + VAR_28;

 FUNC_13(VAR_25, VAR_26, 0x203d, "HostName=%s.\n", VAR_35->a.host_name);


 FUNC_18(VAR_26, VAR_29 + 16);

 FUNC_13(VAR_25, VAR_26, 0x203e,
     "RPA portname  %016llx, size = %d.\n",
     FUNC_23(VAR_32->req.rpa.port_name), VAR_29);
 FUNC_14(VAR_25 + VAR_24, VAR_26, 0x2079,
     VAR_34, VAR_29);


 VAR_27 = FUNC_16(VAR_26, VAR_30->ms_iocb, VAR_30->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_27 != VAR_20) {

  FUNC_13(VAR_25, VAR_26, 0x2040,
      "RPA issue IOCB failed (%d).\n", VAR_27);
 } else if (FUNC_15(VAR_26, VAR_31, VAR_33, "RPA") !=
     VAR_20) {
  VAR_27 = VAR_19;
  if (VAR_33->header.reason_code == VAR_1 &&
      VAR_33->header.explanation_code ==
      VAR_0) {
   FUNC_13(VAR_25, VAR_26, 0x20cd,
       "RPA already registered.\n");
   VAR_27 = VAR_18;
  }

 } else {
  FUNC_13(VAR_25, VAR_26, 0x2041,
      "RPA exiting normally.\n");
 }

 return VAR_27;
}
