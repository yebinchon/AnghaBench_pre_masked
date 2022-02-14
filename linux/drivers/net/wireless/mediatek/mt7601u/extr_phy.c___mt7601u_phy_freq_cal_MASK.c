
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int adjusting; int freq; } ;
struct mt7601u_dev {TYPE_1__ freq_cal; } ;
typedef scalar_t__ s8 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mt7601u_dev*,int ,int,int) ;
 int FUNC_3 (struct mt7601u_dev*) ;
 int FUNC_4 (struct mt7601u_dev*,int) ;
 int FUNC_5 (struct mt7601u_dev*,scalar_t__,scalar_t__) ;

__attribute__((used)) static unsigned long
FUNC_6(struct mt7601u_dev *VAR_3, s8 VAR_4, u8 VAR_5)
{
 u8 VAR_6, VAR_7;

 FUNC_5(VAR_3, VAR_5, VAR_4);


 if (VAR_4 == VAR_2)
  return VAR_0;

 switch (VAR_5) {
 case 131:
  VAR_6 = 19;
  VAR_7 = 5;
  break;
 case 128:
  VAR_6 = 102;
  VAR_7 = 32;
  break;
 case 130:
 case 129:
  VAR_6 = 82;
  VAR_7 = 20;
  break;
 default:
  FUNC_0(1);
  return VAR_1;
 }

 if (FUNC_1(VAR_4) >= VAR_6)
  VAR_3->freq_cal.adjusting = 1;
 else if (FUNC_1(VAR_4) <= VAR_7)
  VAR_3->freq_cal.adjusting = 0;

 if (!VAR_3->freq_cal.adjusting)
  return VAR_1;

 if (VAR_4 > VAR_7) {
  if (VAR_3->freq_cal.freq > 0)
   VAR_3->freq_cal.freq--;
  else
   VAR_3->freq_cal.adjusting = 0;
 } else if (VAR_4 < -VAR_7) {
  if (VAR_3->freq_cal.freq < 0xbf)
   VAR_3->freq_cal.freq++;
  else
   VAR_3->freq_cal.adjusting = 0;
 }

 FUNC_4(VAR_3, VAR_3->freq_cal.freq);
 FUNC_2(VAR_3, 0, 12, VAR_3->freq_cal.freq);
 FUNC_3(VAR_3);

 return VAR_3->freq_cal.adjusting ? VAR_0 :
      VAR_1;
}
