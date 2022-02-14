
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_sw_desc {int * skb; scalar_t__ eop; } ;
struct sge_txq {unsigned int cidx; scalar_t__ cntxt_id; unsigned int size; struct tx_sw_desc* sdesc; } ;
struct pci_dev {int dummy; } ;
struct adapter {struct pci_dev* pdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,struct sge_txq*,unsigned int,struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_1, struct sge_txq *VAR_2,
    unsigned int VAR_3)
{
 struct tx_sw_desc *VAR_4;
 struct pci_dev *VAR_5 = VAR_1->pdev;
 unsigned int VAR_6 = VAR_2->cidx;

 const int VAR_7 = FUNC_1() &&
          VAR_2->cntxt_id >= VAR_0;

 VAR_4 = &VAR_2->sdesc[VAR_6];
 while (VAR_3--) {
  if (VAR_4->skb) {
   if (VAR_7)
    FUNC_2(VAR_4->skb, VAR_2, VAR_6, VAR_5);
   if (VAR_4->eop) {
    FUNC_0(VAR_4->skb);
    VAR_4->skb = ((void*)0);
   }
  }
  ++VAR_4;
  if (++VAR_6 == VAR_2->size) {
   VAR_6 = 0;
   VAR_4 = VAR_2->sdesc;
  }
 }
 VAR_2->cidx = VAR_6;
}
