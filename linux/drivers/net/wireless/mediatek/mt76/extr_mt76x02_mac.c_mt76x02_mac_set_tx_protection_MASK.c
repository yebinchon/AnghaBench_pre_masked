
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mt76x02_dev {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_2 (struct mt76x02_dev*,scalar_t__) ;
 int FUNC_3 (struct mt76x02_dev*,scalar_t__,int) ;

void FUNC_4(struct mt76x02_dev *VAR_14, bool VAR_15,
       int VAR_16)
{
 int VAR_17 = VAR_16 & VAR_1;
 bool VAR_18 = !!(VAR_16 & VAR_0);
 u32 VAR_19[6];
 u32 VAR_20[3];
 int VAR_21;
 u16 VAR_22;

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_19); VAR_21++) {
  VAR_19[VAR_21] = FUNC_2(VAR_14, VAR_2 + VAR_21 * 4);
  VAR_19[VAR_21] &= ~VAR_3;
  if (VAR_21 >= 2)
   VAR_19[VAR_21] &= ~VAR_4;
 }

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_20); VAR_21++) {
  VAR_20[VAR_21] = FUNC_2(VAR_14, VAR_11 + VAR_21 * 4);
  VAR_20[VAR_21] &= ~(VAR_3 | VAR_4);
 }

 VAR_22 = FUNC_1(VAR_14, VAR_12, VAR_13);

 if (VAR_22 != 0xffff)
  VAR_19[0] |= VAR_6;

 if (VAR_15) {
  VAR_19[1] |= VAR_5;

  VAR_19[2] |= VAR_7;
  VAR_19[3] |= VAR_7;
  VAR_19[4] |= VAR_7;
  VAR_19[5] |= VAR_7;

  VAR_20[0] |= VAR_7;
  VAR_20[1] |= VAR_7;
  VAR_20[2] |= VAR_7;
 } else {
  if (VAR_22 != 0xffff)
   VAR_19[1] |= VAR_6;

  VAR_19[2] |= VAR_9;
  VAR_19[3] |= VAR_8;
  VAR_19[4] |= VAR_9;
  VAR_19[5] |= VAR_8;

  VAR_20[0] |= VAR_9;
  VAR_20[1] |= VAR_8;
  VAR_20[2] |= VAR_10;
 }

 switch (VAR_17) {
 case 128:
 case 129:
  VAR_19[2] |= VAR_6;
  VAR_19[3] |= VAR_6;
  VAR_19[4] |= VAR_6;
  VAR_19[5] |= VAR_6;
  VAR_20[0] |= VAR_6;
  VAR_20[1] |= VAR_6;
  VAR_20[2] |= VAR_6;
  break;
 case 130:
  VAR_19[3] |= VAR_6;
  VAR_19[5] |= VAR_6;
  VAR_20[1] |= VAR_6;
  VAR_20[2] |= VAR_6;
  break;
 }

 if (VAR_18) {
  VAR_19[4] |= VAR_6;
  VAR_19[5] |= VAR_6;
 }

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_19); VAR_21++)
  FUNC_3(VAR_14, VAR_2 + VAR_21 * 4, VAR_19[VAR_21]);

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_20); VAR_21++)
  FUNC_3(VAR_14, VAR_11 + VAR_21 * 4, VAR_20[VAR_21]);
}
