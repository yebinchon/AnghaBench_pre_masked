
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; scalar_t__ cb; } ;
struct rtw_dev {int mutex; } ;
struct rtw_c2h_cmd {int id; int payload; } ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtw_dev*,int ,scalar_t__) ;
 int FUNC_3 (struct rtw_dev*,int ,scalar_t__) ;
 int FUNC_4 (struct rtw_dev*,struct sk_buff*) ;

void FUNC_5(struct rtw_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct rtw_c2h_cmd *VAR_2;
 u32 VAR_3;
 u8 VAR_4;

 VAR_3 = *((u32 *)VAR_1->cb);
 VAR_2 = (struct rtw_c2h_cmd *)(VAR_1->data + VAR_3);
 VAR_4 = VAR_1->len - VAR_3 - 2;

 FUNC_0(&VAR_0->mutex);

 switch (VAR_2->id) {
 case 130:
  FUNC_2(VAR_0, VAR_2->payload, VAR_4);
  break;
 case 128:
  FUNC_3(VAR_0, VAR_2->payload, VAR_4);
  break;
 case 129:
  FUNC_4(VAR_0, VAR_1);
  break;
 default:
  break;
 }

 FUNC_1(&VAR_0->mutex);
}
