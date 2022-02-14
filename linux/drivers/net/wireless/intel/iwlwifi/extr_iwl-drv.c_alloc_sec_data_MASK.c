
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_firmware_pieces {struct fw_img_parsing* img; } ;
struct fw_sec {int dummy; } ;
struct fw_img_parsing {int sec_counter; struct fw_sec* sec; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;


 int VAR_0 ;
 struct fw_sec* FUNC_0 (struct fw_sec*,size_t,int ) ;

__attribute__((used)) static void FUNC_1(struct iwl_firmware_pieces *VAR_1,
      enum iwl_ucode_type VAR_2,
      int VAR_3)
{
 struct fw_img_parsing *VAR_4 = &VAR_1->img[VAR_2];
 struct fw_sec *VAR_5;
 int VAR_6 = VAR_3 + 1;
 size_t VAR_7 = sizeof(*VAR_4->sec) * VAR_6;

 if (VAR_4->sec && VAR_4->sec_counter >= VAR_6)
  return;

 VAR_5 = FUNC_0(VAR_4->sec, VAR_7, VAR_0);
 if (!VAR_5)
  return;

 VAR_4->sec = VAR_5;
 VAR_4->sec_counter = VAR_6;
}
