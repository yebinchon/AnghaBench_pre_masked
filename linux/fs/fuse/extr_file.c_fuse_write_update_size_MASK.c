
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; } ;
struct fuse_inode {int lock; int attr_version; } ;
struct fuse_conn {int attr_version; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int *) ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

bool FUNC_6(struct inode *VAR_0, loff_t VAR_1)
{
 struct fuse_conn *VAR_2 = FUNC_1(VAR_0);
 struct fuse_inode *VAR_3 = FUNC_2(VAR_0);
 bool VAR_4 = 0;

 FUNC_4(&VAR_3->lock);
 VAR_3->attr_version = FUNC_0(&VAR_2->attr_version);
 if (VAR_1 > VAR_0->i_size) {
  FUNC_3(VAR_0, VAR_1);
  VAR_4 = 1;
 }
 FUNC_5(&VAR_3->lock);

 return VAR_4;
}
