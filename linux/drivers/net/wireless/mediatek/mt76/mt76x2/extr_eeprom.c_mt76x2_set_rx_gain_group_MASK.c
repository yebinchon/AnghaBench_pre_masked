
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__* high_gain; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct mt76x02_dev {TYPE_2__ cal; } ;
typedef scalar_t__ s8 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(struct mt76x02_dev *VAR_0, u8 VAR_1)
{
 s8 *VAR_2 = VAR_0->cal.rx.high_gain;

 if (!FUNC_0(VAR_1)) {
  VAR_2[0] = 0;
  VAR_2[1] = 0;
  return;
 }

 VAR_2[0] = FUNC_1(VAR_1, 4);
 VAR_2[1] = FUNC_1(VAR_1 >> 4, 4);
}
