
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_firmware_pieces {TYPE_2__* img; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;
struct TYPE_4__ {TYPE_1__* sec; } ;
struct TYPE_3__ {int offset; } ;


 int FUNC_0 (struct iwl_firmware_pieces*,int,int) ;

__attribute__((used)) static void FUNC_1(struct iwl_firmware_pieces *VAR_0,
      enum iwl_ucode_type VAR_1,
      int VAR_2,
      u32 VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_0->img[VAR_1].sec[VAR_2].offset = VAR_3;
}
