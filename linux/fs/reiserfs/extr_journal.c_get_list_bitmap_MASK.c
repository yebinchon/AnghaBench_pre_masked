
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_list_bitmap {struct reiserfs_journal_list* journal_list; } ;
struct reiserfs_journal_list {int dummy; } ;
struct reiserfs_journal {int j_list_bitmap_index; struct reiserfs_list_bitmap* j_list_bitmap; } ;


 int VAR_0 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,struct reiserfs_journal_list*,int) ;

__attribute__((used)) static struct reiserfs_list_bitmap *FUNC_2(struct super_block *VAR_1,
          struct reiserfs_journal_list
          *VAR_2)
{
 int VAR_3, VAR_4;
 struct reiserfs_journal *VAR_5 = FUNC_0(VAR_1);
 struct reiserfs_list_bitmap *VAR_6 = ((void*)0);

 for (VAR_4 = 0; VAR_4 < (VAR_0 * 3); VAR_4++) {
  VAR_3 = VAR_5->j_list_bitmap_index;
  VAR_5->j_list_bitmap_index = (VAR_3 + 1) % VAR_0;
  VAR_6 = VAR_5->j_list_bitmap + VAR_3;
  if (VAR_5->j_list_bitmap[VAR_3].journal_list) {
   FUNC_1(VAR_1,
       VAR_5->j_list_bitmap[VAR_3].
       journal_list, 1);
   if (!VAR_5->j_list_bitmap[VAR_3].journal_list) {
    break;
   }
  } else {
   break;
  }
 }

 if (VAR_6->journal_list)
  return ((void*)0);
 VAR_6->journal_list = VAR_2;
 return VAR_6;
}
