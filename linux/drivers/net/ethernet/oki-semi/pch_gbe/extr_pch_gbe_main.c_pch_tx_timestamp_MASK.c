
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct skb_shared_info {int tx_flags; } ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct pci_dev {int dummy; } ;
struct pch_gbe_adapter {struct pci_dev* ptp_pdev; scalar_t__ hwts_tx_en; } ;
typedef int shhwtstamps ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*) ;
 struct skb_shared_info* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct pch_gbe_adapter *VAR_3, struct sk_buff *VAR_4)
{
 struct skb_shared_hwtstamps VAR_5;
 struct pci_dev *VAR_6;
 struct skb_shared_info *VAR_7;
 u64 VAR_8;
 u32 VAR_9, VAR_10;

 VAR_7 = FUNC_6(VAR_4);
 if (FUNC_0(!(VAR_7->tx_flags & VAR_0 && VAR_3->hwts_tx_en)))
  return;

 VAR_7->tx_flags |= VAR_1;


 VAR_6 = VAR_3->ptp_pdev;




 for (VAR_9 = 0; VAR_9 < 100; VAR_9++) {
  VAR_10 = FUNC_3(VAR_6);
  if (VAR_10 & VAR_2)
   break;
  FUNC_8(1);
 }
 if (!(VAR_10 & VAR_2)) {
  VAR_7->tx_flags &= ~VAR_1;
  return;
 }

 VAR_8 = FUNC_5(VAR_6);

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.hwtstamp = FUNC_2(VAR_8);
 FUNC_7(VAR_4, &VAR_5);

 FUNC_4(VAR_6, VAR_2);
}
