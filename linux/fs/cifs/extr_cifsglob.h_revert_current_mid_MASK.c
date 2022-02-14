
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TCP_Server_Info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* revert_current_mid ) (struct TCP_Server_Info*,unsigned int const) ;} ;


 int FUNC_0 (struct TCP_Server_Info*,unsigned int const) ;

__attribute__((used)) static inline void
FUNC_1(struct TCP_Server_Info *VAR_0, const unsigned int VAR_1)
{
 if (VAR_0->ops->revert_current_mid)
  VAR_0->ops->revert_current_mid(VAR_0, VAR_1);
}
