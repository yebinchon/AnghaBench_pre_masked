
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rtw_dev {int dummy; } ;
struct rtw_coex_info_req {int op_code; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int * FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct rtw_dev*,struct rtw_coex_info_req*) ;

__attribute__((used)) static bool FUNC_4(struct rtw_dev *VAR_1, u8 *VAR_2)
{
 struct rtw_coex_info_req VAR_3 = {0};
 struct sk_buff *VAR_4;
 u8 *VAR_5;
 bool VAR_6 = 0;

 VAR_3.op_code = VAR_0;
 VAR_4 = FUNC_3(VAR_1, &VAR_3);
 if (!VAR_4)
  goto out;

 VAR_5 = FUNC_2(VAR_4);
 *VAR_2 = FUNC_0(VAR_5);
 FUNC_1(VAR_4);
 VAR_6 = 1;

out:
 return VAR_6;
}
