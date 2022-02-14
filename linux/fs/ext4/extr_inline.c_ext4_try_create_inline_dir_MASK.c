
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_size; int i_ino; } ;
struct ext4_iloc {int bh; } ;
struct ext4_dir_entry_2 {int rec_len; scalar_t__ inode; } ;
typedef int handle_t ;
struct TYPE_4__ {int i_disksize; } ;
struct TYPE_3__ {scalar_t__ i_block; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct ext4_iloc*) ;
 int FUNC_4 (int *,struct inode*,int) ;
 TYPE_1__* FUNC_5 (struct ext4_iloc*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct inode*,int) ;

int FUNC_8(handle_t *VAR_2, struct inode *VAR_3,
          struct inode *VAR_4)
{
 int VAR_5, VAR_6 = VAR_1;
 struct ext4_iloc VAR_7;
 struct ext4_dir_entry_2 *VAR_8;

 VAR_5 = FUNC_3(VAR_4, &VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_2, VAR_4, VAR_6);
 if (VAR_5)
  goto out;





 VAR_8 = (struct ext4_dir_entry_2 *)FUNC_5(&VAR_7)->i_block;
 VAR_8->inode = FUNC_2(VAR_3->i_ino);
 VAR_8 = (struct ext4_dir_entry_2 *)((void *)VAR_8 + VAR_0);
 VAR_8->inode = 0;
 VAR_8->rec_len = FUNC_6(
    VAR_6 - VAR_0,
    VAR_6);
 FUNC_7(VAR_4, 2);
 VAR_4->i_size = FUNC_0(VAR_4)->i_disksize = VAR_6;
out:
 FUNC_1(VAR_7.bh);
 return VAR_5;
}
