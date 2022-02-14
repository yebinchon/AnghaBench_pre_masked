
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int dummy; } ;
struct rocker {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,size_t,int ) ;
 size_t FUNC_1 (struct rocker_tlv const*) ;
 int FUNC_2 (struct rocker_tlv const*) ;

__attribute__((used)) static void FUNC_3(const struct rocker *VAR_3,
      const struct rocker_tlv **VAR_4)
{
 struct pci_dev *VAR_5 = VAR_3->pdev;
 dma_addr_t VAR_6;
 size_t VAR_7;

 if (!VAR_4[VAR_1] ||
     !VAR_4[VAR_2])
  return;
 VAR_6 = FUNC_2(VAR_4[VAR_1]);
 VAR_7 = FUNC_1(VAR_4[VAR_2]);
 FUNC_0(VAR_5, VAR_6, VAR_7, VAR_0);
}
