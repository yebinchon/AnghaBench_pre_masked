
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct rocker_port {struct rocker* rocker; } ;
struct rocker_desc_info {scalar_t__ tlv_size; } ;
struct rocker {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,int ,size_t,int ) ;
 int FUNC_2 (struct pci_dev*,int ,size_t,int ) ;
 scalar_t__ FUNC_3 (struct rocker_desc_info*,int ,size_t) ;
 scalar_t__ FUNC_4 (struct rocker_desc_info*,int ,int ) ;

__attribute__((used)) static int FUNC_5(const struct rocker_port *VAR_5,
          struct rocker_desc_info *VAR_6,
          struct sk_buff *VAR_7, size_t VAR_8)
{
 const struct rocker *VAR_9 = VAR_5->rocker;
 struct pci_dev *VAR_10 = VAR_9->pdev;
 dma_addr_t VAR_11;

 VAR_11 = FUNC_1(VAR_10, VAR_7->data, VAR_8,
        VAR_2);
 if (FUNC_0(VAR_10, VAR_11))
  return -VAR_0;
 if (FUNC_4(VAR_6, VAR_3, VAR_11))
  goto tlv_put_failure;
 if (FUNC_3(VAR_6, VAR_4, VAR_8))
  goto tlv_put_failure;
 return 0;

tlv_put_failure:
 FUNC_2(VAR_10, VAR_11, VAR_8, VAR_2);
 VAR_6->tlv_size = 0;
 return -VAR_1;
}
