
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_role_driver {int dummy; } ;
struct cdns3 {size_t role; struct cdns3_role_driver** roles; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline
struct cdns3_role_driver *FUNC_1(struct cdns3 *VAR_0)
{
 FUNC_0(!VAR_0->roles[VAR_0->role]);
 return VAR_0->roles[VAR_0->role];
}
