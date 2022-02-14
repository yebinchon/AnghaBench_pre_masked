
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct emac_priv {int rx_buf_size; int ndev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct emac_priv *VAR_1)
{
 struct sk_buff *VAR_2 = FUNC_1(VAR_1->ndev, VAR_1->rx_buf_size);
 if (FUNC_0(!VAR_2))
  return ((void*)0);
 FUNC_2(VAR_2, VAR_0);
 return VAR_2;
}
