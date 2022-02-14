
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct nb8800_tx_buf {int dma_desc; int chain_len; int ready; } ;
struct nb8800_priv {size_t tx_queue; struct nb8800_tx_buf* tx_bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nb8800_priv*,int ) ;
 int FUNC_1 (struct nb8800_priv*,int ,int) ;
 struct nb8800_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4)
{
 struct nb8800_priv *VAR_5 = FUNC_2(VAR_4);
 struct nb8800_tx_buf *VAR_6;
 u32 VAR_7;

 VAR_6 = &VAR_5->tx_bufs[VAR_5->tx_queue];
 if (!VAR_6->ready)
  return;

 VAR_7 = FUNC_0(VAR_5, VAR_0);
 if (VAR_7 & VAR_2)
  return;

 FUNC_1(VAR_5, VAR_1, VAR_6->dma_desc);
 FUNC_3();
 FUNC_1(VAR_5, VAR_0, VAR_7 | VAR_2);

 VAR_5->tx_queue = (VAR_5->tx_queue + VAR_6->chain_len) % VAR_3;
}
