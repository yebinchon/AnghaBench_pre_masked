
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ltq_etop_priv {struct ltq_etop_chan* ch; } ;
struct ltq_etop_chan {int dma; int napi; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ltq_etop_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_1)
{
 struct ltq_etop_priv *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 FUNC_5(VAR_1);
 FUNC_6(VAR_1->phydev);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct ltq_etop_chan *VAR_4 = &VAR_2->ch[VAR_3];

  if (!FUNC_0(VAR_3) && !FUNC_1(VAR_3))
   continue;
  FUNC_3(&VAR_4->napi);
  FUNC_2(&VAR_4->dma);
 }
 return 0;
}
