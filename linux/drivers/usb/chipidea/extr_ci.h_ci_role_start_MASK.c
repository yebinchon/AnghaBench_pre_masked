
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ci_hdrc {int role; TYPE_1__** roles; } ;
typedef enum ci_role { ____Placeholder_ci_role } ci_role ;
struct TYPE_2__ {int (* start ) (struct ci_hdrc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ci_hdrc*) ;

__attribute__((used)) static inline int FUNC_1(struct ci_hdrc *VAR_3, enum ci_role VAR_4)
{
 int VAR_5;

 if (VAR_4 >= VAR_0)
  return -VAR_1;

 if (!VAR_3->roles[VAR_4])
  return -VAR_2;

 VAR_5 = VAR_3->roles[VAR_4]->start(VAR_3);
 if (!VAR_5)
  VAR_3->role = VAR_4;
 return VAR_5;
}
