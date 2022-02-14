
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct ubifs_data_node {int compr_size; int data; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct inode const*,int ,unsigned int,int ,int,int ) ;
 int FUNC_2 (void*,int ,unsigned int) ;
 int FUNC_3 (void*) ;
 unsigned int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct ubifs_info*,int) ;
 int FUNC_6 (struct ubifs_info*,char*,int) ;
 int FUNC_7 (void*) ;

int FUNC_8(const struct inode *VAR_2, struct ubifs_data_node *VAR_3,
    unsigned int VAR_4, unsigned int *VAR_5, int VAR_6)
{
 struct ubifs_info *VAR_7 = VAR_2->i_sb->s_fs_info;
 void *VAR_8 = &VAR_3->data;
 unsigned int VAR_9 = FUNC_4(VAR_4, VAR_1);
 int VAR_10;

 FUNC_5(VAR_7, VAR_9 <= *VAR_5);
 VAR_3->compr_size = FUNC_0(VAR_4);


 if (VAR_9 != VAR_4)
  FUNC_2(VAR_8 + VAR_4, 0, VAR_9 - VAR_4);

 VAR_10 = FUNC_1(VAR_2, FUNC_7(VAR_8), VAR_9,
         FUNC_3(VAR_8), VAR_6, VAR_0);
 if (VAR_10) {
  FUNC_6(VAR_7, "fscrypt_encrypt_block_inplace() failed: %d", VAR_10);
  return VAR_10;
 }
 *VAR_5 = VAR_9;

 return 0;
}
