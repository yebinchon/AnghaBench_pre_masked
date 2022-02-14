
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rdev; } ;
struct img_ir_priv {int lock; TYPE_1__ raw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct img_ir_priv*,int ) ;
 int FUNC_1 (struct img_ir_priv*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct img_ir_priv *VAR_3)
{
 u32 VAR_4;

 if (!VAR_3->raw.rdev)
  return;


 FUNC_2(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 VAR_4 |= VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_1);
 FUNC_1(VAR_3, VAR_2, VAR_4);
 FUNC_3(&VAR_3->lock);
}
