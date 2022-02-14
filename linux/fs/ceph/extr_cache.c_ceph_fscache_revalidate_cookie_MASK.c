
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_inode_info {int i_truncate_mutex; int i_ceph_lock; int i_rdcache_gen; int i_fscache_gen; int fscache; int i_vino; } ;


 scalar_t__ FUNC_0 (struct ceph_inode_info*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ceph_inode_info *VAR_0)
{
 if (FUNC_0(VAR_0))
  return;



 FUNC_3(&VAR_0->i_truncate_mutex);
 if (!FUNC_0(VAR_0)) {
  if (FUNC_1(VAR_0->fscache, &VAR_0->i_vino))
   FUNC_2(VAR_0->fscache);
  FUNC_5(&VAR_0->i_ceph_lock);
  VAR_0->i_fscache_gen = VAR_0->i_rdcache_gen;
  FUNC_6(&VAR_0->i_ceph_lock);
 }
 FUNC_4(&VAR_0->i_truncate_mutex);
}
