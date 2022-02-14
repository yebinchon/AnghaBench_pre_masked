
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int res_q; } ;
struct TYPE_5__ {TYPE_1__ mcu; } ;
struct TYPE_6__ {TYPE_2__ mmio; } ;
struct mt76x02_dev {TYPE_3__ mt76; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct mt76x02_dev *VAR_1)
{
 struct sk_buff *VAR_2;

 FUNC_1(VAR_1, VAR_0, 1);
 FUNC_3(20000, 30000);

 while ((VAR_2 = FUNC_2(&VAR_1->mt76.mmio.mcu.res_q)) != ((void*)0))
  FUNC_0(VAR_2);

 return 0;
}
