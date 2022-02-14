
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_iloc {int bh; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ i_block; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*,void*,int,int ) ;
 int FUNC_3 (struct inode*) ;
 void* FUNC_4 (struct inode*,struct ext4_iloc*) ;
 int FUNC_5 (struct inode*,struct ext4_iloc*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 int FUNC_8 (int *,struct inode*) ;
 TYPE_1__* FUNC_9 (struct ext4_iloc*) ;
 int FUNC_10 (struct inode*,int ,void*,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct inode*,int*) ;
 int FUNC_13 (struct inode*,int*) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(handle_t *VAR_3,
        struct inode *VAR_4,
        struct ext4_dir_entry_2 *VAR_5,
        struct buffer_head *VAR_6,
        int *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct ext4_iloc VAR_11;
 void *VAR_12;

 VAR_8 = FUNC_5(VAR_4, &VAR_11);
 if (VAR_8)
  return VAR_8;

 FUNC_12(VAR_4, &VAR_10);
 if (!FUNC_6(VAR_4)) {
  *VAR_7 = 0;
  goto out;
 }

 if ((void *)VAR_5 - ((void *)FUNC_9(&VAR_11)->i_block) <
  VAR_2) {
  VAR_12 = (void *)FUNC_9(&VAR_11)->i_block +
     VAR_1;
  VAR_9 = VAR_2 -
    VAR_1;
 } else {
  VAR_12 = FUNC_4(VAR_4, &VAR_11);
  VAR_9 = FUNC_3(VAR_4) -
    VAR_2;
 }

 FUNC_0(VAR_6, "get_write_access");
 VAR_8 = FUNC_7(VAR_3, VAR_6);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_12, VAR_9, 0);
 if (VAR_8)
  goto out;

 FUNC_10(VAR_4, VAR_11.bh, VAR_12, VAR_9);
out:
 FUNC_13(VAR_4, &VAR_10);
 if (FUNC_14(VAR_8 == 0))
  VAR_8 = FUNC_8(VAR_3, VAR_4);
 FUNC_1(VAR_11.bh);
 if (VAR_8 != -VAR_0)
  FUNC_11(VAR_4->i_sb, VAR_8);
 return VAR_8;
}
