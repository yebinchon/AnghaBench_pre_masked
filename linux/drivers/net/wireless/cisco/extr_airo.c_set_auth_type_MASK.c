
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int authType; } ;
struct airo_info {int last_auth; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct airo_info *VAR_2, int VAR_3)
{
 VAR_2->config.authType = VAR_3;



 if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
  VAR_2->last_auth = VAR_3;
}
