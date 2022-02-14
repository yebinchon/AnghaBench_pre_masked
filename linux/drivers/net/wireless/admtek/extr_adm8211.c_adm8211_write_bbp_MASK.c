
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_hw {int wiphy; struct adm8211_priv* priv; } ;
struct adm8211_priv {int bbp_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;



 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_7, u8 VAR_8, u8 VAR_9)
{
 struct adm8211_priv *VAR_10 = VAR_7->priv;
 unsigned int VAR_11;
 u32 VAR_12;

 VAR_11 = 10;
 while (VAR_11 > 0) {
  VAR_12 = FUNC_0(VAR_5);
  if (!(VAR_12 & (VAR_4 | VAR_2)))
   break;
  VAR_11--;
  FUNC_2(2);
 }

 if (VAR_11 == 0) {
  FUNC_3(VAR_7->wiphy,
       "adm8211_write_bbp(%d,%d) failed prewrite (reg=0x%08x)\n",
       VAR_8, VAR_9, VAR_12);
  return -VAR_6;
 }

 switch (VAR_10->bbp_type) {
 case 129:
  VAR_12 = VAR_1;
  break;
 case 128:
  VAR_12 = (0x20 << 24) | VAR_3 | VAR_0 |
        (0x01 << 18);
  break;
 case 130:
  VAR_12 = (0x20 << 24) | VAR_3 | VAR_0 |
        (0x05 << 18);
  break;
 }
 VAR_12 |= VAR_4 | (VAR_8 << 8) | VAR_9;

 FUNC_1(VAR_5, VAR_12);

 VAR_11 = 10;
 while (VAR_11 > 0) {
  VAR_12 = FUNC_0(VAR_5);
  if (!(VAR_12 & VAR_4))
   break;
  VAR_11--;
  FUNC_2(2);
 }

 if (VAR_11 == 0) {
  FUNC_1(VAR_5, FUNC_0(VAR_5) &
      ~VAR_4);
  FUNC_3(VAR_7->wiphy,
       "adm8211_write_bbp(%d,%d) failed postwrite (reg=0x%08x)\n",
       VAR_8, VAR_9, VAR_12);
  return -VAR_6;
 }

 return 0;
}
