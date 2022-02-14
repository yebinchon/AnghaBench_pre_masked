
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_list_bitmap {int * bitmaps; int * journal_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,struct reiserfs_list_bitmap*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_1,
        struct reiserfs_list_bitmap *VAR_2)
{
 int VAR_3;
 struct reiserfs_list_bitmap *VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_2 + VAR_3;
  VAR_4->journal_list = ((void*)0);
  FUNC_0(VAR_1, VAR_4);
  FUNC_1(VAR_4->bitmaps);
  VAR_4->bitmaps = ((void*)0);
 }
 return 0;
}
