
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ceph_inode_info {int i_cap_wq; int i_ceph_lock; int i_ceph_flags; scalar_t__ i_requested_max_size; scalar_t__ i_wanted_max_size; } ;
struct ceph_cap {scalar_t__ cap_gen; int mds_wanted; int implemented; int issued; TYPE_1__* session; } ;
struct TYPE_2__ {scalar_t__ s_cap_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct ceph_inode_info*) ;
 struct ceph_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5, struct ceph_cap *VAR_6,
         void *VAR_7)
{
 struct ceph_inode_info *VAR_8 = FUNC_1(VAR_5);
 unsigned long VAR_9 = (unsigned long)VAR_7;

 if (VAR_9 == VAR_3) {
  FUNC_2(&VAR_8->i_ceph_lock);
  VAR_8->i_wanted_max_size = 0;
  VAR_8->i_requested_max_size = 0;
  FUNC_3(&VAR_8->i_ceph_lock);
 } else if (VAR_9 == VAR_4) {
  if (VAR_6->cap_gen < VAR_6->session->s_cap_gen) {

   FUNC_2(&VAR_8->i_ceph_lock);
   VAR_6->issued = VAR_6->implemented = VAR_0;

   if (FUNC_0(VAR_8) & ~VAR_6->mds_wanted)
    VAR_8->i_ceph_flags |= VAR_1;
   FUNC_3(&VAR_8->i_ceph_lock);
  }
 } else if (VAR_9 == VAR_2) {
 }
 FUNC_4(&VAR_8->i_cap_wq);
 return 0;
}
