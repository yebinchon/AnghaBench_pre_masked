
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int wait; int res_q; } ;
struct TYPE_4__ {TYPE_1__ mcu; } ;
struct mt76_dev {TYPE_2__ mmio; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mt76_dev *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_0(&VAR_0->mmio.mcu.res_q, VAR_1);
 FUNC_1(&VAR_0->mmio.mcu.wait);
}
