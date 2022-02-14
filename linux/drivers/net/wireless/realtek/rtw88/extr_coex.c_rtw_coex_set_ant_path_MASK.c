
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_coex_dm {int cur_ant_pos_type; } ;
struct rtw_coex_stat {int bt_disabled; } ;
struct rtw_coex {struct rtw_coex_dm dm; struct rtw_coex_stat stat; } ;
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,int) ;
 int FUNC_3 (struct rtw_dev*,int,int) ;
 int FUNC_4 (struct rtw_dev*,int ) ;
 int FUNC_5 (struct rtw_dev*,int ) ;

__attribute__((used)) static void FUNC_6(struct rtw_dev *VAR_13, bool VAR_14, u8 VAR_15)
{
 struct rtw_coex *VAR_16 = &VAR_13->coex;
 struct rtw_coex_stat *VAR_17 = &VAR_16->stat;
 struct rtw_coex_dm *VAR_18 = &VAR_16->dm;
 u8 VAR_19 = VAR_6;
 u8 VAR_20 = VAR_8;

 if (!VAR_14 && VAR_18->cur_ant_pos_type == VAR_15)
  return;

 VAR_18->cur_ant_pos_type = VAR_15;


 FUNC_1(VAR_13);

 switch (VAR_15) {
 case 130:

  if (VAR_17->bt_disabled)
   FUNC_2(VAR_13, 1);
  else
   FUNC_2(VAR_13, 0);

  VAR_19 = VAR_3;
  VAR_20 = VAR_7;
  break;
 case 131:
  if (VAR_17->bt_disabled) {

   FUNC_4(VAR_13, VAR_2);


   FUNC_5(VAR_13, VAR_1);
  } else {

   FUNC_4(VAR_13, VAR_1);


   FUNC_5(VAR_13, VAR_2);
  }


  FUNC_2(VAR_13, 1);

  VAR_19 = VAR_3;
  VAR_20 = VAR_7;
  break;
 case 128:

  FUNC_4(VAR_13, VAR_2);


  FUNC_5(VAR_13, VAR_1);


  FUNC_2(VAR_13, 1);

  VAR_19 = VAR_3;
  VAR_20 = VAR_11;
  break;
 case 129:

  FUNC_2(VAR_13, 0);

  VAR_19 = VAR_4;
  VAR_20 = VAR_9;
  break;
 case 135:

  FUNC_4(VAR_13, VAR_0);


  FUNC_5(VAR_13, VAR_0);


  FUNC_2(VAR_13, 1);

  VAR_19 = VAR_5;
  VAR_20 = VAR_9;
  break;
 case 132:

  FUNC_4(VAR_13, VAR_1);


  FUNC_5(VAR_13, VAR_1);


  FUNC_2(VAR_13, 1);

  VAR_19 = VAR_3;
  VAR_20 = VAR_10;
  break;
 case 134:

  FUNC_4(VAR_13, VAR_1);


  FUNC_5(VAR_13, VAR_1);


  FUNC_2(VAR_13, 1);

  VAR_19 = VAR_3;
  VAR_20 = VAR_12;
  break;
 case 133:

  FUNC_4(VAR_13, VAR_0);


  FUNC_5(VAR_13, VAR_0);


  FUNC_2(VAR_13, 1);

  VAR_19 = VAR_3;
  VAR_20 = VAR_12;
  break;
 default:
  FUNC_0(1, "unknown phase when setting antenna path\n");
  return;
 }

 if (VAR_19 < VAR_6 && VAR_20 < VAR_8)
  FUNC_3(VAR_13, VAR_19, VAR_20);
}
