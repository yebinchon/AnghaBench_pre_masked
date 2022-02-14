
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct fscrypt_name {int dummy; } ;
struct f2fs_dir_entry {int dummy; } ;
typedef int nid_t ;
struct TYPE_2__ {int * task; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct f2fs_dir_entry* FUNC_3 (struct inode*,struct fscrypt_name*,struct page**) ;
 int * VAR_1 ;
 int FUNC_4 (struct inode*,struct fscrypt_name*,struct inode*,int ,int ) ;
 int FUNC_5 (struct page*,int ) ;
 int FUNC_6 (struct fscrypt_name*) ;
 int FUNC_7 (struct inode*,struct qstr const*,int ,struct fscrypt_name*) ;

int FUNC_8(struct inode *VAR_2, const struct qstr *VAR_3,
    struct inode *VAR_4, nid_t VAR_5, umode_t VAR_6)
{
 struct fscrypt_name VAR_7;
 struct page *VAR_8 = ((void*)0);
 struct f2fs_dir_entry *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_10 = FUNC_7(VAR_2, VAR_3, 0, &VAR_7);
 if (VAR_10)
  return VAR_10;
 if (VAR_1 != FUNC_0(VAR_2)->task) {
  VAR_9 = FUNC_3(VAR_2, &VAR_7, &VAR_8);
  FUNC_0(VAR_2)->task = ((void*)0);
 }
 if (VAR_9) {
  FUNC_5(VAR_8, 0);
  VAR_10 = -VAR_0;
 } else if (FUNC_1(VAR_8)) {
  VAR_10 = FUNC_2(VAR_8);
 } else {
  VAR_10 = FUNC_4(VAR_2, &VAR_7, VAR_4, VAR_5, VAR_6);
 }
 FUNC_6(&VAR_7);
 return VAR_10;
}
