
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_sw_desc {int * skb; int sgl; } ;
struct sge_txq {unsigned int cidx; unsigned int size; struct tx_sw_desc* sdesc; } ;
struct device {int dummy; } ;
struct adapter {struct device* pdev_dev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct device*,int *,int ,struct sge_txq*) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_0, struct sge_txq *VAR_1,
    unsigned int VAR_2, bool VAR_3)
{
 struct tx_sw_desc *VAR_4;
 unsigned int VAR_5 = VAR_1->cidx;
 struct device *VAR_6 = VAR_0->pdev_dev;

 const int VAR_7 = FUNC_1() && VAR_3;

 VAR_4 = &VAR_1->sdesc[VAR_5];
 while (VAR_2--) {




  if (VAR_4->skb) {
   if (VAR_7)
    FUNC_2(VAR_6, VAR_4->skb, VAR_4->sgl, VAR_1);
   FUNC_0(VAR_4->skb);
   VAR_4->skb = ((void*)0);
  }

  VAR_4++;
  if (++VAR_5 == VAR_1->size) {
   VAR_5 = 0;
   VAR_4 = VAR_1->sdesc;
  }
 }
 VAR_1->cidx = VAR_5;
}
