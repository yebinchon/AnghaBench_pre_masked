
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct rtw_tx_pkt_info {scalar_t__ tx_pkt_size; } ;
struct rtw_dev {TYPE_1__* chip; } ;
typedef int pkt_info ;
struct TYPE_2__ {scalar_t__ tx_pkt_desc_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (struct rtw_tx_pkt_info*,int ,int) ;
 int FUNC_3 (struct rtw_dev*,struct rtw_tx_pkt_info*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct rtw_dev *VAR_2, u8 *VAR_3, u32 VAR_4)
{
 struct sk_buff *VAR_5;
 struct rtw_tx_pkt_info VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 VAR_7 = VAR_2->chip->tx_pkt_desc_sz;
 VAR_8 = VAR_4 + VAR_7;
 VAR_5 = FUNC_0(VAR_8);
 if (!VAR_5)
  return -VAR_0;

 FUNC_5(VAR_5, VAR_7);
 FUNC_1((u8 *)FUNC_4(VAR_5, VAR_4), VAR_3, VAR_4);
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.tx_pkt_size = VAR_4;

 return FUNC_3(VAR_2, &VAR_6, VAR_5, VAR_1);
}
