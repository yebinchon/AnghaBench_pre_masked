
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_kobj {int kobject; int complete; } ;
struct kobj_type {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct kobj_type*,int *,char*,char const*) ;

__attribute__((used)) static inline int
FUNC_2(
 struct xfs_kobj *VAR_0,
 struct kobj_type *VAR_1,
 struct xfs_kobj *VAR_2,
 const char *VAR_3)
{
 FUNC_0(&VAR_0->complete);
 return FUNC_1(&VAR_0->kobject, VAR_1,
        &VAR_2->kobject, "%s", VAR_3);
}
