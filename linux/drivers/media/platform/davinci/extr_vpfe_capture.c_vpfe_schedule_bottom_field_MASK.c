
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_device {scalar_t__ field_off; int cur_frm; } ;
struct TYPE_3__ {int (* setfbaddr ) (unsigned long) ;} ;
struct TYPE_4__ {TYPE_1__ hw_ops; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vpfe_device *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_1(VAR_1->cur_frm);
 VAR_2 += VAR_1->field_off;
 VAR_0->hw_ops.setfbaddr(VAR_2);
}
