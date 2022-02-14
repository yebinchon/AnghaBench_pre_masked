
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_firmware_pieces {struct fw_img_parsing* img; } ;
struct fw_sec_parsing {int data; int offset; } ;
struct fw_sec {int size; int data; int offset; } ;
struct fw_img_parsing {int sec_counter; struct fw_sec* sec; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct fw_sec* FUNC_1 (struct fw_sec*,size_t,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_firmware_pieces *VAR_3,
          const void *VAR_4, enum iwl_ucode_type VAR_5,
          int VAR_6)
{
 struct fw_img_parsing *VAR_7;
 struct fw_sec *VAR_8;
 struct fw_sec_parsing *VAR_9;
 size_t VAR_10;

 if (FUNC_0(!VAR_3 || !VAR_4 || VAR_5 >= VAR_2))
  return -1;

 VAR_9 = (struct fw_sec_parsing *)VAR_4;

 VAR_7 = &VAR_3->img[VAR_5];

 VAR_10 = sizeof(*VAR_7->sec) * (VAR_7->sec_counter + 1);
 VAR_8 = FUNC_1(VAR_7->sec, VAR_10, VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_7->sec = VAR_8;

 VAR_8 = &VAR_7->sec[VAR_7->sec_counter];

 VAR_8->offset = FUNC_2(VAR_9->offset);
 VAR_8->data = VAR_9->data;
 VAR_8->size = VAR_6 - sizeof(VAR_9->offset);

 ++VAR_7->sec_counter;

 return 0;
}
