
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ cb; scalar_t__ len; scalar_t__ data; } ;
struct rtw_dev {int c2h_work; int hw; int c2h_queue; } ;
struct rtw_c2h_cmd {int id; int seq; } ;



 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rtw_dev*,struct sk_buff*) ;
 int FUNC_2 (struct rtw_dev*,int ,char*,int,int ,scalar_t__) ;
 int FUNC_3 (int *,struct sk_buff*) ;

void FUNC_4(struct rtw_dev *VAR_1, u32 VAR_2,
          struct sk_buff *VAR_3)
{
 struct rtw_c2h_cmd *VAR_4;
 u8 VAR_5;

 VAR_4 = (struct rtw_c2h_cmd *)(VAR_3->data + VAR_2);
 VAR_5 = VAR_3->len - VAR_2 - 2;
 *((u32 *)VAR_3->cb) = VAR_2;

 FUNC_2(VAR_1, VAR_0, "recv C2H, id=0x%02x, seq=0x%02x, len=%d\n",
  VAR_4->id, VAR_4->seq, VAR_5);

 switch (VAR_4->id) {
 case 128:
  FUNC_1(VAR_1, VAR_3);
  break;
 default:

  *((u32 *)VAR_3->cb) = VAR_2;
  FUNC_3(&VAR_1->c2h_queue, VAR_3);
  FUNC_0(VAR_1->hw, &VAR_1->c2h_work);
  break;
 }
}
