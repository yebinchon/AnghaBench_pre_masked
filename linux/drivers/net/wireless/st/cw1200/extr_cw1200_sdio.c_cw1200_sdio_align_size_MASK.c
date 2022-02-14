
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwbus_priv {int func; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ no_nptb; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (int ,size_t) ;

__attribute__((used)) static size_t FUNC_2(struct hwbus_priv *VAR_1, size_t VAR_2)
{
 if (VAR_1->pdata->no_nptb)
  VAR_2 = FUNC_0(VAR_2, VAR_0);
 else
  VAR_2 = FUNC_1(VAR_1->func, VAR_2);

 return VAR_2;
}
