
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct fid {scalar_t__ raw; } ;
struct dentry {int dummy; } ;
struct ceph_nfs_snapfh {int dummy; } ;
struct ceph_nfs_fh {int ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (struct super_block*,int ) ;
 struct dentry* FUNC_1 (struct super_block*,struct ceph_nfs_snapfh*,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static struct dentry *FUNC_3(struct super_block *VAR_3,
     struct fid *VAR_4,
     int VAR_5, int VAR_6)
{
 struct ceph_nfs_fh *VAR_7 = (void *)VAR_4->raw;

 if (VAR_6 == VAR_0) {
  struct ceph_nfs_snapfh *VAR_8 = (void *)VAR_4->raw;
  return FUNC_1(VAR_3, VAR_8, 0);
 }

 if (VAR_6 != VAR_1 &&
     VAR_6 != VAR_2)
  return ((void*)0);
 if (VAR_5 < sizeof(*VAR_7) / 4)
  return ((void*)0);

 FUNC_2("fh_to_dentry %llx\n", VAR_7->ino);
 return FUNC_0(VAR_3, VAR_7->ino);
}
