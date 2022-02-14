
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int pkt_type; int dev; } ;
struct rmnet_priv {int gro_cells; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 struct rmnet_priv* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static void
FUNC_6(struct sk_buff *VAR_1)
{
 struct rmnet_priv *VAR_2 = FUNC_1(VAR_1->dev);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1, VAR_1->dev);

 VAR_1->pkt_type = VAR_0;
 FUNC_5(VAR_1, 0);
 FUNC_0(&VAR_2->gro_cells, VAR_1);
}
