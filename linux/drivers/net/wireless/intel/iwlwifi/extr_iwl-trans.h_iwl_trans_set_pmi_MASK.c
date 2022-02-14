
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_pmi ) (struct iwl_trans*,int) ;} ;


 int FUNC_0 (struct iwl_trans*,int) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_trans *VAR_0, bool VAR_1)
{
 if (VAR_0->ops->set_pmi)
  VAR_0->ops->set_pmi(VAR_0, VAR_1);
}
