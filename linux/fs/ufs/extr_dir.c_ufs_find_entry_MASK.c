
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_inode_info {unsigned long i_dir_start_lookup; } ;
struct ufs_dir_entry {int dummy; } ;
struct super_block {int dummy; } ;
struct qstr {unsigned char* name; int len; } ;
struct page {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (char*,int ,unsigned char const*,int) ;
 unsigned int FUNC_2 (int) ;
 struct ufs_inode_info* FUNC_3 (struct inode*) ;
 int VAR_0 ;
 unsigned long FUNC_4 (struct inode*) ;
 char* FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct inode*,unsigned long) ;
 unsigned int FUNC_7 (struct inode*,unsigned long) ;
 scalar_t__ FUNC_8 (struct super_block*,int,unsigned char const*,struct ufs_dir_entry*) ;
 struct ufs_dir_entry* FUNC_9 (struct super_block*,struct ufs_dir_entry*) ;
 int FUNC_10 (struct page*) ;

struct ufs_dir_entry *FUNC_11(struct inode *VAR_1, const struct qstr *VAR_2,
         struct page **VAR_3)
{
 struct super_block *VAR_4 = VAR_1->i_sb;
 const unsigned char *VAR_5 = VAR_2->name;
 int VAR_6 = VAR_2->len;
 unsigned VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8, VAR_9;
 unsigned long VAR_10 = FUNC_4(VAR_1);
 struct page *VAR_11 = ((void*)0);
 struct ufs_inode_info *VAR_12 = FUNC_3(VAR_1);
 struct ufs_dir_entry *VAR_13;

 FUNC_1("ENTER, dir_ino %lu, name %s, namlen %u\n", VAR_1->i_ino, VAR_5, VAR_6);

 if (VAR_10 == 0 || VAR_6 > VAR_0)
  goto out;


 *VAR_3 = ((void*)0);

 VAR_8 = VAR_12->i_dir_start_lookup;

 if (VAR_8 >= VAR_10)
  VAR_8 = 0;
 VAR_9 = VAR_8;
 do {
  char *VAR_14;
  VAR_11 = FUNC_6(VAR_1, VAR_9);
  if (!FUNC_0(VAR_11)) {
   VAR_14 = FUNC_5(VAR_11);
   VAR_13 = (struct ufs_dir_entry *) VAR_14;
   VAR_14 += FUNC_7(VAR_1, VAR_9) - VAR_7;
   while ((char *) VAR_13 <= VAR_14) {
    if (FUNC_8(VAR_4, VAR_6, VAR_5, VAR_13))
     goto found;
    VAR_13 = FUNC_9(VAR_4, VAR_13);
   }
   FUNC_10(VAR_11);
  }
  if (++VAR_9 >= VAR_10)
   VAR_9 = 0;
 } while (VAR_9 != VAR_8);
out:
 return ((void*)0);

found:
 *VAR_3 = VAR_11;
 VAR_12->i_dir_start_lookup = VAR_9;
 return VAR_13;
}
