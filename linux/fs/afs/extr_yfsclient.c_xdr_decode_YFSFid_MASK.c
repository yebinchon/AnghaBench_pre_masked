
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unique; int hi; int lo; } ;
struct yfs_xdr_YFSFid {TYPE_1__ vnode; int volume; } ;
struct afs_fid {void* unique; void* vnode_hi; void* vnode; void* vid; } ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct yfs_xdr_YFSFid const*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const __be32 **VAR_0, struct afs_fid *VAR_1)
{
 const struct yfs_xdr_YFSFid *VAR_2 = (const void *)*VAR_0;

 VAR_1->vid = FUNC_2(VAR_2->volume);
 VAR_1->vnode = FUNC_2(VAR_2->vnode.lo);
 VAR_1->vnode_hi = FUNC_0(VAR_2->vnode.hi);
 VAR_1->unique = FUNC_0(VAR_2->vnode.unique);
 *VAR_0 += FUNC_1(VAR_2);
}
