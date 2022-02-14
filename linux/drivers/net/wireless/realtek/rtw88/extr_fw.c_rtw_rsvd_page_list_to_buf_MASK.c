
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct rtw_rsvd_page {scalar_t__ add_txdesc; struct sk_buff* skb; } ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (struct rtw_dev*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_0, u8 VAR_1,
          u8 VAR_2, u32 VAR_3, u8 *VAR_4,
          struct rtw_rsvd_page *VAR_5)
{
 struct sk_buff *VAR_6 = VAR_5->skb;

 if (VAR_5->add_txdesc)
  FUNC_1(VAR_0, VAR_6);

 if (VAR_3 >= 1)
  FUNC_0(VAR_4 + VAR_2 + VAR_1 * (VAR_3 - 1),
         VAR_6->data, VAR_6->len);
 else
  FUNC_0(VAR_4, VAR_6->data, VAR_6->len);
}
