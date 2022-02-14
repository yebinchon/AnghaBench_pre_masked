
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nilfs_root {int dummy; } ;
struct nilfs_inode {int dummy; } ;
struct nilfs_ifile_info {int dummy; } ;
struct inode {int i_state; } ;
struct TYPE_2__ {int palloc_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct super_block*,struct nilfs_root*,int ) ;
 int FUNC_3 (struct inode*,int ,int) ;
 int FUNC_4 (struct inode*,size_t) ;
 int FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (struct inode*,struct nilfs_inode*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct inode*) ;

int FUNC_9(struct super_block *VAR_4, struct nilfs_root *VAR_5,
       size_t VAR_6, struct nilfs_inode *VAR_7,
       struct inode **VAR_8)
{
 struct inode *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_2);
 if (FUNC_7(!VAR_9))
  return -VAR_0;
 if (!(VAR_9->i_state & VAR_1))
  goto out;

 VAR_10 = FUNC_3(VAR_9, VAR_3,
        sizeof(struct nilfs_ifile_info));
 if (VAR_10)
  goto failed;

 VAR_10 = FUNC_4(VAR_9, VAR_6);
 if (VAR_10)
  goto failed;

 FUNC_5(VAR_9, &FUNC_0(VAR_9)->palloc_cache);

 VAR_10 = FUNC_6(VAR_9, VAR_7);
 if (VAR_10)
  goto failed;

 FUNC_8(VAR_9);
 out:
 *VAR_8 = VAR_9;
 return 0;
 failed:
 FUNC_1(VAR_9);
 return VAR_10;
}
