
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_dp {int rx_dma_dir; scalar_t__ fl_bufsz; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct nfp_net_dp *VAR_2, dma_addr_t VAR_3)
{
 FUNC_0(VAR_2->dev, VAR_3,
          VAR_2->fl_bufsz - VAR_1,
          VAR_2->rx_dma_dir, VAR_0);
}
