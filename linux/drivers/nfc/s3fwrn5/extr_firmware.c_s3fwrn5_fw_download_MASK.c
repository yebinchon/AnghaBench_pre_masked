
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct s3fwrn5_fw_image {int image_sectors; scalar_t__ image; } ;
struct s3fwrn5_fw_info {int sector_size; TYPE_2__* ndev; scalar_t__ base_addr; int sig_size; int sig; int fw_name; struct s3fwrn5_fw_image fw; } ;
struct crypto_shash {int dummy; } ;
struct TYPE_9__ {struct crypto_shash* tfm; } ;
struct TYPE_8__ {TYPE_1__* nfc_dev; } ;
struct TYPE_7__ {int dev; } ;


 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,struct crypto_shash*) ;
 struct crypto_shash* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,int,int *) ;
 TYPE_3__* VAR_1 ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (struct s3fwrn5_fw_info*) ;
 int FUNC_9 (struct s3fwrn5_fw_info*,int *,int,int ,int ) ;
 int FUNC_10 (struct s3fwrn5_fw_info*,scalar_t__,scalar_t__) ;
 int FUNC_11 (TYPE_3__*) ;

int FUNC_12(struct s3fwrn5_fw_info *VAR_2)
{
 struct s3fwrn5_fw_image *VAR_3 = &VAR_2->fw;
 u8 VAR_4[VAR_0];
 struct crypto_shash *VAR_5;
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = VAR_2->sector_size * VAR_3->image_sectors;



 VAR_5 = FUNC_3("sha1", 0, 0);
 if (FUNC_0(VAR_5)) {
  VAR_8 = FUNC_1(VAR_5);
  FUNC_6(&VAR_2->ndev->nfc_dev->dev,
   "Cannot allocate shash (code=%d)\n", VAR_8);
  goto out;
 }

 {
  FUNC_2(VAR_1, VAR_5);

  VAR_1->tfm = VAR_5;

  VAR_8 = FUNC_5(VAR_1, VAR_3->image, VAR_6,
       VAR_4);
  FUNC_11(VAR_1);
 }

 FUNC_4(VAR_5);
 if (VAR_8) {
  FUNC_6(&VAR_2->ndev->nfc_dev->dev,
   "Cannot compute hash (code=%d)\n", VAR_8);
  goto out;
 }



 FUNC_7(&VAR_2->ndev->nfc_dev->dev,
  "Firmware update: %s\n", VAR_2->fw_name);

 VAR_8 = FUNC_9(VAR_2, VAR_4,
  VAR_0, VAR_2->sig, VAR_2->sig_size);
 if (VAR_8 < 0) {
  FUNC_6(&VAR_2->ndev->nfc_dev->dev,
   "Unable to enter update mode\n");
  goto out;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += VAR_2->sector_size) {
  VAR_8 = FUNC_10(VAR_2,
   VAR_2->base_addr + VAR_7, VAR_3->image + VAR_7);
  if (VAR_8 < 0) {
   FUNC_6(&VAR_2->ndev->nfc_dev->dev,
    "Firmware update error (code=%d)\n", VAR_8);
   goto out;
  }
 }

 VAR_8 = FUNC_8(VAR_2);
 if (VAR_8 < 0) {
  FUNC_6(&VAR_2->ndev->nfc_dev->dev,
   "Unable to complete update mode\n");
  goto out;
 }

 FUNC_7(&VAR_2->ndev->nfc_dev->dev,
  "Firmware update: success\n");

out:
 return VAR_8;
}
