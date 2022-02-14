
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int dev; } ;
struct stmmac_packet_attrs {int dst; int src; int ip_dst; int ip_src; } ;
struct sk_buff {int dev; int pkt_type; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ,int ,int ,int ,int ,int *,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct stmmac_priv *VAR_3,
            struct stmmac_packet_attrs *VAR_4)
{
 __be32 VAR_5 = FUNC_1(VAR_4->ip_src);
 __be32 VAR_6 = FUNC_1(VAR_4->ip_dst);
 struct sk_buff *VAR_7 = ((void*)0);

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_6, VAR_3->dev, VAR_5,
    ((void*)0), VAR_4->src, VAR_4->dst);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->pkt_type = VAR_2;
 VAR_7->dev = VAR_3->dev;

 return VAR_7;
}
