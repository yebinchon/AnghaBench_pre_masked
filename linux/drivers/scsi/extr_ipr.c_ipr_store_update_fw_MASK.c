
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct ipr_ucode_image_header {int header_length; } ;
struct ipr_sglist {int dummy; } ;
struct ipr_ioa_cfg {TYPE_1__* pdev; } ;
struct firmware {int size; scalar_t__ data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
typedef int fname ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (struct device*) ;
 int FUNC_3 (int *,char*,...) ;
 struct ipr_sglist* FUNC_4 (int) ;
 int FUNC_5 (struct ipr_sglist*,char*,int) ;
 int FUNC_6 (struct ipr_sglist*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct ipr_ioa_cfg*,struct ipr_sglist*) ;
 int FUNC_9 (struct firmware const*) ;
 scalar_t__ FUNC_10 (struct firmware const**,char*,int *) ;
 int FUNC_11 (char*,int,char*,char const*) ;
 char* FUNC_12 (char*,char) ;

__attribute__((used)) static ssize_t FUNC_13(struct device *VAR_4,
       struct device_attribute *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_2(VAR_4);
 struct ipr_ioa_cfg *VAR_9 = (struct ipr_ioa_cfg *)VAR_8->hostdata;
 struct ipr_ucode_image_header *VAR_10;
 const struct firmware *VAR_11;
 struct ipr_sglist *VAR_12;
 char VAR_13[100];
 char *VAR_14;
 char *VAR_15;
 int VAR_16, VAR_17;

 if (!FUNC_1(VAR_0))
  return -VAR_1;

 FUNC_11(VAR_13, sizeof(VAR_13), "%s", VAR_6);

 VAR_15 = FUNC_12(VAR_13, '\n');
 if (VAR_15)
  *VAR_15 = '\0';

 if (FUNC_10(&VAR_11, VAR_13, &VAR_9->pdev->dev)) {
  FUNC_3(&VAR_9->pdev->dev, "Firmware file %s not found\n", VAR_13);
  return -VAR_2;
 }

 VAR_10 = (struct ipr_ucode_image_header *)VAR_11->data;

 VAR_14 = (u8 *)VAR_10 + FUNC_0(VAR_10->header_length);
 VAR_17 = VAR_11->size - FUNC_0(VAR_10->header_length);
 VAR_12 = FUNC_4(VAR_17);

 if (!VAR_12) {
  FUNC_3(&VAR_9->pdev->dev, "Microcode buffer allocation failed\n");
  FUNC_9(VAR_11);
  return -VAR_3;
 }

 VAR_16 = FUNC_5(VAR_12, VAR_14, VAR_17);

 if (VAR_16) {
  FUNC_3(&VAR_9->pdev->dev,
   "Microcode buffer copy to DMA buffer failed\n");
  goto out;
 }

 FUNC_7("Updating microcode, please be patient.  This may take up to 30 minutes.\n");

 VAR_16 = FUNC_8(VAR_9, VAR_12);

 if (!VAR_16)
  VAR_16 = VAR_7;
out:
 FUNC_6(VAR_12);
 FUNC_9(VAR_11);
 return VAR_16;
}
