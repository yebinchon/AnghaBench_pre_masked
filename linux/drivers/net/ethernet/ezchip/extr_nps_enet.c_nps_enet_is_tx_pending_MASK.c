
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nps_enet_priv {scalar_t__ tx_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nps_enet_priv*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct nps_enet_priv *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3, VAR_0);
 u32 VAR_5 = (VAR_4 & VAR_1) >> VAR_2;

 return (!VAR_5 && VAR_3->tx_skb);
}
