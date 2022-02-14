
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint32_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int flt_region_img_status_sec; int flt_region_img_status_pri; } ;
struct qla27xx_image_status {int image_status_mask; int signature; } ;
struct active_regions {scalar_t__ global; } ;
typedef int sec_image_status ;
typedef int pri_image_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*,void*,int ,int) ;
 scalar_t__ FUNC_4 (struct qla27xx_image_status*) ;
 scalar_t__ FUNC_5 (struct qla27xx_image_status*,struct qla27xx_image_status*) ;
 scalar_t__ FUNC_6 (struct qla27xx_image_status*) ;
 int FUNC_7 (struct scsi_qla_host*,char*,struct qla27xx_image_status*) ;

void
FUNC_8(struct scsi_qla_host *VAR_5,
    struct active_regions *VAR_6)
{
 struct qla_hw_data *VAR_7 = VAR_5->hw;
 struct qla27xx_image_status VAR_8, VAR_9;
 bool VAR_10 = 0, VAR_11 = 0;
 bool VAR_12 = 0, VAR_13 = 0;

 if (!VAR_7->flt_region_img_status_pri) {
  FUNC_2(VAR_4, VAR_5, 0x018a, "Primary image not addressed\n");
  goto check_sec_image;
 }

 if (FUNC_3(VAR_5, (void *)(&VAR_8),
     VAR_7->flt_region_img_status_pri, sizeof(VAR_8) >> 2) !=
     VAR_3) {
  FUNC_0(1);
  goto check_sec_image;
 }
 FUNC_7(VAR_5, "Primary image", &VAR_8);

 if (FUNC_4(&VAR_8)) {
  FUNC_2(VAR_4, VAR_5, 0x018b,
      "Primary image signature (%#x) not valid\n",
      FUNC_1(VAR_8.signature));
  goto check_sec_image;
 }

 if (FUNC_6(&VAR_8)) {
  FUNC_2(VAR_4, VAR_5, 0x018c,
      "Primary image checksum failed\n");
  goto check_sec_image;
 }

 VAR_10 = 1;

 if (VAR_8.image_status_mask & 1) {
  FUNC_2(VAR_4, VAR_5, 0x018d,
      "Primary image is active\n");
  VAR_12 = 1;
 }

check_sec_image:
 if (!VAR_7->flt_region_img_status_sec) {
  FUNC_2(VAR_4, VAR_5, 0x018a, "Secondary image not addressed\n");
  goto check_valid_image;
 }

 FUNC_3(VAR_5, (uint32_t *)(&VAR_9),
     VAR_7->flt_region_img_status_sec, sizeof(VAR_9) >> 2);
 FUNC_7(VAR_5, "Secondary image", &VAR_9);

 if (FUNC_4(&VAR_9)) {
  FUNC_2(VAR_4, VAR_5, 0x018b,
      "Secondary image signature (%#x) not valid\n",
      FUNC_1(VAR_9.signature));
  goto check_valid_image;
 }

 if (FUNC_6(&VAR_9)) {
  FUNC_2(VAR_4, VAR_5, 0x018c,
      "Secondary image checksum failed\n");
  goto check_valid_image;
 }

 VAR_11 = 1;

 if (VAR_9.image_status_mask & 1) {
  FUNC_2(VAR_4, VAR_5, 0x018d,
      "Secondary image is active\n");
  VAR_13 = 1;
 }

check_valid_image:
 if (VAR_10 && VAR_12)
  VAR_6->global = VAR_1;

 if (VAR_11 && VAR_13) {
  if (!VAR_6->global ||
      FUNC_5(
   &VAR_8, &VAR_9) < 0) {
   VAR_6->global = VAR_2;
  }
 }

 FUNC_2(VAR_4, VAR_5, 0x018f, "active image %s (%u)\n",
     VAR_6->global == VAR_0 ?
  "default (boot/fw)" :
     VAR_6->global == VAR_1 ?
  "primary" :
     VAR_6->global == VAR_2 ?
  "secondary" : "invalid",
     VAR_6->global);
}
