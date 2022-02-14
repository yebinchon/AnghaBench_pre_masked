
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct rtw_tx_pkt_info {int dummy; } ;
struct TYPE_2__ {int len; int rp; int wp; } ;
struct rtw_pci_tx_ring {int queue_stopped; TYPE_1__ r; } ;
struct rtw_pci {struct rtw_pci_tx_ring* tx_rings; } ;
struct rtw_dev {int hw; scalar_t__ priv; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 size_t FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct rtw_dev*,struct rtw_tx_pkt_info*,struct sk_buff*,size_t) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct rtw_dev *VAR_0,
        struct rtw_tx_pkt_info *VAR_1,
        struct sk_buff *VAR_2)
{
 struct rtw_pci *VAR_3 = (struct rtw_pci *)VAR_0->priv;
 struct rtw_pci_tx_ring *VAR_4;
 u8 VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4 = &VAR_3->tx_rings[VAR_5];
 if (FUNC_0(VAR_4->r.wp, VAR_4->r.rp, VAR_4->r.len) < 2) {
  FUNC_1(VAR_0->hw, FUNC_4(VAR_2));
  VAR_4->queue_stopped = 1;
 }

 return 0;
}
