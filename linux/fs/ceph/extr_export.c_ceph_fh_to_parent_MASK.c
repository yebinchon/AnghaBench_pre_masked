
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct fid {scalar_t__ raw; } ;
struct dentry {int dummy; } ;
struct ceph_nfs_snapfh {int dummy; } ;
struct ceph_nfs_confh {int parent_ino; int ino; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_1 (struct super_block*,int ) ;
 struct dentry* FUNC_2 (struct super_block*,int *,int ) ;
 struct dentry* FUNC_3 (struct super_block*,struct ceph_nfs_snapfh*,int) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct dentry *FUNC_6(struct super_block *VAR_3,
     struct fid *VAR_4,
     int VAR_5, int VAR_6)
{
 struct ceph_nfs_confh *VAR_7 = (void *)VAR_4->raw;
 struct dentry *VAR_8;

 if (VAR_6 == VAR_1) {
  struct ceph_nfs_snapfh *VAR_9 = (void *)VAR_4->raw;
  return FUNC_3(VAR_3, VAR_9, 1);
 }

 if (VAR_6 != VAR_2)
  return ((void*)0);
 if (VAR_5 < sizeof(*VAR_7) / 4)
  return ((void*)0);

 FUNC_4("fh_to_parent %llx\n", VAR_7->parent_ino);
 VAR_8 = FUNC_2(VAR_3, ((void*)0), VAR_7->ino);
 if (FUNC_5(VAR_8 == FUNC_0(-VAR_0)))
  VAR_8 = FUNC_1(VAR_3, VAR_7->parent_ino);
 return VAR_8;
}
