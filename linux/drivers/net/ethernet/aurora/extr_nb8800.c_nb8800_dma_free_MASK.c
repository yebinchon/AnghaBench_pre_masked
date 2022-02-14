
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct nb8800_priv {int * tx_descs; int tx_desc_dma; int * rx_descs; int rx_desc_dma; TYPE_2__* tx_bufs; TYPE_2__* rx_bufs; } ;
struct TYPE_4__ {int skb; scalar_t__ page; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 struct nb8800_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4)
{
 struct nb8800_priv *VAR_5 = FUNC_3(VAR_4);
 unsigned int VAR_6;

 if (VAR_5->rx_bufs) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   if (VAR_5->rx_bufs[VAR_6].page)
    FUNC_4(VAR_5->rx_bufs[VAR_6].page);

  FUNC_1(VAR_5->rx_bufs);
  VAR_5->rx_bufs = ((void*)0);
 }

 if (VAR_5->tx_bufs) {
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
   FUNC_2(VAR_5->tx_bufs[VAR_6].skb);

  FUNC_1(VAR_5->tx_bufs);
  VAR_5->tx_bufs = ((void*)0);
 }

 if (VAR_5->rx_descs) {
  FUNC_0(VAR_4->dev.parent, VAR_1, VAR_5->rx_descs,
      VAR_5->rx_desc_dma);
  VAR_5->rx_descs = ((void*)0);
 }

 if (VAR_5->tx_descs) {
  FUNC_0(VAR_4->dev.parent, VAR_3, VAR_5->tx_descs,
      VAR_5->tx_desc_dma);
  VAR_5->tx_descs = ((void*)0);
 }
}
