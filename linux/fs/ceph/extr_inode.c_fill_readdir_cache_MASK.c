
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_data; } ;
struct dentry {int dummy; } ;
struct ceph_readdir_cache_control {unsigned int index; struct dentry** dentries; int page; } ;
struct ceph_mds_request {scalar_t__ r_dir_release_cnt; scalar_t__ r_dir_ordered_cnt; } ;
struct ceph_inode_info {int i_ordered_count; int i_release_count; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct ceph_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ceph_readdir_cache_control*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 struct dentry** FUNC_6 (int ) ;
 int FUNC_7 (struct dentry**,int ,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_2, struct dentry *VAR_3,
         struct ceph_readdir_cache_control *VAR_4,
         struct ceph_mds_request *VAR_5)
{
 struct ceph_inode_info *VAR_6 = FUNC_1(VAR_2);
 unsigned VAR_7 = VAR_1 / sizeof(struct dentry*);
 unsigned VAR_8 = VAR_4->index % VAR_7;
 pgoff_t VAR_9 = VAR_4->index / VAR_7;

 if (!VAR_4->page || VAR_9 != FUNC_8(VAR_4->page)) {
  FUNC_2(VAR_4);
  if (VAR_8 == 0)
   VAR_4->page = FUNC_5(&VAR_2->i_data, VAR_9);
  else
   VAR_4->page = FUNC_4(&VAR_2->i_data, VAR_9);
  if (!VAR_4->page) {
   VAR_4->index = -1;
   return VAR_8 == 0 ? -VAR_0 : 0;
  }


  FUNC_9(VAR_4->page);
  VAR_4->dentries = FUNC_6(VAR_4->page);
  if (VAR_8 == 0)
   FUNC_7(VAR_4->dentries, 0, VAR_1);
 }

 if (VAR_5->r_dir_release_cnt == FUNC_0(&VAR_6->i_release_count) &&
     VAR_5->r_dir_ordered_cnt == FUNC_0(&VAR_6->i_ordered_count)) {
  FUNC_3("readdir cache dn %p idx %d\n", VAR_3, VAR_4->index);
  VAR_4->dentries[VAR_8] = VAR_3;
  VAR_4->index++;
 } else {
  FUNC_3("disable readdir cache\n");
  VAR_4->index = -1;
 }
 return 0;
}
