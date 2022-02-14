
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {int dummy; } ;
struct img_ir_priv_raw {int timer; struct rc_dev* rdev; } ;
struct img_ir_priv {int lock; struct img_ir_priv_raw raw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct img_ir_priv*,int ) ;
 int FUNC_2 (struct img_ir_priv*,int ,int ) ;
 int FUNC_3 (struct rc_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct img_ir_priv *VAR_3)
{
 struct img_ir_priv_raw *VAR_4 = &VAR_3->raw;
 struct rc_dev *VAR_5 = VAR_4->rdev;
 u32 VAR_6;

 if (!VAR_5)
  return;


 FUNC_4(&VAR_3->lock);
 VAR_4->rdev = ((void*)0);
 VAR_6 = FUNC_1(VAR_3, VAR_2);
 VAR_6 &= ~VAR_1;
 FUNC_2(VAR_3, VAR_2, VAR_6);
 FUNC_2(VAR_3, VAR_0, VAR_1);
 FUNC_5(&VAR_3->lock);

 FUNC_3(VAR_5);

 FUNC_0(&VAR_4->timer);
}
