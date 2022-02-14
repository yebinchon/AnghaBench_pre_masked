
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct fw_caps_config_cmd {void* cfvalid_to_len16; void* op_to_write; int cfcsum; int finicsum; int finiver; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int flags; int mb_mempool; int sm; TYPE_1__* chip_ops; int lock; } ;
struct TYPE_2__ {unsigned int (* chip_flash_cfg_addr ) (struct csio_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct csio_hw*,int ) ;
 int FUNC_1 (struct csio_mb*,struct fw_caps_config_cmd*,int ,struct csio_hw*,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct fw_caps_config_cmd) ;
 unsigned int VAR_11 ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (struct csio_hw*,char*,int) ;
 int FUNC_9 (struct csio_hw*,int) ;
 int FUNC_10 (struct csio_hw*) ;
 int FUNC_11 (struct csio_hw*,int *,char*) ;
 int FUNC_12 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_13 (struct csio_hw*,char*,char*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct csio_mb*) ;
 scalar_t__ FUNC_15 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (struct csio_hw*,char*,int,...) ;
 int FUNC_18 (struct csio_hw*) ;
 void* FUNC_19 (int) ;
 struct csio_mb* FUNC_20 (int ,int ) ;
 int FUNC_21 (struct csio_mb*,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 unsigned int FUNC_25 (struct csio_hw*) ;

__attribute__((used)) static int
FUNC_26(struct csio_hw *VAR_15, int VAR_16, u32 *VAR_17)
{
 struct csio_mb *VAR_18 = ((void*)0);
 struct fw_caps_config_cmd *VAR_19;
 unsigned int VAR_20, VAR_21;
 int VAR_22 = -VAR_3;
 uint32_t VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
 char VAR_26[64];
 char *VAR_27 = ((void*)0);




 if (VAR_16) {
  VAR_22 = FUNC_9(VAR_15, 1);
  if (VAR_22 != 0)
   goto bye;
 }






 FUNC_24(&VAR_15->lock);
 VAR_22 = FUNC_11(VAR_15, VAR_17, VAR_26);
 FUNC_23(&VAR_15->lock);
 if (VAR_22 != 0) {




  VAR_27 = "On FLASH";
  VAR_20 = VAR_11;
  VAR_21 = VAR_15->chip_ops->chip_flash_cfg_addr(VAR_15);
 } else {
  VAR_27 = VAR_26;
  VAR_20 = FUNC_6(*VAR_17);
  VAR_21 = FUNC_7(*VAR_17) << 16;
 }

 VAR_18 = FUNC_20(VAR_15->mb_mempool, VAR_13);
 if (!VAR_18) {
  FUNC_0(VAR_15, VAR_14);
  return -VAR_5;
 }






 VAR_19 = (struct fw_caps_config_cmd *)(VAR_18->mb);
 FUNC_1(VAR_18, VAR_19, VAR_2, VAR_15, ((void*)0), 1);
 VAR_19->op_to_write =
  FUNC_19(FUNC_4(VAR_6) |
        VAR_9 |
        VAR_8);
 VAR_19->cfvalid_to_len16 =
  FUNC_19(VAR_7 |
        FUNC_3(VAR_20) |
        FUNC_2(VAR_21 >> 16) |
        FUNC_5(*VAR_19));

 if (FUNC_15(VAR_15, VAR_18)) {
  VAR_22 = -VAR_3;
  goto bye;
 }

 VAR_22 = FUNC_14(VAR_18);






 if (VAR_22 == VAR_4) {
  FUNC_1(VAR_18, VAR_19, VAR_2, VAR_15, ((void*)0), 1);
  VAR_19->op_to_write = FUNC_19(FUNC_4(VAR_6) |
           VAR_9 |
           VAR_8);
  VAR_19->cfvalid_to_len16 = FUNC_19(FUNC_5(*VAR_19));

  if (FUNC_15(VAR_15, VAR_18)) {
   VAR_22 = -VAR_3;
   goto bye;
  }

  VAR_22 = FUNC_14(VAR_18);
  VAR_27 = "Firmware Default";
 }
 if (VAR_22 != VAR_12)
  goto bye;

 VAR_23 = FUNC_22(VAR_19->finiver);
 VAR_24 = FUNC_22(VAR_19->finicsum);
 VAR_25 = FUNC_22(VAR_19->cfcsum);




 VAR_19->op_to_write =
  FUNC_19(FUNC_4(VAR_6) |
        VAR_9 |
        VAR_10);
 VAR_19->cfvalid_to_len16 = FUNC_19(FUNC_5(*VAR_19));

 if (FUNC_15(VAR_15, VAR_18)) {
  VAR_22 = -VAR_3;
  goto bye;
 }

 VAR_22 = FUNC_14(VAR_18);
 if (VAR_22 != VAR_12) {
  FUNC_8(VAR_15, "FW_CAPS_CONFIG_CMD returned %d!\n", VAR_22);
  goto bye;
 }

 if (VAR_24 != VAR_25) {
  FUNC_17(VAR_15,
        "Config File checksum mismatch: csum=%#x, computed=%#x\n",
        VAR_24, VAR_25);
 }


 VAR_22 = FUNC_12(VAR_15, VAR_18);
 if (VAR_22 != 0)
  goto bye;

 FUNC_21(VAR_18, VAR_15->mb_mempool);
 VAR_18 = ((void*)0);






 VAR_15->flags |= VAR_1;


 VAR_22 = FUNC_10(VAR_15);
 if (VAR_22 != 0)
  goto bye;


 FUNC_18(VAR_15);






 FUNC_16(&VAR_15->sm, VAR_0);

 FUNC_13(VAR_15, "Successfully configure using Firmware "
    "Configuration File %s, version %#x, computed checksum %#x\n",
    VAR_27, VAR_23, VAR_25);
 return 0;




bye:
 if (VAR_18)
  FUNC_21(VAR_18, VAR_15->mb_mempool);
 VAR_15->flags &= ~VAR_1;
 FUNC_17(VAR_15, "Configuration file error %d\n", VAR_22);
 return VAR_22;
}
