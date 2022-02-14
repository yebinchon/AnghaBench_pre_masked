
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_ino; } ;
struct fscrypt_name {int dummy; } ;
struct f2fs_dir_entry {int dummy; } ;
struct TYPE_2__ {unsigned int i_current_depth; int task; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_3 (struct inode*) ;
 struct f2fs_dir_entry* FUNC_4 (struct inode*,struct fscrypt_name*,struct page**) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,unsigned int) ;
 int FUNC_7 (int ,char*,int ,unsigned int) ;
 struct f2fs_dir_entry* FUNC_8 (struct inode*,unsigned int,struct fscrypt_name*,struct page**) ;
 scalar_t__ FUNC_9 (int) ;

struct f2fs_dir_entry *FUNC_10(struct inode *VAR_2,
   struct fscrypt_name *VAR_3, struct page **VAR_4)
{
 unsigned long VAR_5 = FUNC_3(VAR_2);
 struct f2fs_dir_entry *VAR_6 = ((void*)0);
 unsigned int VAR_7;
 unsigned int VAR_8;

 if (FUNC_5(VAR_2)) {
  *VAR_4 = ((void*)0);
  VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4);
  goto out;
 }

 if (VAR_5 == 0) {
  *VAR_4 = ((void*)0);
  goto out;
 }

 VAR_7 = FUNC_0(VAR_2)->i_current_depth;
 if (FUNC_9(VAR_7 > VAR_0)) {
  FUNC_7(FUNC_1(VAR_2), "Corrupted max_depth of %lu: %u",
     VAR_2->i_ino, VAR_7);
  VAR_7 = VAR_0;
  FUNC_6(VAR_2, VAR_7);
 }

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  *VAR_4 = ((void*)0);
  VAR_6 = FUNC_8(VAR_2, VAR_8, VAR_3, VAR_4);
  if (VAR_6 || FUNC_2(*VAR_4))
   break;
 }
out:

 if (!VAR_6)
  FUNC_0(VAR_2)->task = VAR_1;
 return VAR_6;
}
