
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_coex_rfe {int ant_switch_polarity; int rfe_module_type; scalar_t__ ant_switch_diversity; } ;
struct rtw_coex_dm {int cur_switch_status; } ;
struct rtw_coex {struct rtw_coex_rfe rfe; struct rtw_coex_dm dm; } ;
struct rtw_dev {struct rtw_coex coex; } ;


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
 int FUNC_0 (struct rtw_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_11,
      u8 VAR_12, u8 VAR_13)
{
 struct rtw_coex *VAR_14 = &VAR_11->coex;
 struct rtw_coex_dm *VAR_15 = &VAR_14->dm;
 struct rtw_coex_rfe *VAR_16 = &VAR_14->rfe;
 bool VAR_17;
 u8 VAR_18 = 0;

 if (((VAR_12 << 8) + VAR_13) == VAR_15->cur_switch_status)
  return;

 VAR_15->cur_switch_status = (VAR_12 << 8) + VAR_13;

 if (VAR_16->ant_switch_diversity &&
     VAR_12 == 132)
  VAR_12 = 133;

 VAR_17 = (VAR_16->ant_switch_polarity == 1);

 switch (VAR_12) {
 default:
 case 132:

  FUNC_0(VAR_11, VAR_7 + 2, VAR_0 >> 16, 0x0);

  FUNC_0(VAR_11, VAR_7 + 3, VAR_1 >> 24, 0x1);

  FUNC_0(VAR_11, VAR_9, VAR_3, 0x77);

  if (VAR_13 == VAR_6) {
   if (VAR_16->rfe_module_type != 0x4 &&
       VAR_16->rfe_module_type != 0x2)
    VAR_18 = 0x3;
   else
    VAR_18 = (!VAR_17 ? 0x2 : 0x1);
  } else if (VAR_13 == VAR_5) {
   VAR_18 = (!VAR_17 ? 0x2 : 0x1);
  } else {
   VAR_18 = (!VAR_17 ? 0x1 : 0x2);
  }

  FUNC_0(VAR_11, VAR_10, VAR_2, VAR_18);
  break;
 case 128:

  FUNC_0(VAR_11, VAR_7 + 2, VAR_0 >> 16, 0x0);

  FUNC_0(VAR_11, VAR_7 + 3, VAR_1 >> 24, 0x1);

  FUNC_0(VAR_11, VAR_9, VAR_3, 0x66);

  VAR_18 = (!VAR_17 ? 0x2 : 0x1);
  FUNC_0(VAR_11, VAR_10, VAR_2, VAR_18);
  break;
 case 133:

  FUNC_0(VAR_11, VAR_7 + 2, VAR_0 >> 16, 0x0);

  FUNC_0(VAR_11, VAR_7 + 3, VAR_1 >> 24, 0x1);
  FUNC_0(VAR_11, VAR_9, VAR_3, 0x88);
  break;
 case 129:

  FUNC_0(VAR_11, VAR_7 + 2, VAR_0 >> 16, 0x1);

  VAR_18 = (!VAR_17 ? 0x0 : 0x1);
  FUNC_0(VAR_11, VAR_8, VAR_4, VAR_18);
  break;
 case 130:

  FUNC_0(VAR_11, VAR_7 + 2, VAR_0 >> 16, 0x0);

  FUNC_0(VAR_11, VAR_7 + 3, VAR_1 >> 24, 0x1);
  break;
 case 131:

  FUNC_0(VAR_11, VAR_7 + 2, VAR_0 >> 16, 0x0);

  FUNC_0(VAR_11, VAR_7 + 3, VAR_1 >> 24, 0x0);
  break;
 }
}
