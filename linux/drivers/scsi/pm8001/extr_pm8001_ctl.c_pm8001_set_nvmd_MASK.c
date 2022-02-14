
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pm8001_ioctl_payload {int length; int minor_function; scalar_t__ id; int func_specific; } ;
struct pm8001_hba_info {void* fw_status; int * nvmd_completion; TYPE_1__* fw_image; } ;
struct TYPE_4__ {int (* set_nvmd_req ) (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;} ;
struct TYPE_3__ {int size; scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct pm8001_hba_info *VAR_7)
{
 struct pm8001_ioctl_payload *VAR_8;
 FUNC_0(VAR_6);
 u8 *VAR_9;
 u32 VAR_10;
 u32 VAR_11 = 1024 * 5 + sizeof(*VAR_8) - 1;

 if (VAR_7->fw_image->size > 4096) {
  VAR_7->fw_status = VAR_2;
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_11, VAR_4);
 if (!VAR_9) {
  VAR_7->fw_status = VAR_3;
  return -VAR_1;
 }
 VAR_8 = (struct pm8001_ioctl_payload *)VAR_9;
 FUNC_3((u8 *)&VAR_8->func_specific, (u8 *)VAR_7->fw_image->data,
    VAR_7->fw_image->size);
 VAR_8->length = VAR_7->fw_image->size;
 VAR_8->id = 0;
 VAR_8->minor_function = 0x1;
 VAR_7->nvmd_completion = &VAR_6;
 VAR_10 = VAR_5->set_nvmd_req(VAR_7, VAR_8);
 if (VAR_10) {
  VAR_7->fw_status = VAR_3;
  goto out;
 }
 FUNC_5(&VAR_6);
out:
 FUNC_1(VAR_9);
 return VAR_10;
}
