
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_tx_pkt_info {int dummy; } ;
typedef struct rtw_tx_pkt_info u8 ;
struct sk_buff {int dummy; } ;
struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {int tx_pkt_desc_sz; } ;
typedef int pkt_info ;


 int FUNC_0 (struct rtw_tx_pkt_info*,int ,int) ;
 int FUNC_1 (struct rtw_dev*,struct rtw_tx_pkt_info*,struct sk_buff*) ;
 int FUNC_2 (struct rtw_tx_pkt_info*,struct sk_buff*) ;
 struct rtw_tx_pkt_info* FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct rtw_tx_pkt_info VAR_2;
 struct rtw_chip_info *VAR_3 = VAR_0->chip;
 u8 *VAR_4;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 FUNC_1(VAR_0, &VAR_2, VAR_1);
 VAR_4 = FUNC_3(VAR_1, VAR_3->tx_pkt_desc_sz);
 FUNC_0(VAR_4, 0, VAR_3->tx_pkt_desc_sz);
 FUNC_2(&VAR_2, VAR_1);
}
