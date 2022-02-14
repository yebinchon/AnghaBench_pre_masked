
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct buffer_state {int * skb; } ;
struct arc_emac_priv {struct buffer_state* tx_buff; struct arc_emac_bd* txbd; } ;
struct arc_emac_bd {scalar_t__ data; scalar_t__ info; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct buffer_state*,int ) ;
 int FUNC_2 (struct buffer_state*,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_3 ;
 struct arc_emac_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4)
{
 struct arc_emac_priv *VAR_5 = FUNC_4(VAR_4);
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct arc_emac_bd *VAR_7 = &VAR_5->txbd[VAR_6];
  struct buffer_state *VAR_8 = &VAR_5->tx_buff[VAR_6];

  if (VAR_8->skb) {
   FUNC_3(&VAR_4->dev,
      FUNC_1(VAR_8, VAR_2),
      FUNC_2(VAR_8, VAR_3),
      VAR_0);


   FUNC_0(VAR_8->skb);
  }

  VAR_7->info = 0;
  VAR_7->data = 0;
  VAR_8->skb = ((void*)0);
 }
}
