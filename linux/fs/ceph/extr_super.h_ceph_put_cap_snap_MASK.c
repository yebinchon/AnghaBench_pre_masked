
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_cap_snap {scalar_t__ xattr_blob; int nref; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ceph_cap_snap*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct ceph_cap_snap *VAR_0)
{
 if (FUNC_2(&VAR_0->nref)) {
  if (VAR_0->xattr_blob)
   FUNC_0(VAR_0->xattr_blob);
  FUNC_1(VAR_0);
 }
}
