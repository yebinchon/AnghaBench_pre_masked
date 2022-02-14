
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TCP_Server_Info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_credits ) (struct TCP_Server_Info*,int const) ;} ;


 int FUNC_0 (struct TCP_Server_Info*,int const) ;

__attribute__((used)) static inline void
FUNC_1(struct TCP_Server_Info *VAR_0, const int VAR_1)
{
 VAR_0->ops->set_credits(VAR_0, VAR_1);
}
