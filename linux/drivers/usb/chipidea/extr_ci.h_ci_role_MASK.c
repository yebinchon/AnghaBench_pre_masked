
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_role_driver {int dummy; } ;
struct ci_hdrc {size_t role; struct ci_role_driver** roles; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;

__attribute__((used)) static inline struct ci_role_driver *FUNC_1(struct ci_hdrc *VAR_1)
{
 FUNC_0(VAR_1->role >= VAR_0 || !VAR_1->roles[VAR_1->role]);
 return VAR_1->roles[VAR_1->role];
}
