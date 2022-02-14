
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_kobj {int complete; } ;
struct kobject {int dummy; } ;


 int FUNC_0 (int *) ;
 struct xfs_kobj* FUNC_1 (struct kobject*) ;

__attribute__((used)) static inline void
FUNC_2(struct kobject *VAR_0)
{
 struct xfs_kobj *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(&VAR_1->complete);
}
