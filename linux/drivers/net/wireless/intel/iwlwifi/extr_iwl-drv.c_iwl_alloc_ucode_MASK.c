
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_firmware_pieces {TYPE_3__* img; } ;
struct TYPE_5__ {TYPE_1__* img; } ;
struct iwl_drv {TYPE_2__ fw; } ;
struct fw_desc {int dummy; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;
struct TYPE_6__ {int sec_counter; } ;
struct TYPE_4__ {int num_sec; struct fw_desc* sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_firmware_pieces*,int,int) ;
 scalar_t__ FUNC_1 (struct iwl_drv*,struct fw_desc*,int ) ;
 struct fw_desc* FUNC_2 (int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_drv *VAR_2,
      struct iwl_firmware_pieces *VAR_3,
      enum iwl_ucode_type VAR_4)
{
 int VAR_5;
 struct fw_desc *VAR_6;

 VAR_6 = FUNC_2(VAR_3->img[VAR_4].sec_counter, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_2->fw.img[VAR_4].sec = VAR_6;
 VAR_2->fw.img[VAR_4].num_sec = VAR_3->img[VAR_4].sec_counter;

 for (VAR_5 = 0; VAR_5 < VAR_3->img[VAR_4].sec_counter; VAR_5++)
  if (FUNC_1(VAR_2, &VAR_6[VAR_5], FUNC_0(VAR_3, VAR_4, VAR_5)))
   return -VAR_0;

 return 0;
}
