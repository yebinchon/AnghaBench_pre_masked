
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_dp {int rx_dma_dir; int dev; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct nfp_net_dp *VAR_1, dma_addr_t VAR_2,
        unsigned int VAR_3)
{
 FUNC_0(VAR_1->dev, VAR_2 - VAR_0,
    VAR_3, VAR_1->rx_dma_dir);
}
