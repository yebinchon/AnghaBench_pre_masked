
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_credits {int dummy; } ;
struct TCP_Server_Info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* adjust_credits ) (struct TCP_Server_Info*,struct cifs_credits*,unsigned int const) ;} ;


 int FUNC_0 (struct TCP_Server_Info*,struct cifs_credits*,unsigned int const) ;

__attribute__((used)) static inline int
FUNC_1(struct TCP_Server_Info *VAR_0, struct cifs_credits *VAR_1,
        const unsigned int VAR_2)
{
 return VAR_0->ops->adjust_credits ?
  VAR_0->ops->adjust_credits(VAR_0, VAR_1, VAR_2) : 0;
}
