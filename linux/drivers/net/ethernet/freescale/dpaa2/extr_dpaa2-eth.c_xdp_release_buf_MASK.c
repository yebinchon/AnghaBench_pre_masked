
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpaa2_eth_priv {int bpid; } ;
struct TYPE_2__ {scalar_t__ drop_cnt; int * drop_bufs; } ;
struct dpaa2_eth_channel {TYPE_1__ xdp; int buf_count; int dpio; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *,scalar_t__) ;
 int FUNC_2 (struct dpaa2_eth_priv*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct dpaa2_eth_priv *VAR_2,
       struct dpaa2_eth_channel *VAR_3,
       dma_addr_t VAR_4)
{
 int VAR_5;

 VAR_3->xdp.drop_bufs[VAR_3->xdp.drop_cnt++] = VAR_4;
 if (VAR_3->xdp.drop_cnt < VAR_0)
  return;

 while ((VAR_5 = FUNC_1(VAR_3->dpio, VAR_2->bpid,
            VAR_3->xdp.drop_bufs,
            VAR_3->xdp.drop_cnt)) == -VAR_1)
  FUNC_0();

 if (VAR_5) {
  FUNC_2(VAR_2, VAR_3->xdp.drop_bufs, VAR_3->xdp.drop_cnt);
  VAR_3->buf_count -= VAR_3->xdp.drop_cnt;
 }

 VAR_3->xdp.drop_cnt = 0;
}
