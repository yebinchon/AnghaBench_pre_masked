
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct ql82xx_hw_data {int flt_region_flt; int flt_region_fdt; int flt_region_boot; int flt_region_fw; int flt_region_bootload; int flt_iscsi_param; int flt_region_chap; int flt_chap_size; int flt_region_ddb; int flt_ddb_size; } ;
struct scsi_qla_host {scalar_t__ request_ring; struct ql82xx_hw_data hw; } ;
struct qla_flt_region {int size; int code; int end; int start; } ;
struct qla_flt_header {scalar_t__ version; scalar_t__ length; scalar_t__ checksum; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_4 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct scsi_qla_host*,char*,...) ;
 int FUNC_9 (struct scsi_qla_host*,int *,int,int ) ;
 int FUNC_10 (struct scsi_qla_host*,int,int *,int) ;

__attribute__((used)) static void
FUNC_11(struct scsi_qla_host *VAR_12, uint32_t VAR_13)
{
 const char *VAR_14, *VAR_15[] = { "DEF", "FLT" };
 uint16_t *VAR_16;
 uint16_t VAR_17, VAR_18;
 uint32_t VAR_19, VAR_20;
 struct qla_flt_header *VAR_21;
 struct qla_flt_region *VAR_22;
 struct ql82xx_hw_data *VAR_23 = &VAR_12->hw;

 VAR_23->flt_region_flt = VAR_13;
 VAR_16 = (uint16_t *)VAR_12->request_ring;
 VAR_21 = (struct qla_flt_header *)VAR_12->request_ring;
 VAR_22 = (struct qla_flt_region *)&VAR_21[1];

 if (FUNC_3(VAR_12)) {
  FUNC_9(VAR_12, (uint8_t *)VAR_12->request_ring,
        VAR_13 << 2, VAR_10);
 } else if (FUNC_4(VAR_12) || FUNC_5(VAR_12)) {
  VAR_20 = FUNC_10(VAR_12, VAR_13 << 2,
        (uint8_t *)VAR_12->request_ring,
        0x400);
  if (VAR_20 != VAR_11)
   goto no_flash_data;
 }

 if (*VAR_16 == FUNC_2(0xffff))
  goto no_flash_data;
 if (VAR_21->version != FUNC_2(1)) {
  FUNC_0(FUNC_8(VAR_9, VAR_12, "Unsupported FLT detected: "
   "version=0x%x length=0x%x checksum=0x%x.\n",
   FUNC_6(VAR_21->version), FUNC_6(VAR_21->length),
   FUNC_6(VAR_21->checksum)));
  goto no_flash_data;
 }

 VAR_17 = (sizeof(struct qla_flt_header) + FUNC_6(VAR_21->length)) >> 1;
 for (VAR_18 = 0; VAR_17; VAR_17--)
  VAR_18 += FUNC_6(*VAR_16++);
 if (VAR_18) {
  FUNC_0(FUNC_8(VAR_9, VAR_12, "Inconsistent FLT detected: "
   "version=0x%x length=0x%x checksum=0x%x.\n",
   FUNC_6(VAR_21->version), FUNC_6(VAR_21->length),
   VAR_18));
  goto no_flash_data;
 }

 VAR_14 = VAR_15[1];
 VAR_17 = FUNC_6(VAR_21->length) / sizeof(struct qla_flt_region);
 for ( ; VAR_17; VAR_17--, VAR_22++) {

  VAR_19 = FUNC_7(VAR_22->start) >> 2;

  FUNC_1(FUNC_8(VAR_8, VAR_12, "FLT[%02x]: start=0x%x "
      "end=0x%x size=0x%x.\n", FUNC_7(VAR_22->code), VAR_19,
      FUNC_7(VAR_22->end) >> 2, FUNC_7(VAR_22->size)));

  switch (FUNC_7(VAR_22->code) & 0xff) {
  case 133:
   VAR_23->flt_region_fdt = VAR_19;
   break;
  case 134:
   VAR_23->flt_region_boot = VAR_19;
   break;
  case 132:
  case 131:
   VAR_23->flt_region_fw = VAR_19;
   break;
  case 135:
   VAR_23->flt_region_bootload = VAR_19;
   break;
  case 128:
   VAR_23->flt_iscsi_param = VAR_19;
   break;
  case 130:
   VAR_23->flt_region_chap = VAR_19;
   VAR_23->flt_chap_size = FUNC_7(VAR_22->size);
   break;
  case 129:
   VAR_23->flt_region_ddb = VAR_19;
   VAR_23->flt_ddb_size = FUNC_7(VAR_22->size);
   break;
  }
 }
 goto done;

no_flash_data:

 VAR_14 = VAR_15[0];

 VAR_23->flt_region_fdt = VAR_4;
 VAR_23->flt_region_boot = VAR_0;
 VAR_23->flt_region_bootload = VAR_1;
 VAR_23->flt_region_fw = VAR_7;
 VAR_23->flt_region_chap = VAR_5 >> 2;
 VAR_23->flt_chap_size = VAR_2;
 VAR_23->flt_region_ddb = VAR_6 >> 2;
 VAR_23->flt_ddb_size = VAR_3;

done:
 FUNC_0(FUNC_8(VAR_9, VAR_12,
     "FLT[%s]: flt=0x%x fdt=0x%x boot=0x%x bootload=0x%x fw=0x%x chap=0x%x chap_size=0x%x ddb=0x%x  ddb_size=0x%x\n",
     VAR_14, VAR_23->flt_region_flt, VAR_23->flt_region_fdt,
     VAR_23->flt_region_boot, VAR_23->flt_region_bootload,
     VAR_23->flt_region_fw, VAR_23->flt_region_chap,
     VAR_23->flt_chap_size, VAR_23->flt_region_ddb,
     VAR_23->flt_ddb_size));
}
