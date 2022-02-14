
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void* bufaddrl; void* bufaddrh; int datalen; int flags; } ;
struct txdesc {TYPE_1__ desc2; scalar_t__* dw; } ;
struct pci_dev {int dummy; } ;
struct page {int dummy; } ;
struct jme_buffer_info {int len; scalar_t__ mapping; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*,scalar_t__) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (struct pci_dev*,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct pci_dev *VAR_4,
  struct txdesc *VAR_5,
  struct jme_buffer_info *VAR_6,
  struct page *VAR_7,
  u32 VAR_8,
  u32 VAR_9,
  bool VAR_10)
{
 dma_addr_t VAR_11;

 VAR_11 = FUNC_4(VAR_4,
    VAR_7,
    VAR_8,
    VAR_9,
    VAR_1);

 if (FUNC_5(FUNC_2(VAR_4, VAR_11)))
  return -VAR_0;

 FUNC_3(VAR_4,
           VAR_11,
           VAR_9,
           VAR_1);

 VAR_5->dw[0] = 0;
 VAR_5->dw[1] = 0;
 VAR_5->desc2.flags = VAR_3;
 VAR_5->desc2.flags |= (VAR_10) ? VAR_2 : 0;
 VAR_5->desc2.datalen = FUNC_0(VAR_9);
 VAR_5->desc2.bufaddrh = FUNC_1((__u64)VAR_11 >> 32);
 VAR_5->desc2.bufaddrl = FUNC_1(
     (__u64)VAR_11 & 0xFFFFFFFFUL);

 VAR_6->mapping = VAR_11;
 VAR_6->len = VAR_9;
 return 0;
}
