
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; scalar_t__ i_size; } ;
struct ext4_dir_entry_tail {int dummy; } ;
struct ext4_dir_entry_2 {int inode; } ;
struct buffer_head {void* b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ i_disksize; } ;
struct TYPE_3__ {scalar_t__ s_blocksize; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 struct ext4_dir_entry_2* FUNC_3 (struct inode*,struct ext4_dir_entry_2*,scalar_t__,int,int ,int) ;
 int FUNC_4 (struct buffer_head*,scalar_t__) ;
 int FUNC_5 (int *,struct inode*) ;
 int FUNC_6 (void*,int,scalar_t__) ;
 int FUNC_7 (struct inode*,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*,void*,int) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_12(handle_t *VAR_1,
       struct inode *VAR_2,
       struct buffer_head *VAR_3,
       void *VAR_4,
       int VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8 = 0;
 struct ext4_dir_entry_2 *VAR_9;
 void *VAR_10 = VAR_3->b_data;





 VAR_9 = (struct ext4_dir_entry_2 *)VAR_10;
 VAR_9 = FUNC_3(VAR_2, VAR_9,
  VAR_2->i_sb->s_blocksize, VAR_7,
  FUNC_8(((struct ext4_dir_entry_2 *)VAR_4)->inode), 1);
 VAR_8 = (void *)VAR_9 - VAR_10;

 FUNC_9((void *)VAR_9, VAR_4 + VAR_0,
  VAR_5 - VAR_0);

 if (FUNC_2(VAR_2->i_sb))
  VAR_7 = sizeof(struct ext4_dir_entry_tail);

 VAR_2->i_size = VAR_2->i_sb->s_blocksize;
 FUNC_7(VAR_2, VAR_2->i_sb->s_blocksize);
 FUNC_0(VAR_2)->i_disksize = VAR_2->i_sb->s_blocksize;
 FUNC_6(VAR_3->b_data,
   VAR_5 - VAR_0 + VAR_8,
   VAR_2->i_sb->s_blocksize - VAR_7);

 if (VAR_7)
  FUNC_4(VAR_3,
         VAR_2->i_sb->s_blocksize);
 FUNC_10(VAR_3);
 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;
 FUNC_11(VAR_3);
 return FUNC_5(VAR_1, VAR_2);
}
