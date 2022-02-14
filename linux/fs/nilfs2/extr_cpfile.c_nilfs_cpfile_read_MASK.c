
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {size_t s_blocksize; } ;
struct nilfs_inode {int dummy; } ;
struct nilfs_cpfile_header {int dummy; } ;
struct inode {int i_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct super_block*,int *,int ) ;
 int FUNC_2 (struct inode*,int ,int ) ;
 int FUNC_3 (struct inode*,size_t,int) ;
 int FUNC_4 (struct super_block*,int ,char*,size_t) ;
 int FUNC_5 (struct inode*,struct nilfs_inode*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct inode*) ;

int FUNC_8(struct super_block *VAR_7, size_t VAR_8,
        struct nilfs_inode *VAR_9, struct inode **VAR_10)
{
 struct inode *VAR_11;
 int VAR_12;

 if (VAR_8 > VAR_7->s_blocksize) {
  FUNC_4(VAR_7, VAR_3,
     "too large checkpoint size: %zu bytes", VAR_8);
  return -VAR_0;
 } else if (VAR_8 < VAR_6) {
  FUNC_4(VAR_7, VAR_3,
     "too small checkpoint size: %zu bytes", VAR_8);
  return -VAR_0;
 }

 VAR_11 = FUNC_1(VAR_7, ((void*)0), VAR_4);
 if (FUNC_6(!VAR_11))
  return -VAR_1;
 if (!(VAR_11->i_state & VAR_2))
  goto out;

 VAR_12 = FUNC_2(VAR_11, VAR_5, 0);
 if (VAR_12)
  goto failed;

 FUNC_3(VAR_11, VAR_8,
     sizeof(struct nilfs_cpfile_header));

 VAR_12 = FUNC_5(VAR_11, VAR_9);
 if (VAR_12)
  goto failed;

 FUNC_7(VAR_11);
 out:
 *VAR_10 = VAR_11;
 return 0;
 failed:
 FUNC_0(VAR_11);
 return VAR_12;
}
