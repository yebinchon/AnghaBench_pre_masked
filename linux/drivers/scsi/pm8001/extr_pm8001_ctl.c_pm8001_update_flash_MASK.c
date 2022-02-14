
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pm8001_ioctl_payload {int length; int func_specific; scalar_t__ id; } ;
struct pm8001_hba_info {scalar_t__ fw_status; int * nvmd_completion; TYPE_1__* fw_image; } ;
struct pm8001_fw_image_header {int image_length; } ;
struct fw_control_info {int len; int size; scalar_t__ retcode; int offset; scalar_t__ buffer; } ;
struct TYPE_4__ {int (* fw_flash_update_req ) (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;} ;
struct TYPE_3__ {int size; scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct pm8001_hba_info *VAR_10)
{
 struct pm8001_ioctl_payload *VAR_11;
 FUNC_0(VAR_9);
 u8 *VAR_12;
 struct fw_control_info *VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;
 struct pm8001_fw_image_header *VAR_18;
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 u32 VAR_21 = 1024 * 16 + sizeof(*VAR_11) - 1;

 if (VAR_10->fw_image->size < 28) {
  VAR_10->fw_status = VAR_2;
  return -VAR_0;
 }
 VAR_12 = FUNC_4(VAR_21, VAR_5);
 if (!VAR_12) {
  VAR_10->fw_status = VAR_3;
  return -VAR_1;
 }
 VAR_18 = (struct pm8001_fw_image_header *)VAR_10->fw_image->data;
 while (VAR_19 < VAR_10->fw_image->size) {
  VAR_15 =
   *(u32 *)((u8 *)&VAR_18->image_length + VAR_19);
  VAR_14 = FUNC_2(VAR_15);
  VAR_17 = FUNC_1(VAR_14 + VAR_6,
     VAR_7);
  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
   VAR_11 = (struct pm8001_ioctl_payload *)VAR_12;
   VAR_11->length = 1024*16;
   VAR_11->id = 0;
   VAR_13 =
         (struct fw_control_info *)&VAR_11->func_specific;
   VAR_13->len = VAR_7;
   VAR_13->size = VAR_14 + VAR_6;
   VAR_13->retcode = 0;
   VAR_13->offset = VAR_16 * VAR_7;



  if (((VAR_17-VAR_16) == 1) &&
   ((VAR_14 + VAR_6) % VAR_7)) {
   VAR_13->len =
    (VAR_14 + VAR_6) % VAR_7;
   FUNC_5((u8 *)VAR_13->buffer,
    (u8 *)VAR_10->fw_image->data + VAR_19,
    (VAR_14 + VAR_6) % VAR_7);
   VAR_19 +=
    (VAR_14 + VAR_6) % VAR_7;
  } else {
   FUNC_5((u8 *)VAR_13->buffer,
    (u8 *)VAR_10->fw_image->data + VAR_19,
    VAR_7);
   VAR_19 += VAR_7;
  }

  VAR_10->nvmd_completion = &VAR_9;
  VAR_20 = VAR_8->fw_flash_update_req(VAR_10, VAR_11);
  if (VAR_20) {
   VAR_10->fw_status = VAR_3;
   goto out;
  }
  FUNC_7(&VAR_9);
  if (VAR_13->retcode > VAR_4) {
   VAR_10->fw_status = VAR_13->retcode;
   VAR_20 = -VAR_0;
   goto out;
  }
  }
 }
out:
 FUNC_3(VAR_12);
 return VAR_20;
}
