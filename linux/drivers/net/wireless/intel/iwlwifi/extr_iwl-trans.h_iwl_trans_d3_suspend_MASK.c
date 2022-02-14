
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* d3_suspend ) (struct iwl_trans*,int,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct iwl_trans*,int,int) ;

__attribute__((used)) static inline int FUNC_2(struct iwl_trans *VAR_0, bool VAR_1,
           bool VAR_2)
{
 FUNC_0();
 if (!VAR_0->ops->d3_suspend)
  return 0;

 return VAR_0->ops->d3_suspend(VAR_0, VAR_1, VAR_2);
}
