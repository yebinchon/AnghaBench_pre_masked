
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int* rf_pa_mode; } ;
typedef int s16 ;





__attribute__((used)) static s16
FUNC_0(struct mt7601u_dev *VAR_0, int VAR_1, int VAR_2)
{
 static const s16 VAR_3[] = { 0, 8847, -5734, -5734 };
 u32 VAR_4;

 switch (VAR_1) {
 case 128:
  VAR_2 += 4;

 case 129:
  VAR_4 = VAR_0->rf_pa_mode[0];
  break;
 default:
  VAR_4 = VAR_0->rf_pa_mode[1];
  break;
 }

 return VAR_3[(VAR_4 >> (VAR_2 * 2)) & 0x3];
}
