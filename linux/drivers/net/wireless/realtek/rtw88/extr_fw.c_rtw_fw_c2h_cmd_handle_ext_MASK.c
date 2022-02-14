
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rtw_dev {int dummy; } ;
struct rtw_c2h_cmd {int* payload; } ;



 struct rtw_c2h_cmd* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct rtw_dev*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_0,
          struct sk_buff *VAR_1)
{
 struct rtw_c2h_cmd *VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_2->payload[0];

 switch (VAR_3) {
 case 128:
  FUNC_1(VAR_0, VAR_1);
  break;
 default:
  break;
 }
}
