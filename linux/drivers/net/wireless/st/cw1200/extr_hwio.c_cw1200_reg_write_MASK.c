
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cw1200_common {int hwbus_priv; TYPE_1__* hwbus_ops; } ;
struct TYPE_2__ {int (* unlock ) (int ) ;int (* lock ) (int ) ;} ;


 int FUNC_0 (struct cw1200_common*,int ,void const*,size_t,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct cw1200_common *VAR_0, u16 VAR_1, const void *VAR_2,
   size_t VAR_3)
{
 int VAR_4;
 VAR_0->hwbus_ops->lock(VAR_0->hwbus_priv);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0);
 VAR_0->hwbus_ops->unlock(VAR_0->hwbus_priv);
 return VAR_4;
}
