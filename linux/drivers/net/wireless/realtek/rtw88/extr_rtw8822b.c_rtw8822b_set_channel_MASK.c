
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_efuse {size_t rfe_option; } ;
struct rtw_dev {struct rtw_efuse efuse; } ;
struct rtw8822b_rfe_info {int (* rtw_set_channel_rfe ) (struct rtw_dev*,int ) ;} ;


 size_t FUNC_0 (struct rtw8822b_rfe_info*) ;
 scalar_t__ FUNC_1 (int,char*,size_t) ;
 struct rtw8822b_rfe_info* VAR_0 ;
 int FUNC_2 (struct rtw_dev*,int ,int ,int ) ;
 int FUNC_3 (struct rtw_dev*,int ,int ,struct rtw8822b_rfe_info const*) ;
 int FUNC_4 (struct rtw_dev*,int ,int ) ;
 int FUNC_5 (struct rtw_dev*,int ) ;
 int FUNC_6 (struct rtw_dev*) ;
 int FUNC_7 (struct rtw_dev*,int ,int ,int ) ;
 int FUNC_8 (struct rtw_dev*,int ) ;

__attribute__((used)) static void FUNC_9(struct rtw_dev *VAR_1, u8 VAR_2, u8 VAR_3,
     u8 VAR_4)
{
 struct rtw_efuse *VAR_5 = &VAR_1->efuse;
 const struct rtw8822b_rfe_info *VAR_6;

 if (FUNC_1(VAR_5->rfe_option >= FUNC_0(VAR_0),
   "rfe_option %d is out of boundary\n", VAR_5->rfe_option))
  return;

 VAR_6 = &VAR_0[VAR_5->rfe_option];

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_4(VAR_1, VAR_2, VAR_3);
 FUNC_5(VAR_1, VAR_3);
 FUNC_6(VAR_1);
 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_6);
 (*VAR_6->rtw_set_channel_rfe)(VAR_1, VAR_2);
}
