
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {struct ffs_epfile* i_private; } ;
struct file {struct ffs_epfile* private_data; } ;
struct ffs_epfile {TYPE_1__* ffs; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct ffs_epfile *VAR_4 = VAR_2->i_private;

 FUNC_0();

 if (FUNC_1(VAR_4->ffs->state != VAR_1))
  return -VAR_0;

 VAR_3->private_data = VAR_4;
 FUNC_2(VAR_4->ffs);

 return 0;
}
