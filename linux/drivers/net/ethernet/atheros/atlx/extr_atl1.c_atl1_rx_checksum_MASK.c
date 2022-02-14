
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; } ;
struct rx_return_desc {int pkt_flg; int err_flg; } ;
struct pci_dev {int dev; } ;
struct atl1_adapter {int hw_csum_good; int hw_csum_err; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct atl1_adapter*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct atl1_adapter *VAR_10,
 struct rx_return_desc *VAR_11, struct sk_buff *VAR_12)
{
 struct pci_dev *VAR_13 = VAR_10->pdev;
 FUNC_3(VAR_12);

 if (FUNC_4(VAR_11->pkt_flg & VAR_8)) {
  if (VAR_11->err_flg & (VAR_2 | VAR_6 |
     VAR_1 | VAR_5)) {
   VAR_10->hw_csum_err++;
   if (FUNC_2(VAR_10))
    FUNC_0(VAR_7, &VAR_13->dev,
     "rx checksum error\n");
   return;
  }
 }


 if (!(VAR_11->pkt_flg & VAR_9))

  return;


 if (FUNC_1(!(VAR_11->err_flg &
  (VAR_3 | VAR_4)))) {
  VAR_12->ip_summed = VAR_0;
  VAR_10->hw_csum_good++;
  return;
 }
}
