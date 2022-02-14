
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_firmware_pieces {TYPE_1__* img; } ;
struct fw_sec {int dummy; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;
struct TYPE_2__ {struct fw_sec* sec; } ;



__attribute__((used)) static struct fw_sec *FUNC_0(struct iwl_firmware_pieces *VAR_0,
         enum iwl_ucode_type VAR_1,
         int VAR_2)
{
 return &VAR_0->img[VAR_1].sec[VAR_2];
}
