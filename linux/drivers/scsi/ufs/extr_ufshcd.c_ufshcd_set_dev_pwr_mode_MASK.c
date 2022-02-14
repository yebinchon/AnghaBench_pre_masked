
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {int wlun_dev_clr_ua; int curr_dev_pwr_mode; TYPE_1__* host; struct scsi_device* sdev_ufs_device; } ;
struct scsi_sense_hdr {int dummy; } ;
struct scsi_device {int dummy; } ;
typedef enum ufs_dev_pwr_mode { ____Placeholder_ufs_dev_pwr_mode } ufs_dev_pwr_mode ;
struct TYPE_2__ {int eh_noresume; int host_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_device*,unsigned char*,int ,int *,int ,int *,struct scsi_sense_hdr*,int ,int ,int ,int ,int *) ;
 int FUNC_5 (struct scsi_device*,int *,struct scsi_sense_hdr*) ;
 int FUNC_6 (int ,struct scsi_device*,char*,int,int) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (struct ufs_hba*,struct scsi_device*) ;

__attribute__((used)) static int FUNC_10(struct ufs_hba *VAR_7,
         enum ufs_dev_pwr_mode VAR_8)
{
 unsigned char VAR_9[6] = { VAR_5 };
 struct scsi_sense_hdr VAR_10;
 struct scsi_device *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 FUNC_7(VAR_7->host->host_lock, VAR_12);
 VAR_11 = VAR_7->sdev_ufs_device;
 if (VAR_11) {
  VAR_13 = FUNC_1(VAR_11);
  if (!VAR_13 && !FUNC_2(VAR_11)) {
   VAR_13 = -VAR_2;
   FUNC_3(VAR_11);
  }
 } else {
  VAR_13 = -VAR_2;
 }
 FUNC_8(VAR_7->host->host_lock, VAR_12);

 if (VAR_13)
  return VAR_13;







 VAR_7->host->eh_noresume = 1;
 if (VAR_7->wlun_dev_clr_ua) {
  VAR_13 = FUNC_9(VAR_7, VAR_11);
  if (VAR_13)
   goto out;

  VAR_7->wlun_dev_clr_ua = 0;
 }

 VAR_9[4] = VAR_8 << 4;






 VAR_13 = FUNC_4(VAR_11, VAR_9, VAR_0, ((void*)0), 0, ((void*)0), &VAR_10,
   VAR_6, 0, 0, VAR_4, ((void*)0));
 if (VAR_13) {
  FUNC_6(VAR_3, VAR_11,
       "START_STOP failed for power mode: %d, result %x\n",
       VAR_8, VAR_13);
  if (FUNC_0(VAR_13) == VAR_1)
   FUNC_5(VAR_11, ((void*)0), &VAR_10);
 }

 if (!VAR_13)
  VAR_7->curr_dev_pwr_mode = VAR_8;
out:
 FUNC_3(VAR_11);
 VAR_7->host->eh_noresume = 0;
 return VAR_13;
}
