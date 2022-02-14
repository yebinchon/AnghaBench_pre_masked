
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nilfs_dir_entry {scalar_t__ rec_len; scalar_t__ inode; char* name; int name_len; } ;
struct inode {int i_ino; int i_sb; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,char*,char*,struct nilfs_dir_entry*) ;
 struct page* FUNC_5 (struct inode*,unsigned long) ;
 scalar_t__ FUNC_6 (struct inode*,unsigned long) ;
 struct nilfs_dir_entry* FUNC_7 (struct nilfs_dir_entry*) ;
 int FUNC_8 (struct page*) ;
 char* FUNC_9 (struct page*) ;

int FUNC_10(struct inode *VAR_0)
{
 struct page *VAR_1 = ((void*)0);
 unsigned long VAR_2, VAR_3 = FUNC_3(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  char *VAR_4;
  struct nilfs_dir_entry *VAR_5;

  VAR_1 = FUNC_5(VAR_0, VAR_2);
  if (FUNC_0(VAR_1))
   continue;

  VAR_4 = FUNC_9(VAR_1);
  VAR_5 = (struct nilfs_dir_entry *)VAR_4;
  VAR_4 += FUNC_6(VAR_0, VAR_2) - FUNC_1(1);

  while ((char *)VAR_5 <= VAR_4) {
   if (VAR_5->rec_len == 0) {
    FUNC_4(VAR_0->i_sb,
         "zero-length directory entry (kaddr=%p, de=%p)",
         VAR_4, VAR_5);
    goto not_empty;
   }
   if (VAR_5->inode != 0) {

    if (VAR_5->name[0] != '.')
     goto not_empty;
    if (VAR_5->name_len > 2)
     goto not_empty;
    if (VAR_5->name_len < 2) {
     if (VAR_5->inode !=
         FUNC_2(VAR_0->i_ino))
      goto not_empty;
    } else if (VAR_5->name[1] != '.')
     goto not_empty;
   }
   VAR_5 = FUNC_7(VAR_5);
  }
  FUNC_8(VAR_1);
 }
 return 1;

not_empty:
 FUNC_8(VAR_1);
 return 0;
}
