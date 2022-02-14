
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_ir_priv_raw {int timer; int rdev; } ;
struct img_ir_priv {struct img_ir_priv_raw raw; } ;


 int VAR_0 ;
 int FUNC_0 (struct img_ir_priv*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct img_ir_priv *VAR_2, u32 VAR_3)
{
 struct img_ir_priv_raw *VAR_4 = &VAR_2->raw;


 if (!VAR_4->rdev)
  return;

 FUNC_0(VAR_2, VAR_3);


 FUNC_1(&VAR_4->timer, VAR_1 + FUNC_2(VAR_0));
}
