
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hip04_priv {int napi; scalar_t__ phy; int * rx_phys; int dev; int * rx_buf; scalar_t__ tx_tail; scalar_t__ tx_head; scalar_t__ rx_cnt_remaining; scalar_t__ rx_head; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct hip04_priv*) ;
 int FUNC_4 (struct hip04_priv*,int ) ;
 int FUNC_5 (int *) ;
 struct hip04_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_4)
{
 struct hip04_priv *VAR_5 = FUNC_6(VAR_4);
 int VAR_6;

 VAR_5->rx_head = 0;
 VAR_5->rx_cnt_remaining = 0;
 VAR_5->tx_head = 0;
 VAR_5->tx_tail = 0;
 FUNC_3(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  dma_addr_t VAR_7;

  VAR_7 = FUNC_0(VAR_5->dev, VAR_5->rx_buf[VAR_6],
          VAR_2, VAR_0);
  if (FUNC_1(VAR_5->dev, VAR_7))
   return -VAR_1;

  VAR_5->rx_phys[VAR_6] = VAR_7;
  FUNC_4(VAR_5, VAR_7);
 }

 if (VAR_5->phy)
  FUNC_9(VAR_5->phy);

 FUNC_7(VAR_4);
 FUNC_8(VAR_4);
 FUNC_2(VAR_4);
 FUNC_5(&VAR_5->napi);

 return 0;
}
