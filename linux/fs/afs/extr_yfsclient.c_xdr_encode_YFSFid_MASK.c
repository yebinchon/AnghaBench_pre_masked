
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* unique; void* hi; void* lo; } ;
struct yfs_xdr_YFSFid {TYPE_1__ vnode; void* volume; } ;
struct afs_fid {int unique; int vnode_hi; int vnode; int vid; } ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct yfs_xdr_YFSFid*) ;

__attribute__((used)) static __be32 *FUNC_3(__be32 *VAR_0, struct afs_fid *VAR_1)
{
 struct yfs_xdr_YFSFid *VAR_2 = (void *)VAR_0;

 VAR_2->volume = FUNC_1(VAR_1->vid);
 VAR_2->vnode.lo = FUNC_1(VAR_1->vnode);
 VAR_2->vnode.hi = FUNC_0(VAR_1->vnode_hi);
 VAR_2->vnode.unique = FUNC_0(VAR_1->unique);
 return VAR_0 + FUNC_2(VAR_2);
}
