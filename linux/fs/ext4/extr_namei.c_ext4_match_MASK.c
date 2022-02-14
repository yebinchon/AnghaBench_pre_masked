
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qstr {int len; scalar_t__ name; } ;
struct inode {int i_sb; } ;
struct fscrypt_name {int crypto_buf; int disk_name; struct qstr* usr_fname; } ;
struct TYPE_3__ {int len; scalar_t__ name; } ;
struct ext4_filename {struct qstr* usr_fname; TYPE_1__ cf_name; int crypto_buf; int disk_name; } ;
struct ext4_dir_entry_2 {int name_len; scalar_t__ name; int inode; } ;
struct TYPE_4__ {scalar_t__ s_encoding; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode const*) ;
 int FUNC_2 (struct inode const*,struct qstr*,struct qstr const*,int) ;
 int FUNC_3 (struct fscrypt_name*,scalar_t__,int ) ;

__attribute__((used)) static inline bool FUNC_4(const struct inode *VAR_0,
         const struct ext4_filename *VAR_1,
         const struct ext4_dir_entry_2 *VAR_2)
{
 struct fscrypt_name VAR_3;




 if (!VAR_2->inode)
  return 0;

 VAR_3.usr_fname = VAR_1->usr_fname;
 VAR_3.disk_name = VAR_1->disk_name;
 return FUNC_3(&VAR_3, VAR_2->name, VAR_2->name_len);
}
