
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int rt; } ;
struct rt2x00_dev {TYPE_1__ chip; } ;
struct ieee80211_channel {int band; int max_power; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int,int,int,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*,int) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int,int ) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*,scalar_t__) ;
 int FUNC_8 (struct rt2x00_dev*,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__*,int ,int ) ;
 int FUNC_11 (int *,int ,int) ;

__attribute__((used)) static void FUNC_12(struct rt2x00_dev *VAR_17,
      struct ieee80211_channel *VAR_18,
      int VAR_19)
{
 u8 VAR_20, VAR_21;
 u16 VAR_22;
 u32 VAR_23, VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;
 enum nl80211_band VAR_29 = VAR_18->band;





 VAR_27 = FUNC_5(VAR_17, VAR_29);
 switch (VAR_17->chip.rt) {
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_27 += FUNC_4(VAR_17);
  break;
 default:

  break;
 }






 VAR_27 += FUNC_6(VAR_17, VAR_19,
           VAR_18->max_power);
 if (VAR_27 <= -12) {
  VAR_28 = 2;
  VAR_27 += 12;
 } else if (VAR_27 <= -6) {
  VAR_28 = 1;
  VAR_27 += 6;
 } else {
  VAR_28 = 0;
 }
 VAR_21 = FUNC_0(VAR_17, 1);
 FUNC_11(&VAR_21, VAR_0, VAR_28);
 FUNC_1(VAR_17, 1, VAR_21);

 VAR_24 = VAR_7;

 for (VAR_25 = 0; VAR_25 < VAR_6; VAR_25 += 2) {

  if (VAR_24 > VAR_8)
   break;

  VAR_23 = FUNC_7(VAR_17, VAR_24);


  VAR_22 = FUNC_3(VAR_17,
             VAR_1,
             VAR_25);

  VAR_26 = VAR_25 ? 0 : 1;





  VAR_20 = FUNC_9(VAR_22,
          VAR_2);
  VAR_20 = FUNC_2(VAR_17, VAR_26, VAR_29,
          VAR_19, VAR_20, VAR_27);
  FUNC_10(&VAR_23, VAR_9, VAR_20);






  VAR_20 = FUNC_9(VAR_22,
          VAR_3);
  VAR_20 = FUNC_2(VAR_17, VAR_26, VAR_29,
          VAR_19, VAR_20, VAR_27);
  FUNC_10(&VAR_23, VAR_10, VAR_20);






  VAR_20 = FUNC_9(VAR_22,
          VAR_4);
  VAR_20 = FUNC_2(VAR_17, VAR_26, VAR_29,
          VAR_19, VAR_20, VAR_27);
  FUNC_10(&VAR_23, VAR_11, VAR_20);






  VAR_20 = FUNC_9(VAR_22,
          VAR_5);
  VAR_20 = FUNC_2(VAR_17, VAR_26, VAR_29,
          VAR_19, VAR_20, VAR_27);
  FUNC_10(&VAR_23, VAR_12, VAR_20);


  VAR_22 = FUNC_3(VAR_17,
             VAR_1,
             VAR_25 + 1);

  VAR_26 = 0;





  VAR_20 = FUNC_9(VAR_22,
          VAR_2);
  VAR_20 = FUNC_2(VAR_17, VAR_26, VAR_29,
          VAR_19, VAR_20, VAR_27);
  FUNC_10(&VAR_23, VAR_13, VAR_20);






  VAR_20 = FUNC_9(VAR_22,
          VAR_3);
  VAR_20 = FUNC_2(VAR_17, VAR_26, VAR_29,
          VAR_19, VAR_20, VAR_27);
  FUNC_10(&VAR_23, VAR_14, VAR_20);






  VAR_20 = FUNC_9(VAR_22,
          VAR_4);
  VAR_20 = FUNC_2(VAR_17, VAR_26, VAR_29,
          VAR_19, VAR_20, VAR_27);
  FUNC_10(&VAR_23, VAR_15, VAR_20);






  VAR_20 = FUNC_9(VAR_22,
          VAR_5);
  VAR_20 = FUNC_2(VAR_17, VAR_26, VAR_29,
          VAR_19, VAR_20, VAR_27);
  FUNC_10(&VAR_23, VAR_16, VAR_20);

  FUNC_8(VAR_17, VAR_24, VAR_23);


  VAR_24 += 4;
 }
}
