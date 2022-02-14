
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {int state; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop_device ) (struct iwl_trans*) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct iwl_trans*) ;

__attribute__((used)) static inline void FUNC_2(struct iwl_trans *VAR_1)
{
 FUNC_0();

 VAR_1->ops->stop_device(VAR_1);

 VAR_1->state = VAR_0;
}
