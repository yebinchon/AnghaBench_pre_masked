
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rx_sw_desc {int dummy; } ;
struct rx_desc {void* gen2; void* len_gen; void* addr_hi; void* addr_lo; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 void* FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct rx_sw_desc*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct pci_dev*,void*,unsigned int,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static inline int FUNC_8(void *VAR_3, unsigned int VAR_4,
     struct rx_desc *VAR_5, struct rx_sw_desc *VAR_6,
     unsigned int VAR_7, struct pci_dev *VAR_8)
{
 dma_addr_t VAR_9;

 VAR_9 = FUNC_6(VAR_8, VAR_3, VAR_4, VAR_1);
 if (FUNC_7(FUNC_5(VAR_8, VAR_9)))
  return -VAR_0;

 FUNC_3(VAR_6, VAR_2, VAR_9);

 VAR_5->addr_lo = FUNC_2(VAR_9);
 VAR_5->addr_hi = FUNC_2((u64) VAR_9 >> 32);
 FUNC_4();
 VAR_5->len_gen = FUNC_2(FUNC_0(VAR_7));
 VAR_5->gen2 = FUNC_2(FUNC_1(VAR_7));
 return 0;
}
