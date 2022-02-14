
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev; } ;
struct moxart_mac_priv_t {int rx_buf_base; int tx_buf_base; int rx_base; scalar_t__ rx_desc_base; TYPE_1__* pdev; int tx_base; scalar_t__ tx_desc_base; int rx_buf_size; int * rx_mapping; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 struct moxart_mac_priv_t* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5)
{
 struct moxart_mac_priv_t *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  FUNC_1(&VAR_5->dev, VAR_6->rx_mapping[VAR_7],
     VAR_6->rx_buf_size, VAR_0);

 if (VAR_6->tx_desc_base)
  FUNC_0(&VAR_6->pdev->dev,
      VAR_4 * VAR_3,
      VAR_6->tx_desc_base, VAR_6->tx_base);

 if (VAR_6->rx_desc_base)
  FUNC_0(&VAR_6->pdev->dev,
      VAR_2 * VAR_1,
      VAR_6->rx_desc_base, VAR_6->rx_base);

 FUNC_2(VAR_6->tx_buf_base);
 FUNC_2(VAR_6->rx_buf_base);
}
