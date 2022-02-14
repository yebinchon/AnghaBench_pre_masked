
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct ffs_epfile* i_private; } ;
struct file {int dummy; } ;
struct ffs_epfile {int ffs; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ffs_epfile*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct ffs_epfile *VAR_2 = VAR_0->i_private;

 FUNC_0();

 FUNC_1(VAR_2);
 FUNC_2(VAR_2->ffs);

 return 0;
}
