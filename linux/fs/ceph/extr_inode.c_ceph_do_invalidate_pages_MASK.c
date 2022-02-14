
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct inode {int i_mapping; } ;
struct ceph_inode_info {scalar_t__ i_rdcache_gen; scalar_t__ i_rdcache_revoking; int i_truncate_mutex; int i_ceph_lock; } ;
struct ceph_fs_client {int mount_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ceph_inode_info*,int *,int ) ;
 int FUNC_2 (struct ceph_inode_info*,int ,int *) ;
 int FUNC_3 (struct inode*) ;
 struct ceph_inode_info* FUNC_4 (struct inode*) ;
 struct ceph_fs_client* FUNC_5 (struct inode*) ;
 int FUNC_6 (char*,struct inode*,scalar_t__,...) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,struct inode*) ;
 int FUNC_12 (char*,struct inode*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct inode*,int ) ;

__attribute__((used)) static void FUNC_16(struct inode *VAR_3)
{
 struct ceph_inode_info *VAR_4 = FUNC_4(VAR_3);
 struct ceph_fs_client *VAR_5 = FUNC_5(VAR_3);
 u32 VAR_6;
 int VAR_7 = 0;

 FUNC_9(&VAR_4->i_truncate_mutex);

 if (FUNC_0(VAR_5->mount_state) == VAR_1) {
  FUNC_12("invalidate_pages %p %lld forced umount\n",
        VAR_3, FUNC_3(VAR_3));
  FUNC_8(VAR_3->i_mapping, -VAR_2);
  FUNC_15(VAR_3, 0);
  FUNC_10(&VAR_4->i_truncate_mutex);
  goto out;
 }

 FUNC_13(&VAR_4->i_ceph_lock);
 FUNC_6("invalidate_pages %p gen %d revoking %d\n", VAR_3,
      VAR_4->i_rdcache_gen, VAR_4->i_rdcache_revoking);
 if (VAR_4->i_rdcache_revoking != VAR_4->i_rdcache_gen) {
  if (FUNC_1(VAR_4, ((void*)0), VAR_0))
   VAR_7 = 1;
  FUNC_14(&VAR_4->i_ceph_lock);
  FUNC_10(&VAR_4->i_truncate_mutex);
  goto out;
 }
 VAR_6 = VAR_4->i_rdcache_gen;
 FUNC_14(&VAR_4->i_ceph_lock);

 if (FUNC_7(VAR_3->i_mapping) < 0) {
  FUNC_11("invalidate_pages %p fails\n", VAR_3);
 }

 FUNC_13(&VAR_4->i_ceph_lock);
 if (VAR_6 == VAR_4->i_rdcache_gen &&
     VAR_6 == VAR_4->i_rdcache_revoking) {
  FUNC_6("invalidate_pages %p gen %d successful\n", VAR_3,
       VAR_4->i_rdcache_gen);
  VAR_4->i_rdcache_revoking--;
  VAR_7 = 1;
 } else {
  FUNC_6("invalidate_pages %p gen %d raced, now %d revoking %d\n",
       VAR_3, VAR_6, VAR_4->i_rdcache_gen,
       VAR_4->i_rdcache_revoking);
  if (FUNC_1(VAR_4, ((void*)0), VAR_0))
   VAR_7 = 1;
 }
 FUNC_14(&VAR_4->i_ceph_lock);
 FUNC_10(&VAR_4->i_truncate_mutex);
out:
 if (VAR_7)
  FUNC_2(VAR_4, 0, ((void*)0));
}
