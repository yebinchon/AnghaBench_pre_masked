
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct TYPE_2__ {int depth; int item_len; void* buf_addr; } ;
struct brcmf_pcie_ringbuf {int dma_handle; TYPE_1__ commonring; } ;


 int FUNC_0 (struct device*,int,void*,int ) ;
 int FUNC_1 (struct brcmf_pcie_ringbuf*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0,
       struct brcmf_pcie_ringbuf *VAR_1)
{
 void *VAR_2;
 u32 VAR_3;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->commonring.buf_addr;
 if (VAR_2) {
  VAR_3 = VAR_1->commonring.depth * VAR_1->commonring.item_len;
  FUNC_0(VAR_0, VAR_3, VAR_2, VAR_1->dma_handle);
 }
 FUNC_1(VAR_1);
}
