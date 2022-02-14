
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {int i_disksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct inode*,int,scalar_t__) ;
 int FUNC_5 (struct inode*,int,scalar_t__) ;
 int FUNC_6 (int *,struct inode*) ;

int FUNC_7(handle_t *VAR_4, struct inode *VAR_5)
{
 struct super_block *VAR_6 = VAR_5->i_sb;
 ext4_lblk_t VAR_7;
 int VAR_8 = 0;
 FUNC_1(VAR_5)->i_disksize = VAR_5->i_size;
 VAR_8 = FUNC_6(VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_7 = (VAR_5->i_size + VAR_6->s_blocksize - 1)
   >> FUNC_0(VAR_6);
retry:
 VAR_8 = FUNC_4(VAR_5, VAR_7,
        VAR_2 - VAR_7);
 if (VAR_8 == -VAR_1) {
  FUNC_2();
  FUNC_3(VAR_0, VAR_3/50);
  goto retry;
 }
 if (VAR_8)
  return VAR_8;
 return FUNC_5(VAR_5, VAR_7, VAR_2 - 1);
}
