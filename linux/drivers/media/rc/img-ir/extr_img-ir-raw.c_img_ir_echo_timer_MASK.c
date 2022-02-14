
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {scalar_t__ rdev; } ;
struct img_ir_priv {int lock; TYPE_1__ raw; } ;
struct TYPE_4__ {int timer; } ;


 struct img_ir_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct img_ir_priv*,int ) ;
 struct img_ir_priv* VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct img_ir_priv *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1.timer);

 FUNC_2(&VAR_3->lock);


 if (VAR_3->raw.rdev)




  FUNC_1(VAR_3, 0);

 FUNC_3(&VAR_3->lock);
}
