
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int key; int * table; } ;
struct stmmac_priv {TYPE_1__ rss; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 struct stmmac_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, u32 *VAR_2, u8 *VAR_3,
      u8 *VAR_4)
{
 struct stmmac_priv *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 if (VAR_2) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->rss.table); VAR_6++)
   VAR_2[VAR_6] = VAR_5->rss.table[VAR_6];
 }

 if (VAR_3)
  FUNC_1(VAR_3, VAR_5->rss.key, sizeof(VAR_5->rss.key));
 if (VAR_4)
  *VAR_4 = VAR_0;

 return 0;
}
