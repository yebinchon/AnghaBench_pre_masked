
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 struct buffer_head* FUNC_2 (struct inode*,struct ext4_dir_entry_2**,int*) ;
 int FUNC_3 (struct inode*) ;
 struct ext4_dir_entry_2* FUNC_4 (struct ext4_dir_entry_2*,int ) ;
 struct buffer_head* FUNC_5 (struct inode*,int ,int ) ;

__attribute__((used)) static struct buffer_head *FUNC_6(handle_t *VAR_1,
     struct inode *VAR_2,
     int *VAR_3,
     struct ext4_dir_entry_2 **VAR_4,
     int *VAR_5)
{
 struct buffer_head *VAR_6;

 if (!FUNC_3(VAR_2)) {



  VAR_6 = FUNC_5(VAR_2, 0, VAR_0);
  if (FUNC_0(VAR_6)) {
   *VAR_3 = FUNC_1(VAR_6);
   return ((void*)0);
  }
  *VAR_4 = FUNC_4(
     (struct ext4_dir_entry_2 *)VAR_6->b_data,
     VAR_2->i_sb->s_blocksize);
  return VAR_6;
 }

 *VAR_5 = 1;
 return FUNC_2(VAR_2, VAR_4, VAR_3);
}
