
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct nb8800_tx_desc {int dummy; } ;
struct nb8800_priv {scalar_t__ tx_desc_dma; TYPE_2__* tx_bufs; void* tx_descs; void* rx_bufs; void* rx_descs; scalar_t__ rx_desc_dma; } ;
struct TYPE_4__ {scalar_t__ dma_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ,scalar_t__*,int ) ;
 void* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct net_device*,unsigned int,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct nb8800_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6)
{
 struct nb8800_priv *VAR_7 = FUNC_5(VAR_6);
 unsigned int VAR_8 = VAR_2;
 unsigned int VAR_9 = VAR_4;
 unsigned int VAR_10;
 int VAR_11;

 VAR_7->rx_descs = FUNC_0(VAR_6->dev.parent, VAR_3,
         &VAR_7->rx_desc_dma, VAR_1);
 if (!VAR_7->rx_descs)
  goto err_out;

 VAR_7->rx_bufs = FUNC_1(VAR_8, sizeof(*VAR_7->rx_bufs), VAR_1);
 if (!VAR_7->rx_bufs)
  goto err_out;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_11 = FUNC_2(VAR_6, VAR_10, 0);
  if (VAR_11)
   goto err_out;
 }

 VAR_7->tx_descs = FUNC_0(VAR_6->dev.parent, VAR_5,
         &VAR_7->tx_desc_dma, VAR_1);
 if (!VAR_7->tx_descs)
  goto err_out;

 VAR_7->tx_bufs = FUNC_1(VAR_9, sizeof(*VAR_7->tx_bufs), VAR_1);
 if (!VAR_7->tx_bufs)
  goto err_out;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  VAR_7->tx_bufs[VAR_10].dma_desc =
   VAR_7->tx_desc_dma + VAR_10 * sizeof(struct nb8800_tx_desc);

 FUNC_4(VAR_6);

 return 0;

err_out:
 FUNC_3(VAR_6);

 return -VAR_0;
}
