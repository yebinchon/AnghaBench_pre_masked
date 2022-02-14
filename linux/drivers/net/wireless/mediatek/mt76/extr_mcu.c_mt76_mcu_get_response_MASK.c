
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int res_q; int wait; } ;
struct TYPE_4__ {TYPE_1__ mcu; } ;
struct mt76_dev {TYPE_2__ mmio; } ;


 unsigned long VAR_0 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int,unsigned long) ;

struct sk_buff *FUNC_4(struct mt76_dev *VAR_1,
          unsigned long VAR_2)
{
 unsigned long VAR_3;

 if (!FUNC_2(VAR_2))
  return ((void*)0);

 VAR_3 = VAR_2 - VAR_0;
 FUNC_3(VAR_1->mmio.mcu.wait,
      !FUNC_1(&VAR_1->mmio.mcu.res_q),
      VAR_3);
 return FUNC_0(&VAR_1->mmio.mcu.res_q);
}
