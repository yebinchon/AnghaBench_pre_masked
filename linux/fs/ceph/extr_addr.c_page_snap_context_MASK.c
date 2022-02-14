
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ private; } ;
typedef void ceph_snap_context ;


 scalar_t__ FUNC_0 (struct page*) ;

__attribute__((used)) static inline struct ceph_snap_context *FUNC_1(struct page *VAR_0)
{
 if (FUNC_0(VAR_0))
  return (void *)VAR_0->private;
 return ((void*)0);
}
