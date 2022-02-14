
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int * data; int init_data_size; int init_size; int data_size; int inst_size; } ;
struct TYPE_5__ {int * data; int init_data_size; int init_size; int data_size; int inst_size; int build; } ;
struct TYPE_7__ {TYPE_2__ v1; TYPE_1__ v2; } ;
struct iwl_ucode_header {TYPE_3__ u; int ver; } ;
struct iwl_firmware_pieces {int dummy; } ;
struct TYPE_8__ {void* ucode_ver; int fw_version; } ;
struct iwl_drv {TYPE_4__ fw; } ;
struct firmware {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_drv*,char*,...) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct iwl_firmware_pieces*,int ,int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct iwl_firmware_pieces*,int ,int ,int const*) ;
 int FUNC_8 (struct iwl_firmware_pieces*,int ,int ,int ) ;
 int FUNC_9 (struct iwl_firmware_pieces*,int ,int ,void*) ;
 int FUNC_10 (int ,int,char*,int,int,int,int,char*) ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static int FUNC_12(struct iwl_drv *VAR_7,
        const struct firmware *VAR_8,
        struct iwl_firmware_pieces *VAR_9)
{
 struct iwl_ucode_header *VAR_10 = (void *)VAR_8->data;
 u32 VAR_11, VAR_12, VAR_13;
 char VAR_14[25];
 const u8 *VAR_15;

 VAR_7->fw.ucode_ver = FUNC_6(VAR_10->ver);
 VAR_11 = FUNC_1(VAR_7->fw.ucode_ver);

 switch (VAR_11) {
 default:
  VAR_12 = 28;
  if (VAR_8->size < VAR_12) {
   FUNC_0(VAR_7, "File size too small!\n");
   return -VAR_0;
  }
  VAR_13 = FUNC_6(VAR_10->u.v2.build);
  FUNC_9(VAR_9, VAR_4, VAR_6,
        FUNC_6(VAR_10->u.v2.inst_size));
  FUNC_9(VAR_9, VAR_4, VAR_5,
        FUNC_6(VAR_10->u.v2.data_size));
  FUNC_9(VAR_9, VAR_3, VAR_6,
        FUNC_6(VAR_10->u.v2.init_size));
  FUNC_9(VAR_9, VAR_3, VAR_5,
        FUNC_6(VAR_10->u.v2.init_data_size));
  VAR_15 = VAR_10->u.v2.data;
  break;
 case 0:
 case 1:
 case 2:
  VAR_12 = 24;
  if (VAR_8->size < VAR_12) {
   FUNC_0(VAR_7, "File size too small!\n");
   return -VAR_0;
  }
  VAR_13 = 0;
  FUNC_9(VAR_9, VAR_4, VAR_6,
        FUNC_6(VAR_10->u.v1.inst_size));
  FUNC_9(VAR_9, VAR_4, VAR_5,
        FUNC_6(VAR_10->u.v1.data_size));
  FUNC_9(VAR_9, VAR_3, VAR_6,
        FUNC_6(VAR_10->u.v1.init_size));
  FUNC_9(VAR_9, VAR_3, VAR_5,
        FUNC_6(VAR_10->u.v1.init_data_size));
  VAR_15 = VAR_10->u.v1.data;
  break;
 }

 if (VAR_13)
  FUNC_11(VAR_14, " build %u", VAR_13);
 else
  VAR_14[0] = '\0';

 FUNC_10(VAR_7->fw.fw_version,
   sizeof(VAR_7->fw.fw_version),
   "%u.%u.%u.%u%s",
   FUNC_2(VAR_7->fw.ucode_ver),
   FUNC_3(VAR_7->fw.ucode_ver),
   FUNC_1(VAR_7->fw.ucode_ver),
   FUNC_4(VAR_7->fw.ucode_ver),
   VAR_14);



 if (VAR_8->size != VAR_12 +
     FUNC_5(VAR_9, VAR_4, VAR_6) +
     FUNC_5(VAR_9, VAR_4, VAR_5) +
     FUNC_5(VAR_9, VAR_3, VAR_6) +
     FUNC_5(VAR_9, VAR_3, VAR_5)) {

  FUNC_0(VAR_7,
   "uCode file size %d does not match expected size\n",
   (int)VAR_8->size);
  return -VAR_0;
 }


 FUNC_7(VAR_9, VAR_4, VAR_6, VAR_15);
 VAR_15 += FUNC_5(VAR_9, VAR_4, VAR_6);
 FUNC_8(VAR_9, VAR_4, VAR_6,
         VAR_2);
 FUNC_7(VAR_9, VAR_4, VAR_5, VAR_15);
 VAR_15 += FUNC_5(VAR_9, VAR_4, VAR_5);
 FUNC_8(VAR_9, VAR_4, VAR_5,
         VAR_1);
 FUNC_7(VAR_9, VAR_3, VAR_6, VAR_15);
 VAR_15 += FUNC_5(VAR_9, VAR_3, VAR_6);
 FUNC_8(VAR_9, VAR_3, VAR_6,
         VAR_2);
 FUNC_7(VAR_9, VAR_3, VAR_5, VAR_15);
 VAR_15 += FUNC_5(VAR_9, VAR_3, VAR_5);
 FUNC_8(VAR_9, VAR_3, VAR_5,
         VAR_1);
 return 0;
}
