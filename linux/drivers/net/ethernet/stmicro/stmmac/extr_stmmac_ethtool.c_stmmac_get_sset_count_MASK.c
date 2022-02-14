
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int asp; int rmon; } ;
struct stmmac_priv {int sstats; TYPE_1__ dma_cap; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct stmmac_priv*,int *,int,int *,int *) ;
 int FUNC_2 (struct stmmac_priv*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, int VAR_5)
{
 struct stmmac_priv *VAR_6 = FUNC_0(VAR_4);
 int VAR_7, VAR_8, VAR_9 = 0;

 switch (VAR_5) {
 case 129:
  VAR_8 = VAR_3;

  if (VAR_6->dma_cap.rmon)
   VAR_8 += VAR_1;
  if (VAR_6->dma_cap.asp) {
   for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
    if (!FUNC_1(VAR_6,
       &VAR_6->sstats, VAR_7,
       ((void*)0), ((void*)0)))
     VAR_9++;
   }

   VAR_8 += VAR_9;
  }

  return VAR_8;
 case 128:
  return FUNC_2(VAR_6);
 default:
  return -VAR_0;
 }
}
