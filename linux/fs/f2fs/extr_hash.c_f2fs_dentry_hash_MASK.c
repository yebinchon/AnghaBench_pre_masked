
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicode_map {int dummy; } ;
typedef struct qstr {int len; unsigned char* name; } const qstr ;
struct inode {int i_sb; } ;
struct fscrypt_name {int dummy; } ;
struct f2fs_sb_info {struct unicode_map* s_encoding; } ;
typedef int f2fs_hash_t ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct inode const*) ;
 int VAR_2 ;
 int FUNC_2 (struct qstr const*,struct fscrypt_name*) ;
 unsigned char* FUNC_3 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (struct unicode_map const*,struct qstr const*,unsigned char*,int) ;

f2fs_hash_t FUNC_6(const struct inode *VAR_3,
  const struct qstr *VAR_4, struct fscrypt_name *VAR_5)
{
 return FUNC_2(VAR_4, VAR_5);
}
