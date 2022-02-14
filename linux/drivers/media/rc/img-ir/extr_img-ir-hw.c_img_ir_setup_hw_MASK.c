
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rdev; } ;
struct img_ir_priv {TYPE_1__ hw; } ;
struct img_ir_decoder {int type; } ;


 scalar_t__ FUNC_0 (struct img_ir_priv*,struct img_ir_decoder const*) ;
 struct img_ir_decoder** VAR_0 ;
 int FUNC_1 (struct img_ir_priv*,struct img_ir_decoder const*,int ) ;
 int FUNC_2 (struct img_ir_priv*,int ) ;

void FUNC_3(struct img_ir_priv *VAR_1)
{
 struct img_ir_decoder **VAR_2;

 if (!VAR_1->hw.rdev)
  return;


 for (VAR_2 = VAR_0; *VAR_2; ++VAR_2) {
  const struct img_ir_decoder *VAR_3 = *VAR_2;
  if (FUNC_0(VAR_1, VAR_3)) {
   FUNC_2(VAR_1, VAR_3->type);
   FUNC_1(VAR_1, VAR_3, 0);
   return;
  }
 }
 FUNC_1(VAR_1, ((void*)0), 0);
}
