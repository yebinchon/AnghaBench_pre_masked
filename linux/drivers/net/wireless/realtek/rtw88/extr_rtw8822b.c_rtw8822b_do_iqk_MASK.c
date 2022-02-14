
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_iqk_para {int segment_iqk; int clear; } ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rtw_dev*,int ,char*,int,int,int,int) ;
 int FUNC_4 (struct rtw_dev*,struct rtw_iqk_para*) ;
 int FUNC_5 (struct rtw_dev*,int ,int ) ;
 int FUNC_6 (struct rtw_dev*,int ,int ,int ) ;
 int FUNC_7 (struct rtw_dev*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct rtw_dev *VAR_5)
{
 static int VAR_6;
 struct rtw_iqk_para VAR_7 = {.clear = 0, .segment_iqk = 0};
 u32 VAR_8, VAR_9;
 int VAR_10;
 bool VAR_11;

 FUNC_4(VAR_5, &VAR_7);

 for (VAR_10 = 0; VAR_10 < 300; VAR_10++) {
  VAR_8 = FUNC_6(VAR_5, VAR_3, VAR_2, VAR_1);
  if (VAR_8 == 0xabcde)
   break;
  FUNC_2(20);
 }
 FUNC_7(VAR_5, VAR_3, VAR_2, VAR_1, 0x0);

 VAR_11 = !!FUNC_5(VAR_5, VAR_0, FUNC_0(16));
 VAR_9 = FUNC_5(VAR_5, VAR_0, FUNC_1(7, 0));
 FUNC_3(VAR_5, VAR_4,
  "iqk counter=%d reload=%d do_iqk_cnt=%d n_iqk_fail(mask)=0x%02x\n",
  VAR_10, VAR_11, ++VAR_6, VAR_9);
}
