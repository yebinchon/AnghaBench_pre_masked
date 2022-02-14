
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* txq_free ) (struct iwl_trans*,int) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct iwl_trans*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct iwl_trans *VAR_0, int VAR_1)
{
 if (FUNC_0(!VAR_0->ops->txq_free))
  return;

 VAR_0->ops->txq_free(VAR_0, VAR_1);
}
