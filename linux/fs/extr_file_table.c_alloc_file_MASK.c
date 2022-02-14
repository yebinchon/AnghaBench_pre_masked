
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {TYPE_1__* dentry; } ;
struct file_operations {scalar_t__ write_iter; scalar_t__ write; scalar_t__ read_iter; scalar_t__ read; } ;
struct file {int f_mode; struct file_operations const* f_op; int f_mapping; int f_wb_err; TYPE_2__* f_inode; struct path f_path; } ;
struct TYPE_4__ {int i_mapping; } ;
struct TYPE_3__ {TYPE_2__* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct file*) ;
 struct file* FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct file *FUNC_6(const struct path *VAR_5, int VAR_6,
  const struct file_operations *VAR_7)
{
 struct file *VAR_8;

 VAR_8 = FUNC_1(VAR_6, FUNC_2());
 if (FUNC_0(VAR_8))
  return VAR_8;

 VAR_8->f_path = *VAR_5;
 VAR_8->f_inode = VAR_5->dentry->d_inode;
 VAR_8->f_mapping = VAR_5->dentry->d_inode->i_mapping;
 VAR_8->f_wb_err = FUNC_3(VAR_8->f_mapping);
 if ((VAR_8->f_mode & VAR_3) &&
      FUNC_5(VAR_7->read || VAR_7->read_iter))
  VAR_8->f_mode |= VAR_0;
 if ((VAR_8->f_mode & VAR_4) &&
      FUNC_5(VAR_7->write || VAR_7->write_iter))
  VAR_8->f_mode |= VAR_1;
 VAR_8->f_mode |= VAR_2;
 VAR_8->f_op = VAR_7;
 if ((VAR_8->f_mode & (VAR_3 | VAR_4)) == VAR_3)
  FUNC_4(VAR_5->dentry->d_inode);
 return VAR_8;
}
