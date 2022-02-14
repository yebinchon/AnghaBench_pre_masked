
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int low_gain; int gain_init_done; void** agc_gain_init; int agc_gain_cur; } ;
struct mt76x02_dev {TYPE_1__ cal; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,void**,int) ;
 void* FUNC_2 (struct mt76x02_dev*,int ,int ) ;

void FUNC_3(struct mt76x02_dev *VAR_2)
{
 VAR_2->cal.agc_gain_init[0] = FUNC_2(VAR_2, FUNC_0(VAR_0, 8),
         VAR_1);
 VAR_2->cal.agc_gain_init[1] = FUNC_2(VAR_2, FUNC_0(VAR_0, 9),
         VAR_1);
 FUNC_1(VAR_2->cal.agc_gain_cur, VAR_2->cal.agc_gain_init,
        sizeof(VAR_2->cal.agc_gain_cur));
 VAR_2->cal.low_gain = -1;
 VAR_2->cal.gain_init_done = 1;
}
