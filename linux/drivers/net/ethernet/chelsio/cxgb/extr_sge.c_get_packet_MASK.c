
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct pci_dev {int dummy; } ;
struct freelQ_ce {struct sk_buff* skb; } ;
struct freelQ {size_t cidx; int credits; struct freelQ_ce* centries; } ;
struct adapter {int napi; struct pci_dev* pdev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct freelQ_ce const*,int ) ;
 int FUNC_1 (struct freelQ_ce const*,int ) ;
 struct sk_buff* FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_4 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_5 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct freelQ*,size_t) ;
 int FUNC_8 (struct sk_buff*,int ,unsigned int) ;
 int FUNC_9 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static inline struct sk_buff *FUNC_10(struct adapter *VAR_4,
      struct freelQ *VAR_5, unsigned int VAR_6)
{
 const struct freelQ_ce *VAR_7 = &VAR_5->centries[VAR_5->cidx];
 struct pci_dev *VAR_8 = VAR_4->pdev;
 struct sk_buff *VAR_9;

 if (VAR_6 < VAR_1) {
  VAR_9 = FUNC_2(&VAR_4->napi, VAR_6);
  if (!VAR_9)
   goto use_orig_buf;

  FUNC_9(VAR_9, VAR_6);
  FUNC_3(VAR_8,
         FUNC_0(VAR_7, VAR_2),
         FUNC_1(VAR_7, VAR_3),
         VAR_0);
  FUNC_8(VAR_7->skb, VAR_9->data, VAR_6);
  FUNC_4(VAR_8,
            FUNC_0(VAR_7, VAR_2),
            FUNC_1(VAR_7, VAR_3),
            VAR_0);
  FUNC_7(VAR_5, VAR_5->cidx);
  return VAR_9;
 }

use_orig_buf:
 if (VAR_5->credits < 2) {
  FUNC_7(VAR_5, VAR_5->cidx);
  return ((void*)0);
 }

 FUNC_5(VAR_8, FUNC_0(VAR_7, VAR_2),
    FUNC_1(VAR_7, VAR_3), VAR_0);
 VAR_9 = VAR_7->skb;
 FUNC_6(VAR_9->data);

 FUNC_9(VAR_9, VAR_6);
 return VAR_9;
}
