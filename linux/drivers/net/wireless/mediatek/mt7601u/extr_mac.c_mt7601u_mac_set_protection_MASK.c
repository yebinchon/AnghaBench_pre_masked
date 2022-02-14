
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int dummy; } ;


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
 int VAR_11 ;
 int FUNC_0 (struct mt7601u_dev*,scalar_t__,int) ;

void FUNC_1(struct mt7601u_dev *VAR_12, bool VAR_13,
    int VAR_14)
{
 int VAR_15 = VAR_14 & VAR_1;
 bool VAR_16 = !!(VAR_14 & VAR_0);
 u32 VAR_17[6];
 bool VAR_18[4] = {};
 int VAR_19;

 VAR_17[0] = VAR_5 |
    VAR_10 |
    VAR_9;
 VAR_17[1] = VAR_17[0];
 if (VAR_13)
  VAR_17[1] |= VAR_3;

 VAR_17[2] = VAR_17[4] = VAR_5 | VAR_11;
 VAR_17[3] = VAR_17[5] = VAR_5 | VAR_10;

 if (VAR_13) {
  VAR_17[2] |= VAR_6;
  VAR_17[3] |= VAR_6;
  VAR_17[4] |= VAR_6;
  VAR_17[5] |= VAR_6;
 } else {
  VAR_17[2] |= VAR_8;
  VAR_17[3] |= VAR_7;
  VAR_17[4] |= VAR_8;
  VAR_17[5] |= VAR_7;
 }

 switch (VAR_15) {
 case 130:
  break;

 case 128:
  VAR_18[0] = VAR_18[1] = VAR_18[2] = VAR_18[3] = 1;
  break;

 case 131:
  VAR_18[1] = VAR_18[3] = 1;
  break;

 case 129:
  VAR_18[0] = VAR_18[1] = VAR_18[2] = VAR_18[3] = 1;
  break;
 }

 if (VAR_16)
  VAR_18[2] = VAR_18[3] = 1;

 for (VAR_19 = 0; VAR_19 < 4; VAR_19++)
  if (VAR_18[VAR_19])
   VAR_17[VAR_19 + 2] |= VAR_4;

 for (VAR_19 = 0; VAR_19 < 6; VAR_19++)
  FUNC_0(VAR_12, VAR_2 + VAR_19 * 4, VAR_17[VAR_19]);
}
