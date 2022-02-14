
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stmmac_priv {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int,char*) ;
 int FUNC_1 (struct stmmac_priv*) ;
 TYPE_1__* VAR_1 ;

void FUNC_2(struct stmmac_priv *VAR_2, u8 *VAR_3)
{
 u8 *VAR_4 = VAR_3;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_2); VAR_5++) {
  FUNC_0(VAR_4, VAR_0, "%2d. %s", VAR_5 + 1,
    VAR_1[VAR_5].name);
  VAR_4 += VAR_0;
 }
}
