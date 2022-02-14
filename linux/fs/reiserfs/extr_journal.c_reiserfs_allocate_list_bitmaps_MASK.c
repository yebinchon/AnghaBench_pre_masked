
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_list_bitmap {int bitmaps; int * journal_list; } ;
struct reiserfs_bitmap_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,struct reiserfs_list_bitmap*) ;
 int FUNC_1 (struct super_block*,char*,char*) ;
 int FUNC_2 (int) ;

int FUNC_3(struct super_block *VAR_1,
       struct reiserfs_list_bitmap *VAR_2,
       unsigned int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 struct reiserfs_list_bitmap *VAR_6;
 int VAR_7 = VAR_3 * sizeof(struct reiserfs_bitmap_node *);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_6 = VAR_2 + VAR_4;
  VAR_6->journal_list = ((void*)0);
  VAR_6->bitmaps = FUNC_2(VAR_7);
  if (!VAR_6->bitmaps) {
   FUNC_1(VAR_1, "clm-2000", "unable to "
      "allocate bitmaps for journal lists");
   VAR_5 = 1;
   break;
  }
 }
 if (VAR_5) {
  FUNC_0(VAR_1, VAR_2);
  return -1;
 }
 return 0;
}
