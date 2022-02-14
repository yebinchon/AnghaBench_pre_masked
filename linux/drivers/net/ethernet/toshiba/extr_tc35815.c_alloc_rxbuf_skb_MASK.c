
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct net_device*,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct net_device *VAR_2,
           struct pci_dev *VAR_3,
           dma_addr_t *VAR_4)
{
 struct sk_buff *VAR_5;
 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_5)
  return ((void*)0);
 *VAR_4 = FUNC_3(VAR_3, VAR_5->data, VAR_1,
         VAR_0);
 if (FUNC_2(VAR_3, *VAR_4)) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }
 FUNC_4(VAR_5, 2);
 return VAR_5;
}
