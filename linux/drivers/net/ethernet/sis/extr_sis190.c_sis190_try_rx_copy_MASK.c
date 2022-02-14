
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct sis190_private {int rx_buf_sz; int pci_dev; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct sk_buff*,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct sis190_private *VAR_2,
          struct sk_buff **VAR_3, int VAR_4,
          dma_addr_t VAR_5)
{
 struct sk_buff *VAR_6;
 bool VAR_7 = 0;

 if (VAR_4 >= VAR_1)
  goto out;

 VAR_6 = FUNC_0(VAR_2->dev, VAR_4);
 if (!VAR_6)
  goto out;

 FUNC_1(VAR_2->pci_dev, VAR_5, VAR_2->rx_buf_sz,
    VAR_0);
 FUNC_2(VAR_6, VAR_3[0]->data, VAR_4);
 *VAR_3 = VAR_6;
 VAR_7 = 1;
out:
 return VAR_7;
}
