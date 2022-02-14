
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct fd {TYPE_2__* file; } ;
struct dentry {struct inode* d_inode; } ;
typedef int loff_t ;
struct TYPE_5__ {struct dentry* dentry; } ;
struct TYPE_6__ {int f_flags; int f_mode; TYPE_1__ f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,int ,int,TYPE_2__*) ;
 struct fd FUNC_3 (unsigned int) ;
 int FUNC_4 (struct fd) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct inode*,TYPE_2__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;

long FUNC_10(unsigned int VAR_8, loff_t VAR_9, int VAR_10)
{
 struct inode *VAR_11;
 struct dentry *VAR_12;
 struct fd VAR_13;
 int VAR_14;

 VAR_14 = -VAR_3;
 if (VAR_9 < 0)
  goto out;
 VAR_14 = -VAR_2;
 VAR_13 = FUNC_3(VAR_8);
 if (!VAR_13.file)
  goto out;


 if (VAR_13.file->f_flags & VAR_7)
  VAR_10 = 0;

 VAR_12 = VAR_13.file->f_path.dentry;
 VAR_11 = VAR_12->d_inode;
 VAR_14 = -VAR_3;
 if (!FUNC_1(VAR_11->i_mode) || !(VAR_13.file->f_mode & VAR_5))
  goto out_putf;

 VAR_14 = -VAR_3;

 if (VAR_10 && VAR_9 > VAR_6)
  goto out_putf;

 VAR_14 = -VAR_4;

 if (FUNC_0(FUNC_5(VAR_13.file)))
  goto out_putf;

 FUNC_8(VAR_11->i_sb);
 VAR_14 = FUNC_6(VAR_11, VAR_13.file, VAR_9);
 if (!VAR_14)
  VAR_14 = FUNC_9(&VAR_13.file->f_path);
 if (!VAR_14)
  VAR_14 = FUNC_2(VAR_12, VAR_9, VAR_1|VAR_0, VAR_13.file);
 FUNC_7(VAR_11->i_sb);
out_putf:
 FUNC_4(VAR_13);
out:
 return VAR_14;
}
