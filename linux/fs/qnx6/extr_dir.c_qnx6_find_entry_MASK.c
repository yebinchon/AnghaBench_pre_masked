
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct qnx6_long_dir_entry {int dummy; } ;
struct qnx6_inode_info {unsigned long i_dir_start_lookup; } ;
struct qnx6_dir_entry {int de_size; } ;
struct page {int dummy; } ;
struct inode {struct super_block* i_sb; } ;


 int FUNC_0 (struct page*) ;
 struct qnx6_inode_info* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 unsigned long FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,unsigned long) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (char*) ;
 struct page* FUNC_6 (struct inode*,unsigned long) ;
 unsigned int FUNC_7 (int,char const*,struct qnx6_long_dir_entry*,struct inode*) ;
 unsigned int FUNC_8 (struct super_block*,int,char const*,struct qnx6_dir_entry*) ;
 int FUNC_9 (struct page*) ;

unsigned FUNC_10(int VAR_1, struct inode *VAR_2, const char *VAR_3,
    struct page **VAR_4)
{
 struct super_block *VAR_5 = VAR_2->i_sb;
 struct qnx6_inode_info *VAR_6 = FUNC_1(VAR_2);
 struct page *VAR_7 = ((void*)0);
 unsigned long VAR_8, VAR_9;
 unsigned long VAR_10 = FUNC_2(VAR_2);
 unsigned VAR_11;
 struct qnx6_dir_entry *VAR_12;
 struct qnx6_long_dir_entry *VAR_13;

 *VAR_4 = ((void*)0);

 if (VAR_10 == 0)
  return 0;
 VAR_8 = VAR_6->i_dir_start_lookup;
 if (VAR_8 >= VAR_10)
  VAR_8 = 0;
 VAR_9 = VAR_8;

 do {
  VAR_7 = FUNC_6(VAR_2, VAR_9);
  if (!FUNC_0(VAR_7)) {
   int VAR_14 = FUNC_3(VAR_2, VAR_9);
   int VAR_15;

   VAR_12 = (struct qnx6_dir_entry *)FUNC_4(VAR_7);
   for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++, VAR_12++) {
    if (VAR_1 <= VAR_0) {

     if (VAR_1 != VAR_12->de_size)
      continue;
     VAR_11 = FUNC_8(VAR_5, VAR_1, VAR_3, VAR_12);
     if (VAR_11)
      goto found;
    } else if (VAR_12->de_size == 0xff) {

     VAR_13 = (struct qnx6_long_dir_entry *)VAR_12;
     VAR_11 = FUNC_7(VAR_1,
        VAR_3, VAR_13, VAR_2);
     if (VAR_11)
      goto found;
    } else
     FUNC_5("undefined filename size in inode.\n");
   }
   FUNC_9(VAR_7);
  }

  if (++VAR_9 >= VAR_10)
   VAR_9 = 0;
 } while (VAR_9 != VAR_8);
 return 0;

found:
 *VAR_4 = VAR_7;
 VAR_6->i_dir_start_lookup = VAR_9;
 return VAR_11;
}
