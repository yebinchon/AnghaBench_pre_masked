
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* suspend ) (struct iwl_trans*) ;} ;


 int FUNC_0 (struct iwl_trans*) ;

__attribute__((used)) static inline int FUNC_1(struct iwl_trans *VAR_0)
{
 if (!VAR_0->ops->suspend)
  return 0;

 return VAR_0->ops->suspend(VAR_0);
}
