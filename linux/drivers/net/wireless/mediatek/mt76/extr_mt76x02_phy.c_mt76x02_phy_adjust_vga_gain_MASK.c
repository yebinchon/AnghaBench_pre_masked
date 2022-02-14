
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ low_gain; int false_cca; scalar_t__ agc_gain_adjust; int agc_lowest_gain; } ;
struct mt76x02_dev {TYPE_1__ cal; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;

bool FUNC_2(struct mt76x02_dev *VAR_2)
{
 u8 VAR_3 = VAR_2->cal.low_gain > 0 ? 16 : 4;
 bool VAR_4 = 0;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_1,
         FUNC_1(VAR_2, VAR_0));
 VAR_2->cal.false_cca = VAR_5;
 if (VAR_5 > 800 && VAR_2->cal.agc_gain_adjust < VAR_3) {
  VAR_2->cal.agc_gain_adjust += 2;
  VAR_4 = 1;
 } else if ((VAR_5 < 10 && VAR_2->cal.agc_gain_adjust > 0) ||
     (VAR_2->cal.agc_gain_adjust >= VAR_3 && VAR_5 < 500)) {
  VAR_2->cal.agc_gain_adjust -= 2;
  VAR_4 = 1;
 }

 VAR_2->cal.agc_lowest_gain = VAR_2->cal.agc_gain_adjust >= VAR_3;

 return VAR_4;
}
