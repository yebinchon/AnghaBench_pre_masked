
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfp_net_dp {int xdp_prog; int dev; int fl_bufsz; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_net_dp*,void*) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (struct nfp_net_dp*,char*) ;
 int * FUNC_6 (struct page*) ;

__attribute__((used)) static void *FUNC_7(struct nfp_net_dp *VAR_1, dma_addr_t *VAR_2)
{
 void *VAR_3;

 if (!VAR_1->xdp_prog) {
  VAR_3 = FUNC_2(VAR_1->fl_bufsz);
 } else {
  struct page *VAR_4;

  VAR_4 = FUNC_0(VAR_0);
  VAR_3 = VAR_4 ? FUNC_6(VAR_4) : ((void*)0);
 }
 if (!VAR_3) {
  FUNC_5(VAR_1, "Failed to alloc receive page frag\n");
  return ((void*)0);
 }

 *VAR_2 = FUNC_3(VAR_1, VAR_3);
 if (FUNC_1(VAR_1->dev, *VAR_2)) {
  FUNC_4(VAR_3, VAR_1->xdp_prog);
  FUNC_5(VAR_1, "Failed to map DMA RX buffer\n");
  return ((void*)0);
 }

 return VAR_3;
}
