
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alx_priv {int num_napi; int dev; TYPE_1__** qnapi; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct alx_priv *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0->dev);
 for (VAR_1 = 0; VAR_1 < VAR_0->num_napi; VAR_1++)
  FUNC_0(&VAR_0->qnapi[VAR_1]->napi);
 FUNC_1(VAR_0->dev);
}
