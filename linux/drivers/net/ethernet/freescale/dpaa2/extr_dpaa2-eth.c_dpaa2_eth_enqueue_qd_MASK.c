
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dpaa2_fd {int dummy; } ;
struct dpaa2_eth_priv {int tx_qdid; } ;
struct dpaa2_eth_fq {int tx_qdbin; TYPE_1__* channel; } ;
struct TYPE_2__ {int dpio; } ;


 int FUNC_0 (int ,int ,int ,int ,struct dpaa2_fd*) ;

__attribute__((used)) static inline int FUNC_1(struct dpaa2_eth_priv *VAR_0,
           struct dpaa2_eth_fq *VAR_1,
           struct dpaa2_fd *VAR_2, u8 VAR_3)
{
 return FUNC_0(VAR_1->channel->dpio,
        VAR_0->tx_qdid, VAR_3,
        VAR_1->tx_qdbin, VAR_2);
}
