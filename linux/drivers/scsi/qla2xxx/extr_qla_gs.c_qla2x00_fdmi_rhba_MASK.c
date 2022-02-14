
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef int uint32_t ;
struct qla_hw_data {int serial0; int serial2; int serial1; char* model_number; char* model_desc; char* adapter_id; char* bios_revision; int ms_iocb_dma; int ms_iocb; TYPE_7__* isp_ops; TYPE_13__* ct_sns; } ;
struct TYPE_25__ {int explanation_code; int reason_code; } ;
struct ct_sns_rsp {TYPE_6__ header; } ;
struct TYPE_21__ {void* count; } ;
struct TYPE_23__ {int hba_identifier; TYPE_2__ attrs; int port_name; void* entry_count; } ;
struct TYPE_24__ {TYPE_4__ rhba; } ;
struct ct_sns_req {TYPE_5__ req; } ;
struct TYPE_22__ {int fw_version; int orom_version; int driver_version; int hw_version; int model_desc; int model; int serial_num; int manufacturer; int node_name; } ;
struct ct_fdmi_hba_attr {TYPE_3__ a; void* len; void* type; } ;
struct TYPE_27__ {int node_name; int port_name; struct qla_hw_data* hw; } ;
typedef TYPE_8__ scsi_qla_host_t ;
typedef int ms_iocb_entry_t ;
struct TYPE_26__ {int (* fw_version_str ) (TYPE_8__*,int ,int) ;int * (* prep_ms_fdmi_iocb ) (TYPE_8__*,int ,int ) ;} ;
struct TYPE_20__ {struct ct_sns_rsp rsp; } ;
struct TYPE_19__ {TYPE_1__ p; } ;


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
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (scalar_t__,TYPE_8__*,int,char*,...) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_5 (scalar_t__,TYPE_8__*,int,void*,int) ;
 int FUNC_6 (TYPE_8__*,int *,struct ct_sns_rsp*,char*) ;
 int FUNC_7 (TYPE_8__*,int ,int ,int) ;
 struct ct_sns_req* FUNC_8 (TYPE_13__*,int ,int ) ;
 int FUNC_9 (TYPE_8__*,int) ;
 char* VAR_21 ;
 scalar_t__ FUNC_10 (TYPE_8__*,char*,int ,int) ;
 int FUNC_11 (int ,int,char*,...) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (TYPE_8__*,int ,int ) ;
 int FUNC_14 (TYPE_8__*,int ,int) ;

__attribute__((used)) static int
FUNC_15(scsi_qla_host_t *VAR_22)
{
 int VAR_23, VAR_24;
 uint32_t VAR_25, VAR_26;

 ms_iocb_entry_t *VAR_27;
 struct ct_sns_req *VAR_28;
 struct ct_sns_rsp *VAR_29;
 void *VAR_30;
 struct ct_fdmi_hba_attr *VAR_31;
 struct qla_hw_data *VAR_32 = VAR_22->hw;




 VAR_27 = VAR_32->isp_ops->prep_ms_fdmi_iocb(VAR_22, 0, VAR_17);


 VAR_28 = FUNC_8(VAR_32->ct_sns, VAR_16, VAR_17);
 VAR_29 = &VAR_32->ct_sns->p.rsp;


 FUNC_3(VAR_28->req.rhba.hba_identifier, VAR_22->port_name, VAR_18);
 VAR_28->req.rhba.entry_count = FUNC_2(1);
 FUNC_3(VAR_28->req.rhba.port_name, VAR_22->port_name, VAR_18);
 VAR_25 = 2 * VAR_18 + 4 + 4;


 VAR_28->req.rhba.attrs.count =
     FUNC_2(VAR_2);
 VAR_30 = &VAR_28->req;


 VAR_31 = VAR_30 + VAR_25;
 VAR_31->type = FUNC_1(VAR_9);
 VAR_31->len = FUNC_1(4 + VAR_18);
 FUNC_3(VAR_31->a.node_name, VAR_22->node_name, VAR_18);
 VAR_25 += 4 + VAR_18;

 FUNC_4(VAR_20, VAR_22, 0x2025,
     "NodeName = %8phN.\n", VAR_31->a.node_name);


 VAR_31 = VAR_30 + VAR_25;
 VAR_31->type = FUNC_1(VAR_6);
 VAR_24 = FUNC_12(VAR_12);
 FUNC_11(VAR_31->a.manufacturer, sizeof(VAR_31->a.manufacturer),
     "%s", "QLogic Corporation");
 VAR_24 += 4 - (VAR_24 & 3);
 VAR_31->len = FUNC_1(4 + VAR_24);
 VAR_25 += 4 + VAR_24;

 FUNC_4(VAR_20, VAR_22, 0x2026,
     "Manufacturer = %s.\n", VAR_31->a.manufacturer);


 VAR_31 = VAR_30 + VAR_25;
 VAR_31->type = FUNC_1(VAR_11);
 if (FUNC_0(VAR_32))
  FUNC_10(VAR_22, "SN", VAR_31->a.serial_num,
      sizeof(VAR_31->a.serial_num));
 else {
  VAR_26 = ((VAR_32->serial0 & 0x1f) << 16) |
   (VAR_32->serial2 << 8) | VAR_32->serial1;
  FUNC_11(VAR_31->a.serial_num, sizeof(VAR_31->a.serial_num),
      "%c%05d", 'A' + VAR_26 / 100000, VAR_26 % 100000);
 }
 VAR_24 = FUNC_12(VAR_31->a.serial_num);
 VAR_24 += 4 - (VAR_24 & 3);
 VAR_31->len = FUNC_1(4 + VAR_24);
 VAR_25 += 4 + VAR_24;

 FUNC_4(VAR_20, VAR_22, 0x2027,
     "Serial no. = %s.\n", VAR_31->a.serial_num);


 VAR_31 = VAR_30 + VAR_25;
 VAR_31->type = FUNC_1(VAR_7);
 FUNC_11(VAR_31->a.model, sizeof(VAR_31->a.model),
     "%s", VAR_32->model_number);
 VAR_24 = FUNC_12(VAR_31->a.model);
 VAR_24 += 4 - (VAR_24 & 3);
 VAR_31->len = FUNC_1(4 + VAR_24);
 VAR_25 += 4 + VAR_24;

 FUNC_4(VAR_20, VAR_22, 0x2028,
     "Model Name = %s.\n", VAR_31->a.model);


 VAR_31 = VAR_30 + VAR_25;
 VAR_31->type = FUNC_1(VAR_8);
 FUNC_11(VAR_31->a.model_desc, sizeof(VAR_31->a.model_desc),
     "%s", VAR_32->model_desc);
 VAR_24 = FUNC_12(VAR_31->a.model_desc);
 VAR_24 += 4 - (VAR_24 & 3);
 VAR_31->len = FUNC_1(4 + VAR_24);
 VAR_25 += 4 + VAR_24;

 FUNC_4(VAR_20, VAR_22, 0x2029,
     "Model Desc = %s.\n", VAR_31->a.model_desc);


 VAR_31 = VAR_30 + VAR_25;
 VAR_31->type = FUNC_1(VAR_5);
 if (!FUNC_0(VAR_32)) {
  FUNC_11(VAR_31->a.hw_version, sizeof(VAR_31->a.hw_version),
      "HW:%s", VAR_32->adapter_id);
 } else if (FUNC_10(VAR_22, "MN", VAR_31->a.hw_version,
      sizeof(VAR_31->a.hw_version))) {
  ;
 } else if (FUNC_10(VAR_22, "EC", VAR_31->a.hw_version,
      sizeof(VAR_31->a.hw_version))) {
  ;
 } else {
  FUNC_11(VAR_31->a.hw_version, sizeof(VAR_31->a.hw_version),
      "HW:%s", VAR_32->adapter_id);
 }
 VAR_24 = FUNC_12(VAR_31->a.hw_version);
 VAR_24 += 4 - (VAR_24 & 3);
 VAR_31->len = FUNC_1(4 + VAR_24);
 VAR_25 += 4 + VAR_24;

 FUNC_4(VAR_20, VAR_22, 0x202a,
     "Hardware ver = %s.\n", VAR_31->a.hw_version);


 VAR_31 = VAR_30 + VAR_25;
 VAR_31->type = FUNC_1(VAR_3);
 FUNC_11(VAR_31->a.driver_version, sizeof(VAR_31->a.driver_version),
     "%s", VAR_21);
 VAR_24 = FUNC_12(VAR_31->a.driver_version);
 VAR_24 += 4 - (VAR_24 & 3);
 VAR_31->len = FUNC_1(4 + VAR_24);
 VAR_25 += 4 + VAR_24;

 FUNC_4(VAR_20, VAR_22, 0x202b,
     "Driver ver = %s.\n", VAR_31->a.driver_version);


 VAR_31 = VAR_30 + VAR_25;
 VAR_31->type = FUNC_1(VAR_10);
 FUNC_11(VAR_31->a.orom_version, sizeof(VAR_31->a.orom_version),
     "%d.%02d", VAR_32->bios_revision[1], VAR_32->bios_revision[0]);
 VAR_24 = FUNC_12(VAR_31->a.orom_version);
 VAR_24 += 4 - (VAR_24 & 3);
 VAR_31->len = FUNC_1(4 + VAR_24);
 VAR_25 += 4 + VAR_24;

 FUNC_4(VAR_20, VAR_22 , 0x202c,
     "Optrom vers = %s.\n", VAR_31->a.orom_version);


 VAR_31 = VAR_30 + VAR_25;
 VAR_31->type = FUNC_1(VAR_4);
 VAR_32->isp_ops->fw_version_str(VAR_22, VAR_31->a.fw_version,
     sizeof(VAR_31->a.fw_version));
 VAR_24 = FUNC_12(VAR_31->a.fw_version);
 VAR_24 += 4 - (VAR_24 & 3);
 VAR_31->len = FUNC_1(4 + VAR_24);
 VAR_25 += 4 + VAR_24;

 FUNC_4(VAR_20, VAR_22, 0x202d,
     "Firmware vers = %s.\n", VAR_31->a.fw_version);


 FUNC_9(VAR_22, VAR_25 + 16);

 FUNC_4(VAR_20, VAR_22, 0x202e,
     "RHBA identifier = %8phN size=%d.\n",
     VAR_28->req.rhba.hba_identifier, VAR_25);
 FUNC_5(VAR_20 + VAR_19, VAR_22, 0x2076,
     VAR_30, VAR_25);


 VAR_23 = FUNC_7(VAR_22, VAR_32->ms_iocb, VAR_32->ms_iocb_dma,
     sizeof(ms_iocb_entry_t));
 if (VAR_23 != VAR_15) {

  FUNC_4(VAR_20, VAR_22, 0x2030,
      "RHBA issue IOCB failed (%d).\n", VAR_23);
 } else if (FUNC_6(VAR_22, VAR_27, VAR_29, "RHBA") !=
     VAR_15) {
  VAR_23 = VAR_14;
  if (VAR_29->header.reason_code == VAR_1 &&
      VAR_29->header.explanation_code ==
      VAR_0) {
   FUNC_4(VAR_20, VAR_22, 0x2034,
       "HBA already registered.\n");
   VAR_23 = VAR_13;
  } else {
   FUNC_4(VAR_20, VAR_22, 0x20ad,
       "RHBA FDMI registration failed, CT Reason code: 0x%x, CT Explanation 0x%x\n",
       VAR_29->header.reason_code,
       VAR_29->header.explanation_code);
  }
 } else {
  FUNC_4(VAR_20, VAR_22, 0x2035,
      "RHBA exiting normally.\n");
 }

 return VAR_23;
}
