
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int* bios_revision; int* efi_revision; int* fcode_revision; int* fw_revision; int flt_region_boot; int flt_region_boot_sec; int flt_region_fw; int flt_region_fw_sec; int* gold_fw_version; int flt_region_gold_fw; } ;
struct active_regions {scalar_t__ global; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int*,char*,int) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int ,TYPE_1__*,int,char*,int,int,...) ;
 int VAR_4 ;
 int FUNC_8 (int ,TYPE_1__*,int,int*,int) ;
 int FUNC_9 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (TYPE_1__*,void*,int,int) ;
 scalar_t__ FUNC_11 (int*) ;
 int FUNC_12 (TYPE_1__*,struct active_regions*) ;

int
FUNC_13(scsi_qla_host_t *VAR_7, void *VAR_8)
{
 int VAR_9 = VAR_3;
 uint32_t VAR_10 = 0, VAR_11 = 0;
 uint32_t *VAR_12 = VAR_8;
 uint8_t *VAR_13 = VAR_8;
 uint8_t VAR_14, VAR_15;
 int VAR_16;
 struct qla_hw_data *VAR_17 = VAR_7->hw;
 uint32_t VAR_18 = 0;
 struct active_regions VAR_19 = { };

 if (FUNC_0(VAR_17))
  return VAR_9;

 if (!VAR_8)
  return VAR_2;

 FUNC_6(VAR_17->bios_revision, 0, sizeof(VAR_17->bios_revision));
 FUNC_6(VAR_17->efi_revision, 0, sizeof(VAR_17->efi_revision));
 FUNC_6(VAR_17->fcode_revision, 0, sizeof(VAR_17->fcode_revision));
 FUNC_6(VAR_17->fw_revision, 0, sizeof(VAR_17->fw_revision));

 VAR_10 = VAR_17->flt_region_boot << 2;
 if (FUNC_1(VAR_17) || FUNC_2(VAR_17)) {
  FUNC_12(VAR_7, &VAR_19);
  if (VAR_19.global == VAR_1) {
   VAR_10 = VAR_17->flt_region_boot_sec << 2;
  }
 }

 do {

  FUNC_10(VAR_7, VAR_12, VAR_10 >> 2, 0x20);
  VAR_13 = VAR_8 + (VAR_10 % 4);
  if (FUNC_5(VAR_13, "\x55\xaa", 2)) {

   FUNC_9(VAR_5, VAR_7, 0x0059,
       "No matching ROM signature.\n");
   VAR_9 = VAR_2;
   break;
  }


  VAR_11 = VAR_10 + ((VAR_13[0x19] << 8) | VAR_13[0x18]);

  FUNC_10(VAR_7, VAR_12, VAR_11 >> 2, 0x20);
  VAR_13 = VAR_8 + (VAR_10 % 4);


  if (FUNC_5(VAR_13, "PCIR", 4)) {

   FUNC_9(VAR_5, VAR_7, 0x005a,
       "PCI data struct not found pcir_adr=%x.\n", VAR_11);
   FUNC_8(VAR_4, VAR_7, 0x0059, VAR_12, 32);
   VAR_9 = VAR_2;
   break;
  }


  VAR_14 = VAR_13[0x14];
  switch (VAR_14) {
  case 130:

   VAR_17->bios_revision[0] = VAR_13[0x12];
   VAR_17->bios_revision[1] = VAR_13[0x13];
   FUNC_7(VAR_4, VAR_7, 0x005b,
       "Read BIOS %d.%d.\n",
       VAR_17->bios_revision[1], VAR_17->bios_revision[0]);
   break;
  case 128:

   VAR_17->fcode_revision[0] = VAR_13[0x12];
   VAR_17->fcode_revision[1] = VAR_13[0x13];
   FUNC_7(VAR_4, VAR_7, 0x005c,
       "Read FCODE %d.%d.\n",
       VAR_17->fcode_revision[1], VAR_17->fcode_revision[0]);
   break;
  case 129:

   VAR_17->efi_revision[0] = VAR_13[0x12];
   VAR_17->efi_revision[1] = VAR_13[0x13];
   FUNC_7(VAR_4, VAR_7, 0x005d,
       "Read EFI %d.%d.\n",
       VAR_17->efi_revision[1], VAR_17->efi_revision[0]);
   break;
  default:
   FUNC_9(VAR_6, VAR_7, 0x005e,
       "Unrecognized code type %x at pcids %x.\n",
       VAR_14, VAR_11);
   break;
  }

  VAR_15 = VAR_13[0x15] & VAR_0;


  VAR_10 += ((VAR_13[0x11] << 8) | VAR_13[0x10]) * 512;
 } while (!VAR_15);


 FUNC_6(VAR_17->fw_revision, 0, sizeof(VAR_17->fw_revision));
 VAR_18 = VAR_17->flt_region_fw;
 if (FUNC_1(VAR_17) || FUNC_2(VAR_17)) {
  FUNC_12(VAR_7, &VAR_19);
  if (VAR_19.global == VAR_1)
   VAR_18 = VAR_17->flt_region_fw_sec;
 }

 FUNC_10(VAR_7, VAR_12, VAR_18, 8);
 if (FUNC_11(VAR_12)) {
  FUNC_9(VAR_6, VAR_7, 0x005f,
      "Unrecognized fw revision at %x.\n",
      VAR_17->flt_region_fw * 4);
  FUNC_8(VAR_4, VAR_7, 0x005f, VAR_12, 32);
 } else {
  for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
   VAR_17->fw_revision[VAR_16] = FUNC_4(VAR_12[4+VAR_16]);
  FUNC_7(VAR_4, VAR_7, 0x0060,
      "Firmware revision (flash) %u.%u.%u (%x).\n",
      VAR_17->fw_revision[0], VAR_17->fw_revision[1],
      VAR_17->fw_revision[2], VAR_17->fw_revision[3]);
 }


 if (!FUNC_3(VAR_17)) {

  return VAR_9;
 }

 FUNC_6(VAR_17->gold_fw_version, 0, sizeof(VAR_17->gold_fw_version));
 VAR_18 = VAR_17->flt_region_gold_fw;
 FUNC_10(VAR_7, (void *)VAR_12, VAR_17->flt_region_gold_fw, 8);
 if (FUNC_11(VAR_12)) {
  FUNC_9(VAR_6, VAR_7, 0x0056,
      "Unrecognized golden fw at %#x.\n", VAR_18);
  FUNC_8(VAR_4, VAR_7, 0x0056, VAR_12, 32);
  return VAR_9;
 }

 for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
  VAR_17->gold_fw_version[VAR_16] = FUNC_4(VAR_12[4+VAR_16]);

 return VAR_9;
}
