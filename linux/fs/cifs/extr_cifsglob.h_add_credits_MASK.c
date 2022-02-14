
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_credits {int dummy; } ;
struct TCP_Server_Info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* add_credits ) (struct TCP_Server_Info*,struct cifs_credits const*,int const) ;} ;


 int FUNC_0 (struct TCP_Server_Info*,struct cifs_credits const*,int const) ;

__attribute__((used)) static inline void
FUNC_1(struct TCP_Server_Info *VAR_0, const struct cifs_credits *VAR_1,
     const int VAR_2)
{
 VAR_0->ops->add_credits(VAR_0, VAR_1, VAR_2);
}
