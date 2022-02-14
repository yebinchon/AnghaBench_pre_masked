
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltq_etop_priv {TYPE_1__* ch; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_1(int VAR_2, void *VAR_3)
{
 struct ltq_etop_priv *VAR_4 = VAR_3;
 int VAR_5 = VAR_2 - VAR_1;

 FUNC_0(&VAR_4->ch[VAR_5].napi);
 return VAR_0;
}
