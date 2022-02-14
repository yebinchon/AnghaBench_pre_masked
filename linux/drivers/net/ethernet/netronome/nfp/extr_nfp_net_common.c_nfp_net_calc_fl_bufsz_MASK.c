
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;
struct nfp_net_dp {scalar_t__ rx_offset; scalar_t__ mtu; scalar_t__ rx_dma_off; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 int VAR_4 ;

__attribute__((used)) static unsigned int
FUNC_1(struct nfp_net_dp *VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = VAR_3;
 VAR_6 += VAR_5->rx_dma_off;
 if (VAR_5->rx_offset == VAR_1)
  VAR_6 += VAR_2;
 else
  VAR_6 += VAR_5->rx_offset;
 VAR_6 += VAR_0 + VAR_4 * 2 + VAR_5->mtu;

 VAR_6 = FUNC_0(VAR_6);
 VAR_6 += FUNC_0(sizeof(struct skb_shared_info));

 return VAR_6;
}
