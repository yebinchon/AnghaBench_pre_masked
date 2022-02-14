
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_iloc {struct buffer_head* bh; } ;
struct ext4_filename {int dummy; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int xattr_sem; } ;
struct TYPE_3__ {scalar_t__ i_block; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 void* FUNC_4 (struct inode*,struct ext4_iloc*) ;
 scalar_t__ FUNC_5 (struct inode*,struct ext4_iloc*) ;
 int FUNC_6 (struct inode*) ;
 TYPE_1__* FUNC_7 (struct ext4_iloc*) ;
 int FUNC_8 (struct buffer_head*,void*,int,struct inode*,struct ext4_filename*,int ,struct ext4_dir_entry_2**) ;
 int FUNC_9 (int *) ;

struct buffer_head *FUNC_10(struct inode *VAR_2,
     struct ext4_filename *VAR_3,
     struct ext4_dir_entry_2 **VAR_4,
     int *VAR_5)
{
 int VAR_6;
 struct ext4_iloc VAR_7;
 void *VAR_8;
 int VAR_9;

 if (FUNC_5(VAR_2, &VAR_7))
  return ((void*)0);

 FUNC_2(&FUNC_0(VAR_2)->xattr_sem);
 if (!FUNC_6(VAR_2)) {
  *VAR_5 = 0;
  goto out;
 }

 VAR_8 = (void *)FUNC_7(&VAR_7)->i_block +
      VAR_0;
 VAR_9 = VAR_1 - VAR_0;
 VAR_6 = FUNC_8(VAR_7.bh, VAR_8, VAR_9,
         VAR_2, VAR_3, 0, VAR_4);
 if (VAR_6 == 1)
  goto out_find;
 if (VAR_6 < 0)
  goto out;

 if (FUNC_3(VAR_2) == VAR_1)
  goto out;

 VAR_8 = FUNC_4(VAR_2, &VAR_7);
 VAR_9 = FUNC_3(VAR_2) - VAR_1;

 VAR_6 = FUNC_8(VAR_7.bh, VAR_8, VAR_9,
         VAR_2, VAR_3, 0, VAR_4);
 if (VAR_6 == 1)
  goto out_find;

out:
 FUNC_1(VAR_7.bh);
 VAR_7.bh = ((void*)0);
out_find:
 FUNC_9(&FUNC_0(VAR_2)->xattr_sem);
 return VAR_7.bh;
}
