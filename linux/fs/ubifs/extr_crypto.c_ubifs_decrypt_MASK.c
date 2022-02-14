
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct ubifs_data_node {int data; int compr_size; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct inode const*,int ,unsigned int,int ,int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ubifs_info*,int) ;
 int FUNC_4 (struct ubifs_info*,char*,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(const struct inode *VAR_2, struct ubifs_data_node *VAR_3,
    unsigned int *VAR_4, int VAR_5)
{
 struct ubifs_info *VAR_6 = VAR_2->i_sb->s_fs_info;
 int VAR_7;
 unsigned int VAR_8 = FUNC_1(VAR_3->compr_size);
 unsigned int VAR_9 = *VAR_4;

 if (VAR_8 <= 0 || VAR_8 > VAR_1 || VAR_8 > VAR_9) {
  FUNC_4(VAR_6, "bad compr_size: %i", VAR_8);
  return -VAR_0;
 }

 FUNC_3(VAR_6, VAR_9 <= VAR_1);
 VAR_7 = FUNC_0(VAR_2, FUNC_5(&VAR_3->data),
         VAR_9, FUNC_2(&VAR_3->data),
         VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_6, "fscrypt_decrypt_block_inplace() failed: %d", VAR_7);
  return VAR_7;
 }
 *VAR_4 = VAR_8;

 return 0;
}
