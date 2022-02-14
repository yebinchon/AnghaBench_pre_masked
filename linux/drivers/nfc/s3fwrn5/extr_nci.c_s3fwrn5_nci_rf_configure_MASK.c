
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct s3fwrn5_info {TYPE_2__* ndev; } ;
struct nci_prop_stop_rfreg_cmd {int checksum; } ;
struct nci_prop_set_rfreg_cmd {scalar_t__ index; int data; } ;
struct nci_prop_fw_cfg_cmd {int clk_type; int clk_speed; int clk_req; } ;
struct firmware {int size; scalar_t__ data; } ;
typedef int stop_rfreg ;
typedef int fw_cfg ;
typedef int __u8 ;
struct TYPE_4__ {TYPE_1__* nfc_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,int ,int,int *) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,char const*,int *) ;

int FUNC_6(struct s3fwrn5_info *VAR_5, const char *VAR_6)
{
 const struct firmware *VAR_7;
 struct nci_prop_fw_cfg_cmd VAR_8;
 struct nci_prop_set_rfreg_cmd VAR_9;
 struct nci_prop_stop_rfreg_cmd VAR_10;
 u32 VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 VAR_14 = FUNC_5(&VAR_7, VAR_6, &VAR_5->ndev->nfc_dev->dev);
 if (VAR_14 < 0)
  return VAR_14;



 VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_7->size; VAR_12 += 4)
  VAR_11 += *((u32 *)(VAR_7->data+VAR_12));



 VAR_8.clk_type = 0x01;
 VAR_8.clk_speed = 0xff;
 VAR_8.clk_req = 0xff;
 VAR_14 = FUNC_3(VAR_5->ndev, VAR_0,
  sizeof(VAR_8), (__u8 *)&VAR_8);
 if (VAR_14 < 0)
  goto out;



 FUNC_1(&VAR_5->ndev->nfc_dev->dev,
  "rfreg configuration update: %s\n", VAR_6);

 VAR_14 = FUNC_3(VAR_5->ndev, VAR_2, 0, ((void*)0));
 if (VAR_14 < 0) {
  FUNC_0(&VAR_5->ndev->nfc_dev->dev,
   "Unable to start rfreg update\n");
  goto out;
 }



 VAR_9.index = 0;
 for (VAR_12 = 0; VAR_12 < VAR_7->size; VAR_12 += VAR_4) {
  VAR_13 = (VAR_7->size - VAR_12 < VAR_4) ?
   (VAR_7->size - VAR_12) : VAR_4;
  FUNC_2(VAR_9.data, VAR_7->data+VAR_12, VAR_13);
  VAR_14 = FUNC_3(VAR_5->ndev, VAR_1,
   VAR_13+1, (__u8 *)&VAR_9);
  if (VAR_14 < 0) {
   FUNC_0(&VAR_5->ndev->nfc_dev->dev,
    "rfreg update error (code=%d)\n", VAR_14);
   goto out;
  }
  VAR_9.index++;
 }



 VAR_10.checksum = VAR_11 & 0xffff;
 VAR_14 = FUNC_3(VAR_5->ndev, VAR_3,
  sizeof(VAR_10), (__u8 *)&VAR_10);
 if (VAR_14 < 0) {
  FUNC_0(&VAR_5->ndev->nfc_dev->dev,
   "Unable to stop rfreg update\n");
  goto out;
 }

 FUNC_1(&VAR_5->ndev->nfc_dev->dev,
  "rfreg configuration update: success\n");
out:
 FUNC_4(VAR_7);
 return VAR_14;
}
