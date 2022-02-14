
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_dp {int rx_dma_dir; scalar_t__ fl_bufsz; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,void*,scalar_t__,int ,int ) ;

__attribute__((used)) static dma_addr_t FUNC_1(struct nfp_net_dp *VAR_3, void *VAR_4)
{
 return FUNC_0(VAR_3->dev, VAR_4 + VAR_1,
        VAR_3->fl_bufsz - VAR_2,
        VAR_3->rx_dma_dir, VAR_0);
}
