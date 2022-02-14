
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int i_data; } ;
struct dentry {int d_lockref; int d_lock; } ;
struct ceph_readdir_cache_control {int index; struct dentry** dentries; int page; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ceph_readdir_cache_control*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 struct dentry** FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static struct dentry *
FUNC_15(struct dentry *VAR_3, u64 VAR_4,
   struct ceph_readdir_cache_control *VAR_5)
{
 struct inode *VAR_6 = FUNC_3(VAR_3);
 struct dentry *VAR_7;
 unsigned VAR_8 = (VAR_2 / sizeof(struct dentry *)) - 1;
 loff_t VAR_9 = VAR_4 * sizeof(struct dentry *);
 pgoff_t VAR_10 = VAR_9 >> VAR_1;

 if (VAR_9 >= FUNC_6(VAR_6))
  return ((void*)0);

 if (!VAR_5->page || VAR_10 != FUNC_9(VAR_5->page)) {
  FUNC_2(VAR_5);
  VAR_5->page = FUNC_5(&VAR_6->i_data, VAR_10);
  if (!VAR_5->page) {
   FUNC_4(" page %lu not found\n", VAR_10);
   return FUNC_0(-VAR_0);
  }


  FUNC_14(VAR_5->page);
  VAR_5->dentries = FUNC_7(VAR_5->page);
 }

 VAR_5->index = VAR_4 & VAR_8;

 FUNC_10();
 FUNC_12(&VAR_3->d_lock);


 if (FUNC_1(VAR_6) && VAR_9 < FUNC_6(VAR_6))
  VAR_7 = VAR_5->dentries[VAR_5->index];
 else
  VAR_7 = ((void*)0);
 FUNC_13(&VAR_3->d_lock);
 if (VAR_7 && !FUNC_8(&VAR_7->d_lockref))
  VAR_7 = ((void*)0);
 FUNC_11();
 return VAR_7 ? : FUNC_0(-VAR_0);
}
