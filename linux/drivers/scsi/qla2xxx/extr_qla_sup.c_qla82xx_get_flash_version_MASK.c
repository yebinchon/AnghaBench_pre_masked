
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int* bios_revision; int* efi_revision; int* fcode_revision; int* fw_revision; int flt_region_boot; int flt_region_fw; TYPE_1__* isp_ops; } ;
struct TYPE_10__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_9__ {int (* read_optrom ) (TYPE_2__*,int*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ,TYPE_2__*,int,char*,int,int,...) ;
 int VAR_3 ;
 int FUNC_3 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,int*,int,int) ;
 int FUNC_5 (TYPE_2__*,int*,int,int) ;
 int FUNC_6 (TYPE_2__*,int*,int,int) ;

int
FUNC_7(scsi_qla_host_t *VAR_6, void *VAR_7)
{
 int VAR_8 = VAR_2;
 uint32_t VAR_9, VAR_10;
 uint32_t *VAR_11 = VAR_7;
 uint8_t *VAR_12 = VAR_7;
 uint8_t VAR_13, VAR_14;
 struct qla_hw_data *VAR_15 = VAR_6->hw;

 if (!VAR_7)
  return VAR_1;

 FUNC_1(VAR_15->bios_revision, 0, sizeof(VAR_15->bios_revision));
 FUNC_1(VAR_15->efi_revision, 0, sizeof(VAR_15->efi_revision));
 FUNC_1(VAR_15->fcode_revision, 0, sizeof(VAR_15->fcode_revision));
 FUNC_1(VAR_15->fw_revision, 0, sizeof(VAR_15->fw_revision));


 VAR_9 = VAR_15->flt_region_boot << 2;
 VAR_14 = 1;
 do {

  VAR_15->isp_ops->read_optrom(VAR_6, VAR_11, VAR_9, 0x20 * 4);
  VAR_12 = VAR_7 + (VAR_9 % 4);
  if (FUNC_0(VAR_12, "\x55\xaa", 2)) {

   FUNC_3(VAR_4, VAR_6, 0x0154,
       "No matching ROM signature.\n");
   VAR_8 = VAR_1;
   break;
  }


  VAR_10 = VAR_9 + ((VAR_12[0x19] << 8) | VAR_12[0x18]);

  VAR_15->isp_ops->read_optrom(VAR_6, VAR_11, VAR_10, 0x20 * 4);
  VAR_12 = VAR_7 + (VAR_9 % 4);


  if (FUNC_0(VAR_12, "PCIR", 4)) {

   FUNC_3(VAR_4, VAR_6, 0x0155,
       "PCI data struct not found pcir_adr=%x.\n", VAR_10);
   VAR_8 = VAR_1;
   break;
  }


  VAR_13 = VAR_12[0x14];
  switch (VAR_13) {
  case 130:

   VAR_15->bios_revision[0] = VAR_12[0x12];
   VAR_15->bios_revision[1] = VAR_12[0x13];
   FUNC_2(VAR_3, VAR_6, 0x0156,
       "Read BIOS %d.%d.\n",
       VAR_15->bios_revision[1], VAR_15->bios_revision[0]);
   break;
  case 128:

   VAR_15->fcode_revision[0] = VAR_12[0x12];
   VAR_15->fcode_revision[1] = VAR_12[0x13];
   FUNC_2(VAR_3, VAR_6, 0x0157,
       "Read FCODE %d.%d.\n",
       VAR_15->fcode_revision[1], VAR_15->fcode_revision[0]);
   break;
  case 129:

   VAR_15->efi_revision[0] = VAR_12[0x12];
   VAR_15->efi_revision[1] = VAR_12[0x13];
   FUNC_2(VAR_3, VAR_6, 0x0158,
       "Read EFI %d.%d.\n",
       VAR_15->efi_revision[1], VAR_15->efi_revision[0]);
   break;
  default:
   FUNC_3(VAR_5, VAR_6, 0x0159,
       "Unrecognized code type %x at pcids %x.\n",
       VAR_13, VAR_10);
   break;
  }

  VAR_14 = VAR_12[0x15] & VAR_0;


  VAR_9 += ((VAR_12[0x11] << 8) | VAR_12[0x10]) * 512;
 } while (!VAR_14);


 FUNC_1(VAR_15->fw_revision, 0, sizeof(VAR_15->fw_revision));
 VAR_11 = VAR_7;
 VAR_15->isp_ops->read_optrom(VAR_6, VAR_11, VAR_15->flt_region_fw << 2, 0x20);
 VAR_12 = VAR_7 + (VAR_9 % 4);


 if (VAR_12[0x0] == 0x3 && VAR_12[0x1] == 0x0 &&
     VAR_12[0x2] == 0x40 && VAR_12[0x3] == 0x40) {
  VAR_15->fw_revision[0] = VAR_12[0x4];
  VAR_15->fw_revision[1] = VAR_12[0x5];
  VAR_15->fw_revision[2] = VAR_12[0x6];
  FUNC_2(VAR_3, VAR_6, 0x0153,
      "Firmware revision %d.%d.%d\n",
      VAR_15->fw_revision[0], VAR_15->fw_revision[1],
      VAR_15->fw_revision[2]);
 }

 return VAR_8;
}
