
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int mnt; TYPE_1__* dentry; } ;
struct inode {int i_mode; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* d_inode; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 long FUNC_3 (struct inode*,int ) ;
 long FUNC_4 (TYPE_1__*,int ,int ,int *) ;
 long FUNC_5 (struct inode*) ;
 long FUNC_6 (struct inode*,int ) ;
 long FUNC_7 (struct inode*,int *,int ) ;
 int FUNC_8 (int ) ;
 long FUNC_9 (int ) ;
 int FUNC_10 (struct inode*) ;
 long FUNC_11 (struct path const*) ;

long FUNC_12(const struct path *VAR_5, loff_t VAR_6)
{
 struct inode *VAR_7;
 long VAR_8;

 VAR_7 = VAR_5->dentry->d_inode;


 if (FUNC_1(VAR_7->i_mode))
  return -VAR_1;
 if (!FUNC_2(VAR_7->i_mode))
  return -VAR_0;

 VAR_8 = FUNC_9(VAR_5->mnt);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_6(VAR_7, VAR_3);
 if (VAR_8)
  goto mnt_drop_write_and_out;

 VAR_8 = -VAR_2;
 if (FUNC_0(VAR_7))
  goto mnt_drop_write_and_out;

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8)
  goto mnt_drop_write_and_out;





 VAR_8 = FUNC_3(VAR_7, VAR_4);
 if (VAR_8)
  goto put_write_and_out;

 VAR_8 = FUNC_7(VAR_7, ((void*)0), VAR_6);
 if (!VAR_8)
  VAR_8 = FUNC_11(VAR_5);
 if (!VAR_8)
  VAR_8 = FUNC_4(VAR_5->dentry, VAR_6, 0, ((void*)0));

put_write_and_out:
 FUNC_10(VAR_7);
mnt_drop_write_and_out:
 FUNC_8(VAR_5->mnt);
out:
 return VAR_8;
}
