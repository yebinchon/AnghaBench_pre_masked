
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct rc_dev {int lock; void* allowed_wakeup_protocols; void* enabled_protocols; } ;
struct TYPE_2__ {struct rc_dev* rdev; } ;
struct img_ir_priv {TYPE_1__ hw; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct img_ir_priv *VAR_0, u64 VAR_1)
{
 struct rc_dev *VAR_2 = VAR_0->hw.rdev;

 FUNC_0(&VAR_2->lock);
 VAR_2->enabled_protocols = VAR_1;
 VAR_2->allowed_wakeup_protocols = VAR_1;
 FUNC_1(&VAR_2->lock);
}
