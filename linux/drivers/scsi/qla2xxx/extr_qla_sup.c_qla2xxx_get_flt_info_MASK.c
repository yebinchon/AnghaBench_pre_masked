
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct qla_hw_data {size_t flt_region_fcp_prio; scalar_t__ port_no; size_t flt_region_flt; size_t flt_region_fw; size_t flt_region_boot; size_t flt_region_vpd_nvram; size_t flt_region_vpd; size_t flt_region_nvram; size_t flt_region_fdt; size_t flt_region_npiv_conf; size_t flt_region_gold_fw; size_t flt_region_bootload; size_t flt_region_img_status_pri; size_t flt_region_img_status_sec; size_t flt_region_fw_sec; size_t flt_region_boot_sec; size_t flt_region_aux_img_status_pri; size_t flt_region_aux_img_status_sec; size_t flt_region_nvram_sec; size_t flt_region_vpd_nvram_sec; size_t flt_region_vpd_sec; TYPE_1__* isp_ops; scalar_t__ flt; } ;
struct qla_flt_region {int code; scalar_t__ attribute; int size; int end; int start; } ;
struct qla_flt_header {scalar_t__ version; int length; int checksum; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_7__ {int (* read_optrom ) (TYPE_2__*,void*,size_t,scalar_t__) ;} ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 size_t const VAR_2 ;
 size_t const VAR_3 ;
 size_t const VAR_4 ;
 size_t const VAR_5 ;
 size_t const VAR_6 ;
 size_t const VAR_7 ;
 size_t const VAR_8 ;
 size_t const VAR_9 ;
 size_t const VAR_10 ;
 size_t const VAR_11 ;
 size_t const VAR_12 ;
 size_t const VAR_13 ;
 size_t const VAR_14 ;
 size_t const VAR_15 ;
 size_t const VAR_16 ;
 size_t const VAR_17 ;
 size_t const VAR_18 ;
 size_t const VAR_19 ;
 size_t const VAR_20 ;
 size_t const VAR_21 ;
 size_t const VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 int FUNC_6 (struct qla_hw_data*) ;
 scalar_t__ FUNC_7 (struct qla_hw_data*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_24 ;
 int FUNC_12 (int ,TYPE_2__*,int,char*,int,...) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_13 (TYPE_2__*,void*,size_t,scalar_t__) ;

__attribute__((used)) static void
FUNC_14(scsi_qla_host_t *VAR_27, uint32_t VAR_28)
{
 const char *VAR_29[] = { "DEF", "FLT" }, *VAR_30 = VAR_29[1];
 const uint32_t VAR_31[] =
  { VAR_17, VAR_17, VAR_18 };
 const uint32_t VAR_32[] =
  { VAR_0, VAR_0, VAR_1 };
 const uint32_t VAR_33[] =
  { VAR_21, VAR_21, VAR_22 };
 const uint32_t VAR_34[] =
  { 0, 0, VAR_19 };
 const uint32_t VAR_35[] =
  { 0, 0, VAR_20 };
 const uint32_t VAR_36[] =
  { 0, 0, VAR_15 };
 const uint32_t VAR_37[] =
  { 0, 0, VAR_16 };
 const uint32_t VAR_38[] =
  { VAR_7, VAR_6,
   VAR_8 };
 const uint32_t VAR_39[] =
  { VAR_10, VAR_9,
   VAR_11 };
 const uint32_t VAR_40[] =
  { VAR_13, VAR_12,
   VAR_14 };
 const uint32_t VAR_41[] =
  { VAR_2, VAR_3,
   0 };
 const uint32_t VAR_42[] =
  { VAR_4, VAR_5,
   0 };

 struct qla_hw_data *VAR_43 = VAR_27->hw;
 uint32_t VAR_44 = FUNC_7(VAR_43) ? 2 : FUNC_2(VAR_43) ? 1 : 0;
 struct qla_flt_header *VAR_45 = (void *)VAR_43->flt;
 struct qla_flt_region *VAR_46 = (void *)&VAR_45[1];
 uint16_t *VAR_47, VAR_48, VAR_49;
 uint32_t VAR_50;




 VAR_43->flt_region_fcp_prio = (VAR_43->port_no == 0) ?
     VAR_41[VAR_44] : VAR_42[VAR_44];

 VAR_43->flt_region_flt = VAR_28;
 VAR_47 = (uint16_t *)VAR_43->flt;
 VAR_43->isp_ops->read_optrom(VAR_27, (void *)VAR_45, VAR_28 << 2,
     (sizeof(struct qla_flt_header) + VAR_23));

 if (FUNC_9(*VAR_47) == 0xffff)
  goto no_flash_data;
 if (VAR_45->version != FUNC_8(1)) {
  FUNC_12(VAR_26, VAR_27, 0x0047,
      "Unsupported FLT detected: version=0x%x length=0x%x checksum=0x%x.\n",
      FUNC_9(VAR_45->version), FUNC_9(VAR_45->length),
      FUNC_9(VAR_45->checksum));
  goto no_flash_data;
 }

 VAR_48 = (sizeof(*VAR_45) + FUNC_9(VAR_45->length)) / sizeof(*VAR_47);
 for (VAR_49 = 0; VAR_48--; VAR_47++)
  VAR_49 += FUNC_9(*VAR_47);
 if (VAR_49) {
  FUNC_12(VAR_25, VAR_27, 0x0048,
      "Inconsistent FLT detected: version=0x%x length=0x%x checksum=0x%x.\n",
      FUNC_9(VAR_45->version), FUNC_9(VAR_45->length),
      FUNC_9(VAR_45->checksum));
  goto no_flash_data;
 }

 VAR_48 = FUNC_9(VAR_45->length) / sizeof(*VAR_46);
 for ( ; VAR_48; VAR_48--, VAR_46++) {

  VAR_50 = FUNC_10(VAR_46->start) >> 2;
  FUNC_11(VAR_24, VAR_27, 0x0049,
      "FLT[%#x]: start=%#x end=%#x size=%#x.\n",
      FUNC_9(VAR_46->code), VAR_50,
      FUNC_10(VAR_46->end) >> 2,
      FUNC_10(VAR_46->size) >> 2);
  if (VAR_46->attribute)
   FUNC_12(VAR_24, VAR_27, 0xffff,
       "Region %x is secure\n", VAR_46->code);

  switch (FUNC_9(VAR_46->code)) {
  case 163:
   if (!FUNC_5(VAR_43))
    break;
   VAR_43->flt_region_fw = VAR_50;
   break;
  case 157:
   if (FUNC_5(VAR_43))
    break;
   VAR_43->flt_region_fw = VAR_50;
   break;
  case 167:
   VAR_43->flt_region_boot = VAR_50;
   break;
  case 140:
   if (FUNC_5(VAR_43))
    break;
   VAR_43->flt_region_vpd_nvram = VAR_50;
   if (FUNC_1(VAR_43))
    break;
   if (VAR_43->port_no == 0)
    VAR_43->flt_region_vpd = VAR_50;
   break;
  case 139:
   if (FUNC_1(VAR_43) || FUNC_5(VAR_43))
    break;
   if (VAR_43->port_no == 1)
    VAR_43->flt_region_vpd = VAR_50;
   break;
  case 138:
   if (!FUNC_3(VAR_43) && !FUNC_4(VAR_43))
    break;
   if (VAR_43->port_no == 2)
    VAR_43->flt_region_vpd = VAR_50;
   break;
  case 137:
   if (!FUNC_3(VAR_43) && !FUNC_4(VAR_43))
    break;
   if (VAR_43->port_no == 3)
    VAR_43->flt_region_vpd = VAR_50;
   break;
  case 148:
   if (FUNC_5(VAR_43))
    break;
   if (VAR_43->port_no == 0)
    VAR_43->flt_region_nvram = VAR_50;
   break;
  case 147:
   if (FUNC_5(VAR_43))
    break;
   if (VAR_43->port_no == 1)
    VAR_43->flt_region_nvram = VAR_50;
   break;
  case 146:
   if (!FUNC_3(VAR_43) && !FUNC_4(VAR_43))
    break;
   if (VAR_43->port_no == 2)
    VAR_43->flt_region_nvram = VAR_50;
   break;
  case 145:
   if (!FUNC_3(VAR_43) && !FUNC_4(VAR_43))
    break;
   if (VAR_43->port_no == 3)
    VAR_43->flt_region_nvram = VAR_50;
   break;
  case 158:
   VAR_43->flt_region_fdt = VAR_50;
   break;
  case 150:
   if (VAR_43->port_no == 0)
    VAR_43->flt_region_npiv_conf = VAR_50;
   break;
  case 149:
   if (VAR_43->port_no == 1)
    VAR_43->flt_region_npiv_conf = VAR_50;
   break;
  case 154:
   VAR_43->flt_region_gold_fw = VAR_50;
   break;
  case 160:
   if (VAR_43->port_no == 0)
    VAR_43->flt_region_fcp_prio = VAR_50;
   break;
  case 159:
   if (VAR_43->port_no == 1)
    VAR_43->flt_region_fcp_prio = VAR_50;
   break;
  case 165:
   VAR_43->flt_region_boot = VAR_50;
   break;
  case 166:
   if (FUNC_6(VAR_43))
    VAR_43->flt_region_boot = VAR_50;
   break;
  case 156:
   VAR_43->flt_region_fw = VAR_50;
   break;
  case 164:
   if (FUNC_0(VAR_43))
    VAR_43->flt_region_fw = VAR_50;
   break;
  case 153:
   VAR_43->flt_region_gold_fw = VAR_50;
   break;
  case 169:
   VAR_43->flt_region_bootload = VAR_50;
   break;
  case 136:
   if (FUNC_0(VAR_43))
    VAR_43->flt_region_vpd = VAR_50;
   break;
  case 162:
   if (!(FUNC_5(VAR_43) || FUNC_6(VAR_43)))
    break;
   if (VAR_43->port_no == 0)
    VAR_43->flt_region_nvram = VAR_50;
   break;
  case 161:
   if (!(FUNC_5(VAR_43) || FUNC_6(VAR_43)))
    break;
   if (VAR_43->port_no == 1)
    VAR_43->flt_region_nvram = VAR_50;
   break;
  case 152:
   if (FUNC_3(VAR_43) && !FUNC_4(VAR_43))
    VAR_43->flt_region_img_status_pri = VAR_50;
   break;
  case 151:
   if (FUNC_3(VAR_43) && !FUNC_4(VAR_43))
    VAR_43->flt_region_img_status_sec = VAR_50;
   break;
  case 155:
   if (FUNC_3(VAR_43) && !FUNC_4(VAR_43))
    VAR_43->flt_region_fw_sec = VAR_50;
   break;
  case 168:
   if (FUNC_3(VAR_43) && !FUNC_4(VAR_43))
    VAR_43->flt_region_boot_sec = VAR_50;
   break;
  case 171:
   if (FUNC_3(VAR_43) || FUNC_4(VAR_43))
    VAR_43->flt_region_aux_img_status_pri = VAR_50;
   break;
  case 170:
   if (FUNC_3(VAR_43) || FUNC_4(VAR_43))
    VAR_43->flt_region_aux_img_status_sec = VAR_50;
   break;
  case 144:
   if (FUNC_3(VAR_43) || FUNC_4(VAR_43))
    if (VAR_43->port_no == 0)
     VAR_43->flt_region_nvram_sec = VAR_50;
   break;
  case 143:
   if (FUNC_3(VAR_43) || FUNC_4(VAR_43))
    if (VAR_43->port_no == 1)
     VAR_43->flt_region_nvram_sec = VAR_50;
   break;
  case 142:
   if (FUNC_3(VAR_43) || FUNC_4(VAR_43))
    if (VAR_43->port_no == 2)
     VAR_43->flt_region_nvram_sec = VAR_50;
   break;
  case 141:
   if (FUNC_3(VAR_43) || FUNC_4(VAR_43))
    if (VAR_43->port_no == 3)
     VAR_43->flt_region_nvram_sec = VAR_50;
   break;
  case 135:
  case 131:
   if (FUNC_3(VAR_43) || FUNC_4(VAR_43)) {
    VAR_43->flt_region_vpd_nvram_sec = VAR_50;
    if (VAR_43->port_no == 0)
     VAR_43->flt_region_vpd_sec = VAR_50;
   }
   break;
  case 134:
  case 130:
   if (FUNC_3(VAR_43) || FUNC_4(VAR_43))
    if (VAR_43->port_no == 1)
     VAR_43->flt_region_vpd_sec = VAR_50;
   break;
  case 133:
  case 129:
   if (FUNC_3(VAR_43) || FUNC_4(VAR_43))
    if (VAR_43->port_no == 2)
     VAR_43->flt_region_vpd_sec = VAR_50;
   break;
  case 132:
  case 128:
   if (FUNC_3(VAR_43) || FUNC_4(VAR_43))
    if (VAR_43->port_no == 3)
     VAR_43->flt_region_vpd_sec = VAR_50;
   break;
  }
 }
 goto done;

no_flash_data:

 VAR_30 = VAR_29[0];
 VAR_43->flt_region_fw = VAR_31[VAR_44];
 VAR_43->flt_region_boot = VAR_32[VAR_44];
 VAR_43->flt_region_vpd_nvram = VAR_33[VAR_44];
 VAR_43->flt_region_vpd = (VAR_43->port_no == 0) ?
     VAR_34[VAR_44] : VAR_35[VAR_44];
 VAR_43->flt_region_nvram = (VAR_43->port_no == 0) ?
     VAR_36[VAR_44] : VAR_37[VAR_44];
 VAR_43->flt_region_fdt = VAR_38[VAR_44];
 VAR_43->flt_region_npiv_conf = (VAR_43->port_no == 0) ?
     VAR_39[VAR_44] : VAR_40[VAR_44];
done:
 FUNC_11(VAR_24, VAR_27, 0x004a,
     "FLT[%s]: boot=0x%x fw=0x%x vpd_nvram=0x%x vpd=0x%x nvram=0x%x "
     "fdt=0x%x flt=0x%x npiv=0x%x fcp_prif_cfg=0x%x.\n",
     VAR_30, VAR_43->flt_region_boot, VAR_43->flt_region_fw,
     VAR_43->flt_region_vpd_nvram, VAR_43->flt_region_vpd, VAR_43->flt_region_nvram,
     VAR_43->flt_region_fdt, VAR_43->flt_region_flt, VAR_43->flt_region_npiv_conf,
     VAR_43->flt_region_fcp_prio);
}
