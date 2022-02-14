
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ci_hdrc {int role; TYPE_1__** roles; } ;
typedef enum ci_role { ____Placeholder_ci_role } ci_role ;
struct TYPE_2__ {int (* stop ) (struct ci_hdrc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ci_hdrc*) ;

__attribute__((used)) static inline void FUNC_1(struct ci_hdrc *VAR_1)
{
 enum ci_role VAR_2 = VAR_1->role;

 if (VAR_2 == VAR_0)
  return;

 VAR_1->role = VAR_0;

 VAR_1->roles[VAR_2]->stop(VAR_1);
}
