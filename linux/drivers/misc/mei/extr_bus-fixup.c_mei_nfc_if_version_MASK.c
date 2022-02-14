
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mei_nfc_reply {int data; } ;
struct mei_nfc_if_version {int radio_type; int vendor_id; int fw_ivn; } ;
struct mei_nfc_cmd {int data_size; int sub_command; int command; } ;
struct mei_device {int dev; int device_lock; } ;
struct mei_cl {struct mei_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mei_cl*,int *,size_t,int ,int ) ;
 int FUNC_2 (struct mei_cl*,int *,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 (struct mei_nfc_reply*) ;
 struct mei_nfc_reply* FUNC_6 (size_t,int ) ;
 int FUNC_7 (struct mei_nfc_if_version*,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct mei_cl *VAR_6,
         struct mei_nfc_if_version *VAR_7)
{
 struct mei_device *VAR_8;
 struct mei_nfc_cmd VAR_9 = {
  .command = VAR_4,
  .data_size = 1,
  .sub_command = VAR_5,
 };
 struct mei_nfc_reply *VAR_10 = ((void*)0);
 size_t VAR_11;
 int VAR_12, VAR_13;

 VAR_8 = VAR_6->dev;

 FUNC_0(FUNC_8(&VAR_8->device_lock));

 VAR_13 = FUNC_2(VAR_6, (u8 *)&VAR_9, sizeof(struct mei_nfc_cmd),
       VAR_3);
 if (VAR_13 < 0) {
  FUNC_3(VAR_8->dev, "Could not send IF version cmd\n");
  return VAR_13;
 }


 VAR_11 = sizeof(struct mei_nfc_reply) +
  sizeof(struct mei_nfc_if_version);

 VAR_10 = FUNC_6(VAR_11, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_13 = 0;
 VAR_12 = FUNC_1(VAR_6, (u8 *)VAR_10, VAR_11, 0, 0);
 if (VAR_12 < 0 || (size_t)VAR_12 < VAR_11) {
  FUNC_3(VAR_8->dev, "Could not read IF version\n");
  VAR_13 = -VAR_0;
  goto err;
 }

 FUNC_7(VAR_7, VAR_10->data, sizeof(struct mei_nfc_if_version));

 FUNC_4(VAR_8->dev, "NFC MEI VERSION: IVN 0x%x Vendor ID 0x%x Type 0x%x\n",
  VAR_7->fw_ivn, VAR_7->vendor_id, VAR_7->radio_type);

err:
 FUNC_5(VAR_10);
 return VAR_13;
}
