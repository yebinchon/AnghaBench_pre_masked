
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* ct_quirks; } ;
struct img_ir_priv {TYPE_2__ hw; } ;
struct TYPE_3__ {unsigned int code_type; } ;
struct img_ir_decoder {TYPE_1__ control; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct img_ir_priv *VAR_1,
          const struct img_ir_decoder *VAR_2)
{
 unsigned int VAR_3;


 VAR_3 = VAR_2->control.code_type;
 if (VAR_1->hw.ct_quirks[VAR_3] & VAR_0)
  return 0;

 return 1;
}
