
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct freelQ_ce {int * skb; } ;
struct freelQ {unsigned int cidx; unsigned int size; struct freelQ_ce* centries; int credits; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct freelQ_ce*,int ) ;
 int FUNC_2 (struct freelQ_ce*,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_3, struct freelQ *VAR_4)
{
 unsigned int VAR_5 = VAR_4->cidx;

 while (VAR_4->credits--) {
  struct freelQ_ce *VAR_6 = &VAR_4->centries[VAR_5];

  FUNC_3(VAR_3, FUNC_1(VAR_6, VAR_1),
     FUNC_2(VAR_6, VAR_2),
     VAR_0);
  FUNC_0(VAR_6->skb);
  VAR_6->skb = ((void*)0);
  if (++VAR_5 == VAR_4->size)
   VAR_5 = 0;
 }
}
