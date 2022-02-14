
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cw1200_common {int hw; int hwbus_priv; TYPE_1__* hwbus_ops; } ;
struct TYPE_2__ {int (* unlock ) (int ) ;int (* lock ) (int ) ;} ;


 int FUNC_0 (struct cw1200_common*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct cw1200_common *VAR_0)
{

 VAR_0->hwbus_ops->lock(VAR_0->hwbus_priv);
 FUNC_0(VAR_0, 0);
 VAR_0->hwbus_ops->unlock(VAR_0->hwbus_priv);


 FUNC_2(VAR_0->hw);
 FUNC_1(VAR_0->hw);
 return;
}
