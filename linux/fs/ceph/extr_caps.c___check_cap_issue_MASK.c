
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_mode; } ;
struct ceph_inode_info {TYPE_1__ vfs_inode; int i_shared_gen; int i_rdcache_gen; } ;
struct ceph_cap {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct ceph_inode_info*,int *) ;
 int FUNC_2 (struct ceph_inode_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct ceph_inode_info *VAR_3, struct ceph_cap *VAR_4,
         unsigned VAR_5)
{
 unsigned VAR_6 = FUNC_1(VAR_3, ((void*)0));





 if ((VAR_5 & (VAR_0|VAR_1)) &&
     (VAR_6 & (VAR_0|VAR_1)) == 0) {
  VAR_3->i_rdcache_gen++;
 }







 if ((VAR_5 & VAR_2) != (VAR_6 & VAR_2)) {
  if (VAR_5 & VAR_2)
   FUNC_3(&VAR_3->i_shared_gen);
  if (FUNC_0(VAR_3->vfs_inode.i_mode)) {
   FUNC_4(" marking %p NOT complete\n", &VAR_3->vfs_inode);
   FUNC_2(VAR_3);
  }
 }
}
