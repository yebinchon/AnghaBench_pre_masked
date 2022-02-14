
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mrf24j40 {int regmap_long; } ;
struct ieee802154_hw {struct mrf24j40* priv; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct ieee802154_hw *VAR_18, s32 VAR_19)
{
 struct mrf24j40 *VAR_20 = VAR_18->priv;
 s32 VAR_21;
 u8 VAR_22;

 if (0 >= VAR_19 && VAR_19 > -1000) {
  VAR_22 = VAR_2 << VAR_7;
  VAR_21 = VAR_19;
 } else if (-1000 >= VAR_19 && VAR_19 > -2000) {
  VAR_22 = VAR_3 << VAR_7;
  VAR_21 = VAR_19 + 1000;
 } else if (-2000 >= VAR_19 && VAR_19 > -3000) {
  VAR_22 = VAR_4 << VAR_7;
  VAR_21 = VAR_19 + 2000;
 } else if (-3000 >= VAR_19 && VAR_19 > -4000) {
  VAR_22 = VAR_5 << VAR_7;
  VAR_21 = VAR_19 + 3000;
 } else {
  return -VAR_0;
 }

 switch (VAR_21) {
 case 0:
  VAR_22 |= (VAR_8 << VAR_17);
  break;
 case -50:
  VAR_22 |= (VAR_9 << VAR_17);
  break;
 case -120:
  VAR_22 |= (VAR_10 << VAR_17);
  break;
 case -190:
  VAR_22 |= (VAR_11 << VAR_17);
  break;
 case -280:
  VAR_22 |= (VAR_12 << VAR_17);
  break;
 case -370:
  VAR_22 |= (VAR_13 << VAR_17);
  break;
 case -490:
  VAR_22 |= (VAR_14 << VAR_17);
  break;
 case -630:
  VAR_22 |= (VAR_15 << VAR_17);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_20->regmap_long, VAR_1,
      VAR_6 | VAR_16, VAR_22);
}
