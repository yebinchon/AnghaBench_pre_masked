
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_inode {int lock; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct fuse_inode*,int ,int ) ;
 struct fuse_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct inode *VAR_0, pgoff_t VAR_1,
       pgoff_t VAR_2)
{
 struct fuse_inode *VAR_3 = FUNC_1(VAR_0);
 bool VAR_4;

 FUNC_2(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_3(&VAR_3->lock);

 return VAR_4;
}
