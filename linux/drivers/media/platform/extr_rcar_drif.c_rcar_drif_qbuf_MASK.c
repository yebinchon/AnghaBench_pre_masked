
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_drif_sdr {int hwbuf_size; } ;
struct rcar_drif {int dmach; int num; int dma_handle; struct rcar_drif_sdr* sdr; } ;
struct dma_async_tx_descriptor {struct rcar_drif* callback_param; int callback; } ;
typedef int dma_cookie_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct dma_async_tx_descriptor* FUNC_2 (int ,int ,int,int,int ,int) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int VAR_5 ;
 int FUNC_4 (struct rcar_drif_sdr*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct rcar_drif *VAR_6)
{
 struct rcar_drif_sdr *VAR_7 = VAR_6->sdr;
 dma_addr_t VAR_8 = VAR_6->dma_handle;
 struct dma_async_tx_descriptor *VAR_9;
 dma_cookie_t VAR_10;
 int VAR_11 = -VAR_3;


 VAR_9 = FUNC_2(VAR_6->dmach, VAR_8,
     VAR_7->hwbuf_size * VAR_4,
     VAR_7->hwbuf_size, VAR_1,
     VAR_2 | VAR_0);
 if (!VAR_9) {
  FUNC_4(VAR_7, "ch%u: prep dma cyclic failed\n", VAR_6->num);
  return VAR_11;
 }


 VAR_9->callback = VAR_5;
 VAR_9->callback_param = VAR_6;
 VAR_10 = FUNC_3(VAR_9);
 if (FUNC_1(VAR_10)) {
  FUNC_4(VAR_7, "ch%u: dma submit failed\n", VAR_6->num);
  return VAR_11;
 }

 FUNC_0(VAR_6->dmach);
 return 0;
}
