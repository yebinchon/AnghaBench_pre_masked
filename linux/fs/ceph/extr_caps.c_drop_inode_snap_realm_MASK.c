
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ceph_snap_realm {scalar_t__ ino; int inodes_with_caps_lock; int * inode; } ;
struct TYPE_5__ {int i_sb; } ;
struct TYPE_4__ {scalar_t__ ino; } ;
struct ceph_inode_info {TYPE_2__ vfs_inode; TYPE_1__ i_vino; struct ceph_snap_realm* i_snap_realm; int i_snap_realm_counter; int i_snap_realm_item; } ;
struct TYPE_6__ {int mdsc; } ;


 int FUNC_0 (int ,struct ceph_snap_realm*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ceph_inode_info *VAR_0)
{
 struct ceph_snap_realm *VAR_1 = VAR_0->i_snap_realm;
 FUNC_3(&VAR_1->inodes_with_caps_lock);
 FUNC_2(&VAR_0->i_snap_realm_item);
 VAR_0->i_snap_realm_counter++;
 VAR_0->i_snap_realm = ((void*)0);
 if (VAR_1->ino == VAR_0->i_vino.ino)
  VAR_1->inode = ((void*)0);
 FUNC_4(&VAR_1->inodes_with_caps_lock);
 FUNC_0(FUNC_1(VAR_0->vfs_inode.i_sb)->mdsc,
       VAR_1);
}
