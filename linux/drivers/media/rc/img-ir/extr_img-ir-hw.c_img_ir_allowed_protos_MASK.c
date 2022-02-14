
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct img_ir_priv {int dummy; } ;
struct img_ir_decoder {int type; } ;


 scalar_t__ FUNC_0 (struct img_ir_priv*,struct img_ir_decoder const*) ;
 struct img_ir_decoder** VAR_0 ;

__attribute__((used)) static u64 FUNC_1(struct img_ir_priv *VAR_1)
{
 u64 VAR_2 = 0;
 struct img_ir_decoder **VAR_3;

 for (VAR_3 = VAR_0; *VAR_3; ++VAR_3) {
  const struct img_ir_decoder *VAR_4 = *VAR_3;
  if (FUNC_0(VAR_1, VAR_4))
   VAR_2 |= VAR_4->type;
 }
 return VAR_2;
}
