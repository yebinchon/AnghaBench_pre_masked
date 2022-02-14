
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct pci_dev {int dummy; } ;
struct pch_gbe_adapter {struct pci_dev* ptp_pdev; int hwts_rx_en; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 struct skb_shared_hwtstamps* FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_11(struct pch_gbe_adapter *VAR_1, struct sk_buff *VAR_2)
{
 struct skb_shared_hwtstamps *VAR_3;
 struct pci_dev *VAR_4;
 u64 VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 u16 VAR_9, VAR_10;

 if (!VAR_1->hwts_rx_en)
  return;


 VAR_4 = VAR_1->ptp_pdev;

 VAR_8 = FUNC_4(VAR_4);

 if (!(VAR_8 & VAR_0))
  return;

 VAR_7 = FUNC_9(VAR_4);
 VAR_6 = FUNC_8(VAR_4);

 VAR_9 = VAR_6 & 0xffff;
 VAR_10 = (VAR_6 >> 16) & 0xffff;

 if (!FUNC_6(VAR_2, FUNC_1(VAR_9), FUNC_0(VAR_7), FUNC_1(VAR_10)))
  goto out;

 VAR_5 = FUNC_7(VAR_4);

 VAR_3 = FUNC_10(VAR_2);
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->hwtstamp = FUNC_3(VAR_5);
out:
 FUNC_5(VAR_4, VAR_0);
}
