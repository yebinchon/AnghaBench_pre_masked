
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sis190_private {int rx_buf_sz; struct pci_dev* pci_dev; } ;
struct pci_dev {int dummy; } ;
struct RxDesc {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_3 (struct RxDesc*) ;

__attribute__((used)) static void FUNC_4(struct sis190_private *VAR_1,
          struct sk_buff **VAR_2, struct RxDesc *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_1->pci_dev;

 FUNC_2(VAR_4, FUNC_1(VAR_3->addr), VAR_1->rx_buf_sz,
    VAR_0);
 FUNC_0(*VAR_2);
 *VAR_2 = ((void*)0);
 FUNC_3(VAR_3);
}
