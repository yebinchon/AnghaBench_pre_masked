
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int supported; int advertising; scalar_t__ duplex; scalar_t__ speed; int autoneg; } ;
struct net_device {struct phy_device* phydev; int dev; } ;
struct buffer_state {TYPE_1__* skb; } ;
struct arc_emac_priv {unsigned int last_rx_bd; int napi; scalar_t__ txbd_dma; scalar_t__ rxbd_dma; int txbd; scalar_t__ txbd_dirty; scalar_t__ txbd_curr; struct buffer_state* rx_buff; struct arc_emac_bd* rxbd; } ;
struct arc_emac_bd {void* info; void* data; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct arc_emac_priv*,int ,int ) ;
 int FUNC_1 (struct arc_emac_priv*,int ,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,void*,int,int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (struct buffer_state*,int,int) ;
 int FUNC_7 (struct buffer_state*,int ,int) ;
 int VAR_20 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (struct net_device*,int) ;
 int FUNC_12 (struct net_device*,char*) ;
 struct arc_emac_priv* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct phy_device*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(struct net_device *VAR_21)
{
 struct arc_emac_priv *VAR_22 = FUNC_13(VAR_21);
 struct phy_device *VAR_23 = VAR_21->phydev;
 int VAR_24;

 VAR_23->autoneg = VAR_0;
 VAR_23->speed = 0;
 VAR_23->duplex = 0;
 FUNC_8(VAR_23->advertising, VAR_23->advertising,
       VAR_23->supported);

 VAR_22->last_rx_bd = 0;


 for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++) {
  dma_addr_t VAR_25;
  unsigned int *VAR_26 = &VAR_22->last_rx_bd;
  struct arc_emac_bd *VAR_27 = &VAR_22->rxbd[*VAR_26];
  struct buffer_state *VAR_28 = &VAR_22->rx_buff[*VAR_26];

  VAR_28->skb = FUNC_11(VAR_21,
        VAR_2);
  if (FUNC_16(!VAR_28->skb))
   return -VAR_3;

  VAR_25 = FUNC_4(&VAR_21->dev, (void *)VAR_28->skb->data,
          VAR_2, VAR_1);
  if (FUNC_5(&VAR_21->dev, VAR_25)) {
   FUNC_12(VAR_21, "cannot dma map\n");
   FUNC_3(VAR_28->skb);
   return -VAR_3;
  }
  FUNC_6(VAR_28, VAR_25, VAR_25);
  FUNC_7(VAR_28, VAR_20, VAR_2);

  VAR_27->data = FUNC_2(VAR_25);


  FUNC_17();


  VAR_27->info = FUNC_2(VAR_6 | VAR_2);

  *VAR_26 = (*VAR_26 + 1) % VAR_9;
 }

 VAR_22->txbd_curr = 0;
 VAR_22->txbd_dirty = 0;


 FUNC_9(VAR_22->txbd, 0, VAR_19);


 FUNC_1(VAR_22, VAR_13, 0);
 FUNC_1(VAR_22, VAR_12, 0);


 FUNC_1(VAR_22, VAR_14, (unsigned int)VAR_22->rxbd_dma);
 FUNC_1(VAR_22, VAR_15, (unsigned int)VAR_22->txbd_dma);


 FUNC_1(VAR_22, VAR_11, VAR_7 | VAR_16 | VAR_5);


 FUNC_1(VAR_22, VAR_10,
      (VAR_9 << 24) |
      (VAR_18 << 16) |
      VAR_17 | VAR_8);

 FUNC_10(&VAR_22->napi);


 FUNC_0(VAR_22, VAR_10, VAR_4);

 FUNC_15(VAR_21->phydev);

 FUNC_14(VAR_21);

 return 0;
}
