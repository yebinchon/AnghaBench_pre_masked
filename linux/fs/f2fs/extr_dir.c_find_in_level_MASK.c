
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {int len; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct fscrypt_name {int disk_name; } ;
struct f2fs_dir_entry {int dummy; } ;
typedef scalar_t__ f2fs_hash_t ;
struct TYPE_2__ {scalar_t__ chash; unsigned int clevel; int i_dir_level; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct qstr FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (unsigned int,int ,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,int ) ;
 scalar_t__ FUNC_8 (struct inode*,struct qstr*,struct fscrypt_name*) ;
 struct page* FUNC_9 (struct inode*,unsigned int) ;
 int FUNC_10 (struct page*,int ) ;
 struct f2fs_dir_entry* FUNC_11 (struct inode*,struct page*,struct fscrypt_name*,scalar_t__,int*,struct page**) ;
 unsigned int FUNC_12 (scalar_t__) ;

__attribute__((used)) static struct f2fs_dir_entry *FUNC_13(struct inode *VAR_1,
     unsigned int VAR_2,
     struct fscrypt_name *VAR_3,
     struct page **VAR_4)
{
 struct qstr VAR_5 = FUNC_1(&VAR_3->disk_name);
 int VAR_6 = FUNC_2(VAR_5.len);
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;
 struct page *VAR_11;
 struct f2fs_dir_entry *VAR_12 = ((void*)0);
 bool VAR_13 = 0;
 int VAR_14;
 f2fs_hash_t VAR_15 = FUNC_8(VAR_1, &VAR_5, VAR_3);

 VAR_7 = FUNC_7(VAR_2, FUNC_0(VAR_1)->i_dir_level);
 VAR_8 = FUNC_5(VAR_2);

 VAR_9 = FUNC_6(VAR_2, FUNC_0(VAR_1)->i_dir_level,
     FUNC_12(VAR_15) % VAR_7);
 VAR_10 = VAR_9 + VAR_8;

 for (; VAR_9 < VAR_10; VAR_9++) {

  VAR_11 = FUNC_9(VAR_1, VAR_9);
  if (FUNC_3(VAR_11)) {
   if (FUNC_4(VAR_11) == -VAR_0) {
    VAR_13 = 1;
    continue;
   } else {
    *VAR_4 = VAR_11;
    break;
   }
  }

  VAR_12 = FUNC_11(VAR_1, VAR_11, VAR_3, VAR_15,
       &VAR_14, VAR_4);
  if (VAR_12)
   break;

  if (VAR_14 >= VAR_6)
   VAR_13 = 1;
  FUNC_10(VAR_11, 0);
 }

 if (!VAR_12 && VAR_13 && FUNC_0(VAR_1)->chash != VAR_15) {
  FUNC_0(VAR_1)->chash = VAR_15;
  FUNC_0(VAR_1)->clevel = VAR_2;
 }

 return VAR_12;
}
