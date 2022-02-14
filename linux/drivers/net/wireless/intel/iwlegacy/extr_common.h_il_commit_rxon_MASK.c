
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* commit_rxon ) (struct il_priv*) ;} ;


 int FUNC_0 (struct il_priv*) ;

__attribute__((used)) static inline int
FUNC_1(struct il_priv *VAR_0)
{
 return VAR_0->ops->commit_rxon(VAR_0);
}
