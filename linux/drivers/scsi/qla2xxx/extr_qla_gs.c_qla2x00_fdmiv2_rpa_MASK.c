
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int uint32_t ;
struct qla_hw_data {int link_data_rate; int ms_iocb_dma; int ms_iocb; TYPE_5__* init_cb; TYPE_15__* ct_sns; TYPE_1__* isp_ops; } ;
struct new_utsname {char* nodename; } ;
struct init_cb_24xx {int frame_payload_size; } ;
struct TYPE_23__ {int explanation_code; int reason_code; } ;
struct ct_sns_rsp {TYPE_11__ header; } ;
struct TYPE_34__ {int port_name; } ;
struct TYPE_28__ {void* count; } ;
struct TYPE_29__ {TYPE_3__ attrs; int port_name; } ;
struct TYPE_22__ {TYPE_9__ rpa; TYPE_4__ rpa2; } ;
struct ct_sns_req {TYPE_10__ req; } ;
struct TYPE_33__ {int* fc4_types; int max_frame_size; char* host_name; char* port_sym_name; int* port_fc4_type; void* port_id; void* num_ports; void* port_state; int fabric_name; void* port_supported_cos; void* port_type; int port_name; int node_name; int os_dev_name; void* cur_speed; void* sup_speed; } ;
struct ct_fdmiv2_port_attr {TYPE_8__ a; void* len; void* type; } ;
struct TYPE_32__ {int b24; } ;
struct TYPE_31__ {scalar_t__ nvme_enabled; } ;
struct TYPE_24__ {TYPE_7__ d_id; TYPE_6__ flags; int fabric_node_name; int port_name; int node_name; int host; int host_no; struct qla_hw_data* hw; } ;
typedef TYPE_12__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_30__ {int frame_payload_size; } ;
struct TYPE_27__ {struct ct_sns_rsp rsp; } ;
struct TYPE_26__ {int * (* prep_ms_fdmi_iocb ) (TYPE_12__*,int ,int ) ;} ;
struct TYPE_25__ {TYPE_2__ p; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*) ;
 scalar_t__ FUNC_7 (struct qla_hw_data*) ;
 int VAR_28 ;







 char* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (int) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (scalar_t__,TYPE_12__*,int,char*,...) ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_14 (scalar_t__,TYPE_12__*,int,void*,int) ;
 int FUNC_15 (TYPE_12__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_16 (TYPE_12__*,char*,int) ;
 int FUNC_17 (TYPE_12__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_18 (TYPE_15__*,int ,int ) ;
 int FUNC_19 (TYPE_12__*,int) ;
 int FUNC_20 (char*,int,char*,char*,...) ;
 int FUNC_21 (char*) ;
 int * FUNC_22 (TYPE_12__*,int ,int ) ;
 struct new_utsname* FUNC_23 () ;
 int FUNC_24 (int ) ;

__attribute__((used)) static int
FUNC_25(scsi_qla_host_t *VAR_38)
{
 int VAR_39, VAR_40;
 uint32_t VAR_41;
 struct qla_hw_data *VAR_42 = VAR_38->hw;
 ms_iocb_entry_t *VAR_43;
 struct ct_sns_req *VAR_44;
 struct ct_sns_rsp *VAR_45;
 void *VAR_46;
 struct ct_fdmiv2_port_attr *VAR_47;
 struct init_cb_24xx *VAR_48 = (struct init_cb_24xx *)VAR_42->init_cb;
 struct new_utsname *VAR_49 = ((void*)0);




 VAR_43 = VAR_42->isp_ops->prep_ms_fdmi_iocb(VAR_38, 0, VAR_34);


 VAR_44 = FUNC_18(VAR_42->ct_sns, VAR_33, VAR_34);
 VAR_45 = &VAR_42->ct_sns->p.rsp;


 FUNC_12(VAR_44->req.rpa2.port_name, VAR_38->port_name, VAR_35);
 VAR_41 = VAR_35 + 4;


 VAR_44->req.rpa2.attrs.count = FUNC_9(VAR_3);
 VAR_46 = &VAR_44->req;


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_8);
 VAR_47->len = FUNC_8(4 + 32);
 VAR_47->a.fc4_types[2] = 0x01;
 VAR_41 += 4 + 32;

 FUNC_13(VAR_37, VAR_38, 0x20ba,
     "FC4_TYPES=%02x %02x.\n",
     VAR_47->a.fc4_types[2],
     VAR_47->a.fc4_types[1]);

 if (VAR_38->flags.nvme_enabled) {
  VAR_47->a.fc4_types[6] = 1;
  FUNC_13(VAR_37, VAR_38, 0x211f,
      "NVME FC4 Type = %02x 0x0 0x0 0x0 0x0 0x0.\n",
      VAR_47->a.fc4_types[6]);
 }


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_24);
 VAR_47->len = FUNC_8(4 + 4);
 if (FUNC_0(VAR_42))
  VAR_47->a.sup_speed = FUNC_9(
      VAR_15);
 else if (FUNC_6(VAR_42) || FUNC_7(VAR_42))
  VAR_47->a.sup_speed = FUNC_9(
      VAR_19|
      VAR_16|
      VAR_21);
 else if (FUNC_2(VAR_42))
  VAR_47->a.sup_speed = FUNC_9(
      VAR_16|
      VAR_21|
      VAR_20);
 else if (FUNC_5(VAR_42))
  VAR_47->a.sup_speed = FUNC_9(
      VAR_21|
      VAR_20|
      VAR_18|
      VAR_17);
 else if (FUNC_4(VAR_42))
  VAR_47->a.sup_speed = FUNC_9(
      VAR_20|
      VAR_18|
      VAR_17);
 else if (FUNC_3(VAR_42))
  VAR_47->a.sup_speed = FUNC_9(
      VAR_18|
      VAR_17);
 else
  VAR_47->a.sup_speed = FUNC_9(
      VAR_17);
 VAR_41 += 4 + 4;

 FUNC_13(VAR_37, VAR_38, 0x20bb,
     "Supported Port Speed = %x.\n", VAR_47->a.sup_speed);


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_5);
 VAR_47->len = FUNC_8(4 + 4);
 switch (VAR_42->link_data_rate) {
 case 132:
  VAR_47->a.cur_speed = FUNC_9(VAR_17);
  break;
 case 131:
  VAR_47->a.cur_speed = FUNC_9(VAR_18);
  break;
 case 129:
  VAR_47->a.cur_speed = FUNC_9(VAR_20);
  break;
 case 128:
  VAR_47->a.cur_speed = FUNC_9(VAR_21);
  break;
 case 134:
  VAR_47->a.cur_speed = FUNC_9(VAR_15);
  break;
 case 133:
  VAR_47->a.cur_speed = FUNC_9(VAR_16);
  break;
 case 130:
  VAR_47->a.cur_speed = FUNC_9(VAR_19);
  break;
 default:
  VAR_47->a.cur_speed = FUNC_9(VAR_22);
  break;
 }
 VAR_41 += 4 + 4;

 FUNC_13(VAR_37, VAR_38, 0x2017,
     "Current_Speed = %x.\n", VAR_47->a.cur_speed);


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_11);
 VAR_47->len = FUNC_8(4 + 4);
 VAR_47->a.max_frame_size = FUNC_1(VAR_42) ?
     FUNC_11(VAR_48->frame_payload_size) :
     FUNC_11(VAR_42->init_cb->frame_payload_size);
 VAR_47->a.max_frame_size = FUNC_9(VAR_47->a.max_frame_size);
 VAR_41 += 4 + 4;

 FUNC_13(VAR_37, VAR_38, 0x20bc,
     "Max_Frame_Size = %x.\n", VAR_47->a.max_frame_size);


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_14);
 VAR_40 = FUNC_21(VAR_29);
 FUNC_20(VAR_47->a.os_dev_name, sizeof(VAR_47->a.os_dev_name),
     "%s:host%lu", VAR_29, VAR_38->host_no);
 VAR_40 += 4 - (VAR_40 & 3);
 VAR_47->len = FUNC_8(4 + VAR_40);
 VAR_41 += 4 + VAR_40;

 FUNC_13(VAR_37, VAR_38, 0x20be,
     "OS_Device_Name = %s.\n", VAR_47->a.os_dev_name);


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_9);
 VAR_49 = FUNC_23();
 if (VAR_49) {
  FUNC_20(VAR_47->a.host_name, sizeof(VAR_47->a.host_name),
      "%s", VAR_49->nodename);
 } else {
  FUNC_20(VAR_47->a.host_name, sizeof(VAR_47->a.host_name),
      "%s", FUNC_10(VAR_38->host));
 }
 VAR_40 = FUNC_21(VAR_47->a.host_name);
 VAR_40 += 4 - (VAR_40 & 3);
 VAR_47->len = FUNC_8(4 + VAR_40);
 VAR_41 += 4 + VAR_40;

 FUNC_13(VAR_37, VAR_38, 0x201a,
     "HostName=%s.\n", VAR_47->a.host_name);


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_13);
 FUNC_12(VAR_47->a.node_name, VAR_38->node_name, VAR_35);
 VAR_47->len = FUNC_8(4 + VAR_35);
 VAR_41 += 4 + VAR_35;

 FUNC_13(VAR_37, VAR_38, 0x20c0,
     "Node Name = %016llx.\n", FUNC_24(VAR_47->a.node_name));


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_12);
 FUNC_12(VAR_47->a.port_name, VAR_38->port_name, VAR_35);
 VAR_47->len = FUNC_8(4 + VAR_35);
 VAR_41 += 4 + VAR_35;

 FUNC_13(VAR_37, VAR_38, 0x20c1,
     "Port Name = %016llx.\n", FUNC_24(VAR_47->a.port_name));


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_26);
 FUNC_16(VAR_38, VAR_47->a.port_sym_name,
     sizeof(VAR_47->a.port_sym_name));
 VAR_40 = FUNC_21(VAR_47->a.port_sym_name);
 VAR_40 += 4 - (VAR_40 & 3);
 VAR_47->len = FUNC_8(4 + VAR_40);
 VAR_41 += 4 + VAR_40;

 FUNC_13(VAR_37, VAR_38, 0x20c2,
     "port symbolic name = %s\n", VAR_47->a.port_sym_name);


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_27);
 VAR_47->a.port_type = FUNC_9(VAR_28);
 VAR_47->len = FUNC_8(4 + 4);
 VAR_41 += 4 + 4;

 FUNC_13(VAR_37, VAR_38, 0x20c3,
     "Port Type = %x.\n", VAR_47->a.port_type);


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_25);
 VAR_47->a.port_supported_cos = FUNC_9(VAR_2);
 VAR_47->len = FUNC_8(4 + 4);
 VAR_41 += 4 + 4;

 FUNC_13(VAR_37, VAR_38, 0x20c4,
     "Supported COS = %08x\n", VAR_47->a.port_supported_cos);


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_6);
 FUNC_12(VAR_47->a.fabric_name, VAR_38->fabric_node_name, VAR_35);
 VAR_47->len = FUNC_8(4 + VAR_35);
 VAR_41 += 4 + VAR_35;

 FUNC_13(VAR_37, VAR_38, 0x20c5,
     "Fabric Name = %016llx.\n", FUNC_24(VAR_47->a.fabric_name));


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_7);
 VAR_47->a.port_fc4_type[0] = 0;
 VAR_47->a.port_fc4_type[1] = 0;
 VAR_47->a.port_fc4_type[2] = 1;
 VAR_47->a.port_fc4_type[3] = 0;
 VAR_47->len = FUNC_8(4 + 32);
 VAR_41 += 4 + 32;

 FUNC_13(VAR_37, VAR_38, 0x20c6,
     "Port Active FC4 Type = %02x %02x.\n",
     VAR_47->a.port_fc4_type[2], VAR_47->a.port_fc4_type[1]);

 if (VAR_38->flags.nvme_enabled) {
  VAR_47->a.port_fc4_type[4] = 0;
  VAR_47->a.port_fc4_type[5] = 0;
  VAR_47->a.port_fc4_type[6] = 1;
  FUNC_13(VAR_37, VAR_38, 0x2120,
      "NVME Port Active FC4 Type = %02x 0x0 0x0 0x0 0x0 0x0.\n",
      VAR_47->a.port_fc4_type[6]);
 }


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_23);
 VAR_47->a.port_state = FUNC_9(1);
 VAR_47->len = FUNC_8(4 + 4);
 VAR_41 += 4 + 4;

 FUNC_13(VAR_37, VAR_38, 0x20c7,
     "Port State = %x.\n", VAR_47->a.port_state);


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_4);
 VAR_47->a.num_ports = FUNC_9(1);
 VAR_47->len = FUNC_8(4 + 4);
 VAR_41 += 4 + 4;

 FUNC_13(VAR_37, VAR_38, 0x20c8,
     "Number of ports = %x.\n", VAR_47->a.num_ports);


 VAR_47 = VAR_46 + VAR_41;
 VAR_47->type = FUNC_8(VAR_10);
 VAR_47->a.port_id = FUNC_9(VAR_38->d_id.b24);
 VAR_47->len = FUNC_8(4 + 4);
 VAR_41 += 4 + 4;

 FUNC_13(VAR_37, VAR_38, 0x201c,
     "Port Id = %x.\n", VAR_47->a.port_id);


 FUNC_19(VAR_38, VAR_41 + 16);

 FUNC_13(VAR_37, VAR_38, 0x2018,
     "RPA portname= %8phN size=%d.\n", VAR_44->req.rpa.port_name, VAR_41);
 FUNC_14(VAR_37 + VAR_36, VAR_38, 0x20ca,
     VAR_46, VAR_41);


 VAR_39 = FUNC_17(VAR_38, VAR_42->ms_iocb, VAR_42->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_39 != VAR_32) {

  FUNC_13(VAR_37, VAR_38, 0x20cb,
      "RPA FDMI v2 issue IOCB failed (%d).\n", VAR_39);
 } else if (FUNC_15(VAR_38, VAR_43, VAR_45, "RPA") !=
     VAR_32) {
  VAR_39 = VAR_31;
  if (VAR_45->header.reason_code == VAR_1 &&
      VAR_45->header.explanation_code ==
      VAR_0) {
   FUNC_13(VAR_37, VAR_38, 0x20ce,
       "RPA FDMI v2 already registered\n");
   VAR_39 = VAR_30;
  } else {
   FUNC_13(VAR_37, VAR_38, 0x2020,
       "RPA FDMI v2 failed, CT Reason code: 0x%x, CT Explanation 0x%x\n",
       VAR_45->header.reason_code,
       VAR_45->header.explanation_code);
  }
 } else {
  FUNC_13(VAR_37, VAR_38, 0x20cc,
      "RPA FDMI V2 exiting normally.\n");
 }

 return VAR_39;
}
