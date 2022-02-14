
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fw_caps_config_cmd {void* cfvalid_to_len16; void* op_to_write; int cfcsum; int finicsum; int finiver; } ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_3__ {int chip; } ;
struct adapter {int pdev_dev; int mbox; TYPE_1__ params; int pf; int win0_lock; TYPE_2__* pdev; } ;
typedef int caps_cmd ;
typedef int __be32 ;
struct TYPE_4__ {int device; } ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct fw_caps_config_cmd) ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (int ) ;
 unsigned long FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct adapter*) ;
 int FUNC_10 (struct adapter*) ;
 int FUNC_11 (struct adapter*) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ,char*,...) ;
 void* FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct fw_caps_config_cmd*,int ,int) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (struct firmware const*) ;
 int FUNC_21 (struct firmware const**,char*,int ) ;
 int FUNC_22 (struct adapter*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (char*,char*,char*) ;
 unsigned long FUNC_26 (struct adapter*) ;
 int FUNC_27 (struct adapter*,int ) ;
 int FUNC_28 (struct adapter*,int ,int) ;
 int FUNC_29 (struct adapter*,int ,unsigned long,unsigned long,int,int *,int ) ;
 int FUNC_30 (struct adapter*,int ,int ,int ,int,scalar_t__*,scalar_t__*) ;
 int FUNC_31 (struct adapter*,int ,int ,int ,int,scalar_t__*,scalar_t__*) ;
 int FUNC_32 (struct adapter*,int ,struct fw_caps_config_cmd*,int,struct fw_caps_config_cmd*) ;

__attribute__((used)) static int FUNC_33(struct adapter *VAR_19, int VAR_20)
{
 char *VAR_21, VAR_22[256];
 u32 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 struct fw_caps_config_cmd VAR_28;
 unsigned long VAR_29 = 0, VAR_30 = 0;
 const struct firmware *VAR_31;
 char *VAR_32 = ((void*)0);
 int VAR_33 = 0;
 int VAR_34;




 if (VAR_20) {
  VAR_34 = FUNC_28(VAR_19, VAR_19->mbox,
      VAR_16 | VAR_17);
  if (VAR_34 < 0)
   goto bye;
 }






 if (FUNC_16(VAR_19->pdev->device)) {
  VAR_34 = FUNC_10(VAR_19);
  if (VAR_34 < 0)
   goto bye;
 }





 switch (FUNC_0(VAR_19->params.chip)) {
 case 130:
  VAR_21 = VAR_4;
  break;
 case 129:
  VAR_21 = VAR_5;
  break;
 case 128:
  VAR_21 = VAR_6;
  break;
 default:
  FUNC_12(VAR_19->pdev_dev, "Device %d is not supported\n",
         VAR_19->pdev->device);
  VAR_34 = -VAR_0;
  goto bye;
 }

 VAR_34 = FUNC_21(&VAR_31, VAR_21, VAR_19->pdev_dev);
 if (VAR_34 < 0) {
  VAR_32 = "On FLASH";
  VAR_29 = VAR_12;
  VAR_30 = FUNC_26(VAR_19);
 } else {
  u32 VAR_35[7], VAR_36[7];

  FUNC_25(VAR_22,
   "/lib/firmware/%s", VAR_21);
  VAR_32 = VAR_22;

  if (VAR_31->size >= VAR_3)
   VAR_34 = -VAR_2;
  else {
   VAR_35[0] = (FUNC_5(VAR_13) |
        FUNC_6(VAR_14));
   VAR_34 = FUNC_30(VAR_19, VAR_19->mbox,
           VAR_19->pf, 0, 1, VAR_35, VAR_36);
   if (VAR_34 == 0) {
    size_t VAR_37 = VAR_31->size & 0x3;
    size_t VAR_38 = VAR_31->size & ~0x3;
    __be32 *VAR_39 = (__be32 *)VAR_31->data;

    VAR_29 = FUNC_7(VAR_36[0]);
    VAR_30 = FUNC_8(VAR_36[0]) << 16;

    FUNC_23(&VAR_19->win0_lock);
    VAR_34 = FUNC_29(VAR_19, 0, VAR_29, VAR_30,
         VAR_38, VAR_39, VAR_18);
    if (VAR_34 == 0 && VAR_37 != 0) {
     union {
      __be32 word;
      char buf[4];
     } VAR_40;
     int VAR_41;

     VAR_40.word = VAR_39[VAR_38 >> 2];
     for (VAR_41 = VAR_37; VAR_41 < 4; VAR_41++)
      VAR_40.buf[VAR_41] = 0;
     VAR_34 = FUNC_29(VAR_19, 0, VAR_29,
          VAR_30 + VAR_38,
          4, &VAR_40.word,
          VAR_18);
    }
    FUNC_24(&VAR_19->win0_lock);
   }
  }

  FUNC_20(VAR_31);
  if (VAR_34)
   goto bye;
 }

 VAR_27 = 0;




 VAR_26 = (FUNC_5(VAR_13) |
   FUNC_6(VAR_15));
 VAR_34 = FUNC_31(VAR_19, VAR_19->mbox, VAR_19->pf, 0,
       1, &VAR_26, &VAR_27);




 if (VAR_34 < 0) {
  FUNC_14(VAR_19->pdev_dev,
    "Hash filter with ofld is not supported by FW\n");
 }







 FUNC_18(&VAR_28, 0, sizeof(VAR_28));
 VAR_28.op_to_write =
  FUNC_15(FUNC_3(VAR_7) |
        VAR_10 |
        VAR_9);
 VAR_28.cfvalid_to_len16 =
  FUNC_15(VAR_8 |
        FUNC_2(VAR_29) |
        FUNC_1(VAR_30 >> 16) |
        FUNC_4(VAR_28));
 VAR_34 = FUNC_32(VAR_19, VAR_19->mbox, &VAR_28, sizeof(VAR_28),
    &VAR_28);







 if (VAR_34 == -VAR_1) {
  FUNC_18(&VAR_28, 0, sizeof(VAR_28));
  VAR_28.op_to_write =
   FUNC_15(FUNC_3(VAR_7) |
     VAR_10 |
     VAR_9);
  VAR_28.cfvalid_to_len16 = FUNC_15(FUNC_4(VAR_28));
  VAR_34 = FUNC_32(VAR_19, VAR_19->mbox, &VAR_28,
    sizeof(VAR_28), &VAR_28);
  VAR_32 = "Firmware Default";
 }

 VAR_33 = 1;
 if (VAR_34 < 0)
  goto bye;

 VAR_23 = FUNC_19(VAR_28.finiver);
 VAR_24 = FUNC_19(VAR_28.finicsum);
 VAR_25 = FUNC_19(VAR_28.cfcsum);
 if (VAR_24 != VAR_25)
  FUNC_14(VAR_19->pdev_dev, "Configuration File checksum " "mismatch: [fini] csum=%#x, computed csum=%#x\n",

    VAR_24, VAR_25);




 VAR_28.op_to_write =
  FUNC_15(FUNC_3(VAR_7) |
        VAR_10 |
        VAR_11);
 VAR_28.cfvalid_to_len16 = FUNC_15(FUNC_4(VAR_28));
 VAR_34 = FUNC_32(VAR_19, VAR_19->mbox, &VAR_28, sizeof(VAR_28),
    ((void*)0));
 if (VAR_34 < 0)
  goto bye;





 VAR_34 = FUNC_11(VAR_19);
 if (VAR_34 < 0)
  goto bye;


 VAR_34 = FUNC_9(VAR_19);
 if (VAR_34)
  FUNC_12(VAR_19->pdev_dev,
   "HMA configuration failed with error %d\n", VAR_34);

 if (FUNC_17(VAR_19->params.chip)) {
  VAR_34 = FUNC_22(VAR_19);
  if (!VAR_34)
   FUNC_13(VAR_19->pdev_dev, "Successfully enabled "
     "ppod edram feature\n");
 }





 VAR_34 = FUNC_27(VAR_19, VAR_19->mbox);
 if (VAR_34 < 0)
  goto bye;




 FUNC_13(VAR_19->pdev_dev, "Successfully configured using Firmware " "Configuration File \"%s\", version %#x, computed checksum %#x\n",

   VAR_32, VAR_23, VAR_25);
 return 0;






bye:
 if (VAR_33 && VAR_34 != -VAR_1)
  FUNC_14(VAR_19->pdev_dev, "\"%s\" configuration file error %d\n",
    VAR_32, -VAR_34);
 return VAR_34;
}
