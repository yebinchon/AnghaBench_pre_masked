
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int nents; int sgl; } ;
struct dma_slave_config {int dummy; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (struct dma_chan*,int ,int ,int,unsigned long) ;
 int FUNC_4 (struct dma_chan*,struct dma_slave_config*) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_5,
          struct dma_slave_config *VAR_6,
          struct sg_table *VAR_7,
          enum dma_transfer_direction VAR_8)
{
 struct dma_async_tx_descriptor *VAR_9;
 dma_cookie_t VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_5, VAR_6);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = FUNC_0(VAR_1, VAR_3,
          VAR_2, VAR_4);
 VAR_9 = FUNC_3(VAR_5, VAR_7->sgl, VAR_7->nents, VAR_8, VAR_11);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_9);
 if (FUNC_2(VAR_10))
  return FUNC_2(VAR_10);

 FUNC_1(VAR_5);

 return 0;
}
