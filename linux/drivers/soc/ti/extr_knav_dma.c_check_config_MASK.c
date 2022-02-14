
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knav_dma_chan {int cfg; } ;
struct knav_dma_cfg {int dummy; } ;


 int FUNC_0 (int *,struct knav_dma_cfg*,int) ;

__attribute__((used)) static bool FUNC_1(struct knav_dma_chan *VAR_0, struct knav_dma_cfg *VAR_1)
{
 if (!FUNC_0(&VAR_0->cfg, VAR_1, sizeof(*VAR_1)))
  return 1;
 else
  return 0;
}
