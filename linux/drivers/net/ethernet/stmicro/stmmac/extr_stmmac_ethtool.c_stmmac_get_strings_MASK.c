
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int rmon; int asp; } ;
struct stmmac_priv {TYPE_1__ dma_cap; int sstats; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {char const* stat_string; } ;
struct TYPE_5__ {char const* stat_string; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,int ) ;
 struct stmmac_priv* FUNC_2 (struct net_device*) ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (struct stmmac_priv*,int *,int,int *,char const**) ;
 int FUNC_4 (struct stmmac_priv*,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_6, u32 VAR_7, u8 *VAR_8)
{
 int VAR_9;
 u8 *VAR_10 = VAR_8;
 struct stmmac_priv *VAR_11 = FUNC_2(VAR_6);

 switch (VAR_7) {
 case 129:
  if (VAR_11->dma_cap.asp) {
   for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
    const char *VAR_12;
    if (!FUNC_3(VAR_11,
       &VAR_11->sstats, VAR_9,
       ((void*)0), &VAR_12)) {
     FUNC_1(VAR_10, VAR_12, VAR_0);
     VAR_10 += VAR_0;
    }
   }
  }
  if (VAR_11->dma_cap.rmon)
   for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
    FUNC_1(VAR_10, VAR_5[VAR_9].stat_string,
           VAR_0);
    VAR_10 += VAR_0;
   }
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
   FUNC_1(VAR_10, VAR_4[VAR_9].stat_string,
    VAR_0);
   VAR_10 += VAR_0;
  }
  break;
 case 128:
  FUNC_4(VAR_11, VAR_10);
  break;
 default:
  FUNC_0(1);
  break;
 }
}
