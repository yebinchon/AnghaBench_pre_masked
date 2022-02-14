
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfp_net_dp {int xdp_prog; int dev; int fl_bufsz; } ;
typedef int dma_addr_t ;


 struct page* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_net_dp*,void*) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (struct nfp_net_dp*,char*) ;
 void* FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void *FUNC_8(struct nfp_net_dp *VAR_0, dma_addr_t *VAR_1)
{
 void *VAR_2;

 if (!VAR_0->xdp_prog) {
  VAR_2 = FUNC_2(VAR_0->fl_bufsz);
  if (FUNC_7(!VAR_2))
   return ((void*)0);
 } else {
  struct page *VAR_3;

  VAR_3 = FUNC_0();
  if (FUNC_7(!VAR_3))
   return ((void*)0);
  VAR_2 = FUNC_6(VAR_3);
 }

 *VAR_1 = FUNC_3(VAR_0, VAR_2);
 if (FUNC_1(VAR_0->dev, *VAR_1)) {
  FUNC_4(VAR_2, VAR_0->xdp_prog);
  FUNC_5(VAR_0, "Failed to map DMA RX buffer\n");
  return ((void*)0);
 }

 return VAR_2;
}
