
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_dir_entry {scalar_t__ inode; char* name; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct page* FUNC_3 (struct inode*,unsigned long) ;
 unsigned long FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;

int FUNC_7(struct inode * VAR_2)
{
 struct super_block *VAR_3 = VAR_2->i_sb;
 struct page *VAR_4 = ((void*)0);
 unsigned long VAR_5, VAR_6 = FUNC_4(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  char *VAR_7;
  struct sysv_dir_entry * VAR_8;
  VAR_4 = FUNC_3(VAR_2, VAR_5);

  if (FUNC_0(VAR_4))
   continue;

  VAR_7 = (char *)FUNC_6(VAR_4);
  VAR_8 = (struct sysv_dir_entry *)VAR_7;
  VAR_7 += VAR_0-VAR_1;

  for ( ;(char *)VAR_8 <= VAR_7; VAR_8++) {
   if (!VAR_8->inode)
    continue;

   if (VAR_8->name[0] != '.')
    goto not_empty;
   if (!VAR_8->name[1]) {
    if (VAR_8->inode == FUNC_2(FUNC_1(VAR_3),
       VAR_2->i_ino))
     continue;
    goto not_empty;
   }
   if (VAR_8->name[1] != '.' || VAR_8->name[2])
    goto not_empty;
  }
  FUNC_5(VAR_4);
 }
 return 1;

not_empty:
 FUNC_5(VAR_4);
 return 0;
}
