
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ snap; scalar_t__ ino; } ;
struct ceph_inode_info {int i_ceph_lock; TYPE_1__ i_vino; TYPE_2__* i_snap_realm; scalar_t__ i_max_bytes; scalar_t__ i_max_files; } ;
struct TYPE_4__ {scalar_t__ ino; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ceph_inode_info *VAR_1)
{
 bool VAR_2 = 0;
 FUNC_0(&VAR_1->i_ceph_lock);
 if ((VAR_1->i_max_files || VAR_1->i_max_bytes) &&
     VAR_1->i_vino.snap == VAR_0 &&
     VAR_1->i_snap_realm &&
     VAR_1->i_snap_realm->ino == VAR_1->i_vino.ino)
  VAR_2 = 1;
 FUNC_1(&VAR_1->i_ceph_lock);
 return VAR_2;
}
