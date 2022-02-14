
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;


typedef int uint32_t ;
struct qla_hw_data {int serial0; int serial2; int serial1; char* model_number; char* model_desc; char* adapter_id; int* bios_revision; int frame_payload_size; int ms_iocb_dma; int ms_iocb; TYPE_3__* isp_ops; TYPE_13__* ct_sns; } ;
struct new_utsname {char* sysname; char* release; char* version; } ;
struct TYPE_27__ {int explanation_code; int reason_code; } ;
struct ct_sns_rsp {TYPE_7__ header; } ;
struct TYPE_22__ {void* count; } ;
struct TYPE_25__ {int hba_identifier; TYPE_2__ attrs; int port_name; void* entry_count; } ;
struct TYPE_26__ {TYPE_5__ rhba2; } ;
struct ct_sns_req {TYPE_6__ req; } ;
struct TYPE_24__ {char* manufacturer; char* serial_num; char* model; char* model_desc; char* hw_version; char* driver_version; char* orom_version; char* fw_version; char* os_version; int max_ct_len; char* sym_name; char* bios_name; char* vendor_identifier; int fabric_name; int num_ports; int vendor_id; int node_name; } ;
struct ct_fdmiv2_hba_attr {TYPE_4__ a; void* len; void* type; } ;
struct TYPE_28__ {int fabric_node_name; int host; int node_name; int port_name; struct qla_hw_data* hw; } ;
typedef TYPE_8__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_23__ {int (* fw_version_str ) (TYPE_8__*,char*,int) ;int * (* prep_ms_fdmi_iocb ) (TYPE_8__*,int ,int ) ;} ;
struct TYPE_21__ {struct ct_sns_rsp rsp; } ;
struct TYPE_20__ {TYPE_1__ p; } ;


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
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (scalar_t__,TYPE_8__*,int,char*,...) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_6 (scalar_t__,TYPE_8__*,int,void*,int) ;
 int FUNC_7 (TYPE_8__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_8 (TYPE_8__*,char*,int) ;
 int FUNC_9 (TYPE_8__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_10 (TYPE_13__*,int ,int ) ;
 int FUNC_11 (TYPE_8__*,int) ;
 char* VAR_28 ;
 scalar_t__ FUNC_12 (TYPE_8__*,char*,char*,int) ;
 int FUNC_13 (char*,int,char*,...) ;
 size_t FUNC_14 (char*) ;
 int * FUNC_15 (TYPE_8__*,int ,int ) ;
 int FUNC_16 (TYPE_8__*,char*,int) ;
 struct new_utsname* FUNC_17 () ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(scsi_qla_host_t *VAR_29)
{
 int VAR_30, VAR_31;
 uint32_t VAR_32, VAR_33;
 ms_iocb_entry_t *VAR_34;
 struct ct_sns_req *VAR_35;
 struct ct_sns_rsp *VAR_36;
 void *VAR_37;
 struct ct_fdmiv2_hba_attr *VAR_38;
 struct qla_hw_data *VAR_39 = VAR_29->hw;
 struct new_utsname *VAR_40 = ((void*)0);




 VAR_34 = VAR_39->isp_ops->prep_ms_fdmi_iocb(VAR_29, 0, VAR_24);


 VAR_35 = FUNC_10(VAR_39->ct_sns, VAR_23,
     VAR_24);
 VAR_36 = &VAR_39->ct_sns->p.rsp;


 FUNC_4(VAR_35->req.rhba2.hba_identifier, VAR_29->port_name, VAR_25);
 VAR_35->req.rhba2.entry_count = FUNC_2(1);
 FUNC_4(VAR_35->req.rhba2.port_name, VAR_29->port_name, VAR_25);
 VAR_32 = 2 * VAR_25 + 4 + 4;


 VAR_35->req.rhba2.attrs.count = FUNC_2(VAR_2);
 VAR_37 = &VAR_35->req;


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_12);
 VAR_38->len = FUNC_1(4 + VAR_25);
 FUNC_4(VAR_38->a.node_name, VAR_29->node_name, VAR_25);
 VAR_32 += 4 + VAR_25;

 FUNC_5(VAR_27, VAR_29, 0x207d,
     "NodeName = %016llx.\n", FUNC_18(VAR_38->a.node_name));


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_8);
 FUNC_13(VAR_38->a.manufacturer, sizeof(VAR_38->a.manufacturer),
     "%s", "QLogic Corporation");
 VAR_38->a.manufacturer[FUNC_14("QLogic Corporation")] = '\0';
 VAR_31 = FUNC_14(VAR_38->a.manufacturer);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29, 0x20a5,
     "Manufacturer = %s.\n", VAR_38->a.manufacturer);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_17);
 if (FUNC_0(VAR_39))
  FUNC_12(VAR_29, "SN", VAR_38->a.serial_num,
      sizeof(VAR_38->a.serial_num));
 else {
  VAR_33 = ((VAR_39->serial0 & 0x1f) << 16) |
   (VAR_39->serial2 << 8) | VAR_39->serial1;
  FUNC_13(VAR_38->a.serial_num, sizeof(VAR_38->a.serial_num),
      "%c%05d", 'A' + VAR_33 / 100000, VAR_33 % 100000);
 }
 VAR_31 = FUNC_14(VAR_38->a.serial_num);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29, 0x20a6,
     "Serial no. = %s.\n", VAR_38->a.serial_num);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_10);
 FUNC_13(VAR_38->a.model, sizeof(VAR_38->a.model),
     "%s", VAR_39->model_number);
 VAR_31 = FUNC_14(VAR_38->a.model);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29, 0x20a7,
     "Model Name = %s.\n", VAR_38->a.model);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_11);
 FUNC_13(VAR_38->a.model_desc, sizeof(VAR_38->a.model_desc),
     "%s", VAR_39->model_desc);
 VAR_31 = FUNC_14(VAR_38->a.model_desc);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29, 0x20a8,
     "Model Desc = %s.\n", VAR_38->a.model_desc);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_7);
 if (!FUNC_0(VAR_39)) {
  FUNC_13(VAR_38->a.hw_version, sizeof(VAR_38->a.hw_version),
      "HW:%s", VAR_39->adapter_id);
 } else if (FUNC_12(VAR_29, "MN", VAR_38->a.hw_version,
      sizeof(VAR_38->a.hw_version))) {
  ;
 } else if (FUNC_12(VAR_29, "EC", VAR_38->a.hw_version,
      sizeof(VAR_38->a.hw_version))) {
  ;
 } else {
  FUNC_13(VAR_38->a.hw_version, sizeof(VAR_38->a.hw_version),
      "HW:%s", VAR_39->adapter_id);
 }
 VAR_31 = FUNC_14(VAR_38->a.hw_version);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29, 0x20a9,
     "Hardware ver = %s.\n", VAR_38->a.hw_version);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_4);
 FUNC_13(VAR_38->a.driver_version, sizeof(VAR_38->a.driver_version),
     "%s", VAR_28);
 VAR_31 = FUNC_14(VAR_38->a.driver_version);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29, 0x20aa,
     "Driver ver = %s.\n", VAR_38->a.driver_version);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_15);
 FUNC_13(VAR_38->a.orom_version, sizeof(VAR_38->a.orom_version),
     "%d.%02d", VAR_39->bios_revision[1], VAR_39->bios_revision[0]);
 VAR_31 = FUNC_14(VAR_38->a.orom_version);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29 , 0x20ab,
     "Optrom version = %d.%02d.\n", VAR_38->a.orom_version[1],
     VAR_38->a.orom_version[0]);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_6);
 VAR_39->isp_ops->fw_version_str(VAR_29, VAR_38->a.fw_version,
     sizeof(VAR_38->a.fw_version));
 VAR_31 = FUNC_14(VAR_38->a.fw_version);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29, 0x20ac,
     "Firmware vers = %s.\n", VAR_38->a.fw_version);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_16);
 VAR_40 = FUNC_17();
 if (VAR_40) {
  FUNC_13(VAR_38->a.os_version, sizeof(VAR_38->a.os_version),
      "%s %s %s",
      VAR_40->sysname, VAR_40->release, VAR_40->version);
 } else {
  FUNC_13(VAR_38->a.os_version, sizeof(VAR_38->a.os_version),
      "%s %s", "Linux", FUNC_3(VAR_29->host));
 }
 VAR_31 = FUNC_14(VAR_38->a.os_version);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29, 0x20ae,
     "OS Name and Version = %s.\n", VAR_38->a.os_version);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_9);
 VAR_38->a.max_ct_len = FUNC_2(VAR_39->frame_payload_size);
 VAR_38->a.max_ct_len = FUNC_2(VAR_38->a.max_ct_len);
 VAR_38->len = FUNC_1(4 + 4);
 VAR_32 += 4 + 4;

 FUNC_5(VAR_27, VAR_29, 0x20af,
     "CT Payload Length = 0x%x.\n", VAR_38->a.max_ct_len);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_13);
 FUNC_8(VAR_29, VAR_38->a.sym_name,
     sizeof(VAR_38->a.sym_name));
 VAR_31 = FUNC_14(VAR_38->a.sym_name);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29, 0x20b0,
     "Symbolic Name = %s.\n", VAR_38->a.sym_name);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_19);
 VAR_38->a.vendor_id = FUNC_2(0x1077);
 VAR_38->len = FUNC_1(4 + 4);
 VAR_32 += 4 + 4;

 FUNC_5(VAR_27, VAR_29, 0x20b1,
     "Vendor Id = %x.\n", VAR_38->a.vendor_id);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_14);
 VAR_38->a.num_ports = FUNC_2(1);
 VAR_38->len = FUNC_1(4 + 4);
 VAR_32 += 4 + 4;

 FUNC_5(VAR_27, VAR_29, 0x20b2,
     "Port Num = %x.\n", VAR_38->a.num_ports);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_5);
 FUNC_4(VAR_38->a.fabric_name, VAR_29->fabric_node_name, VAR_25);
 VAR_38->len = FUNC_1(4 + VAR_25);
 VAR_32 += 4 + VAR_25;

 FUNC_5(VAR_27, VAR_29, 0x20b3,
     "Fabric Name = %016llx.\n", FUNC_18(VAR_38->a.fabric_name));


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_3);
 FUNC_13(VAR_38->a.bios_name, sizeof(VAR_38->a.bios_name),
     "BIOS %d.%02d", VAR_39->bios_revision[1], VAR_39->bios_revision[0]);
 VAR_31 = FUNC_14(VAR_38->a.bios_name);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29, 0x20b4,
     "BIOS Name = %s\n", VAR_38->a.bios_name);


 VAR_38 = VAR_37 + VAR_32;
 VAR_38->type = FUNC_1(VAR_18);
 FUNC_13(VAR_38->a.vendor_identifier, sizeof(VAR_38->a.vendor_identifier),
     "%s", "QLGC");
 VAR_31 = FUNC_14(VAR_38->a.vendor_identifier);
 VAR_31 += 4 - (VAR_31 & 3);
 VAR_38->len = FUNC_1(4 + VAR_31);
 VAR_32 += 4 + VAR_31;

 FUNC_5(VAR_27, VAR_29, 0x201b,
     "Vendor Identifier = %s.\n", VAR_38->a.vendor_identifier);


 FUNC_11(VAR_29, VAR_32 + 16);

 FUNC_5(VAR_27, VAR_29, 0x20b5,
     "RHBA identifier = %016llx.\n",
     FUNC_18(VAR_35->req.rhba2.hba_identifier));
 FUNC_6(VAR_27 + VAR_26, VAR_29, 0x20b6,
     VAR_37, VAR_32);


 VAR_30 = FUNC_9(VAR_29, VAR_39->ms_iocb, VAR_39->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_30 != VAR_22) {

  FUNC_5(VAR_27, VAR_29, 0x20b7,
      "RHBA issue IOCB failed (%d).\n", VAR_30);
 } else if (FUNC_7(VAR_29, VAR_34, VAR_36, "RHBA") !=
     VAR_22) {
  VAR_30 = VAR_21;

  if (VAR_36->header.reason_code == VAR_1 &&
      VAR_36->header.explanation_code ==
      VAR_0) {
   FUNC_5(VAR_27, VAR_29, 0x20b8,
       "HBA already registered.\n");
   VAR_30 = VAR_20;
  } else {
   FUNC_5(VAR_27, VAR_29, 0x2016,
       "RHBA FDMI v2 failed, CT Reason code: 0x%x, CT Explanation 0x%x\n",
       VAR_36->header.reason_code,
       VAR_36->header.explanation_code);
  }
 } else {
  FUNC_5(VAR_27, VAR_29, 0x20b9,
      "RHBA FDMI V2 exiting normally.\n");
 }

 return VAR_30;
}
