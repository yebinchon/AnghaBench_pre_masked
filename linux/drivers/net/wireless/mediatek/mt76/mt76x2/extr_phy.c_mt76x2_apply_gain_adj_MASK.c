
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * high_gain; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct mt76x02_dev {TYPE_2__ cal; } ;
typedef int s8 ;


 int FUNC_0 (struct mt76x02_dev*,int,int ) ;
 int FUNC_1 (struct mt76x02_dev*,int,int ) ;

void FUNC_2(struct mt76x02_dev *VAR_0)
{
 s8 *VAR_1 = VAR_0->cal.rx.high_gain;

 FUNC_1(VAR_0, 4, VAR_1[0]);
 FUNC_1(VAR_0, 5, VAR_1[1]);

 FUNC_0(VAR_0, 8, VAR_1[0]);
 FUNC_0(VAR_0, 9, VAR_1[1]);
}
