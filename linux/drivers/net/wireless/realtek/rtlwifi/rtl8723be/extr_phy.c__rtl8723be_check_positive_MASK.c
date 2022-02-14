
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; scalar_t__ interface; int board_type; int package_type; int type_glna; int type_gpa; int type_alna; int type_apa; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_4(struct ieee80211_hw *VAR_5,
          const u32 VAR_6,
          const u32 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_3(VAR_5);
 struct rtl_hal *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10 = ((VAR_9->version & VAR_0)
     >> VAR_1);
 u32 VAR_11 = (VAR_9->interface == VAR_4 ? FUNC_0(1) : FUNC_0(0));

 u8 VAR_12 = ((VAR_9->board_type & FUNC_0(4)) >> 4) << 0 |
    ((VAR_9->board_type & FUNC_0(3)) >> 3) << 1 |
    ((VAR_9->board_type & FUNC_0(7)) >> 7) << 2 |
    ((VAR_9->board_type & FUNC_0(6)) >> 6) << 3 |
    ((VAR_9->board_type & FUNC_0(2)) >> 2) << 4;

 u32 VAR_13 = VAR_6, VAR_14 = VAR_7;
 u32 VAR_15 = VAR_10 << 24 |
        0 << 20 |
        0x04 << 16 |
        VAR_9->package_type << 12 |
        VAR_11 << 8 |
        VAR_12;

 u32 VAR_16 = VAR_9->type_glna << 0 |
        VAR_9->type_gpa << 8 |
        VAR_9->type_alna << 16 |
        VAR_9->type_apa << 24;

 FUNC_1(VAR_8, VAR_2, VAR_3,
   "===> [8812A] CheckPositive (cond1, cond2) = (0x%X 0x%X)\n",
   VAR_13, VAR_14);
 FUNC_1(VAR_8, VAR_2, VAR_3,
   "===> [8812A] CheckPositive (driver1, driver2) = (0x%X 0x%X)\n",
   VAR_15, VAR_16);

 FUNC_1(VAR_8, VAR_2, VAR_3,
   "	(Platform, Interface) = (0x%X, 0x%X)\n", 0x04, VAR_11);
 FUNC_1(VAR_8, VAR_2, VAR_3,
   "	(Board, Package) = (0x%X, 0x%X)\n",
   VAR_9->board_type, VAR_9->package_type);




 if (((VAR_13 & 0x0000F000) != 0) && ((VAR_13 & 0x0000F000) !=
  (VAR_15 & 0x0000F000)))
  return 0;
 if (((VAR_13 & 0x0F000000) != 0) && ((VAR_13 & 0x0F000000) !=
  (VAR_15 & 0x0F000000)))
  return 0;




 VAR_13 &= 0x00FF0FFF;
 VAR_15 &= 0x00FF0FFF;

 if ((VAR_13 & VAR_15) == VAR_13) {
  u32 VAR_17 = 0;

  if ((VAR_13 & 0x0F) == 0)
   return 1;

  if ((VAR_13 & FUNC_0(0)) != 0)
   VAR_17 |= 0x000000FF;
  if ((VAR_13 & FUNC_0(1)) != 0)
   VAR_17 |= 0x0000FF00;
  if ((VAR_13 & FUNC_0(2)) != 0)
   VAR_17 |= 0x00FF0000;
  if ((VAR_13 & FUNC_0(3)) != 0)
   VAR_17 |= 0xFF000000;


  if ((VAR_14 & VAR_17) == (VAR_16 & VAR_17))
   return 1;
  else
   return 0;
 }
 return 0;
}
