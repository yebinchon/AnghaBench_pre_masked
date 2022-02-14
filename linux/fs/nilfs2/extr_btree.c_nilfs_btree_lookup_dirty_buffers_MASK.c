
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pagevec {int * pages; } ;
struct nilfs_bmap {int dummy; } ;
struct list_head {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
struct TYPE_2__ {struct address_space i_btnode_cache; } ;


 int FUNC_0 (struct list_head*) ;
 TYPE_1__* FUNC_1 (struct nilfs_bmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct list_head*,struct list_head*) ;
 int FUNC_5 (struct nilfs_bmap*,struct list_head*,struct buffer_head*) ;
 struct buffer_head* FUNC_6 (int ) ;
 int FUNC_7 (struct pagevec*) ;
 int FUNC_8 (struct pagevec*) ;
 scalar_t__ FUNC_9 (struct pagevec*,struct address_space*,int *,int ) ;
 int FUNC_10 (struct pagevec*) ;

__attribute__((used)) static void FUNC_11(struct nilfs_bmap *VAR_3,
          struct list_head *VAR_4)
{
 struct address_space *VAR_5 = &FUNC_1(VAR_3)->i_btnode_cache;
 struct list_head VAR_6[VAR_0];
 struct pagevec VAR_7;
 struct buffer_head *VAR_8, *VAR_9;
 pgoff_t VAR_10 = 0;
 int VAR_11, VAR_12;

 for (VAR_11 = VAR_1;
      VAR_11 < VAR_0;
      VAR_11++)
  FUNC_0(&VAR_6[VAR_11]);

 FUNC_8(&VAR_7);

 while (FUNC_9(&VAR_7, VAR_5, &VAR_10,
     VAR_2)) {
  for (VAR_12 = 0; VAR_12 < FUNC_7(&VAR_7); VAR_12++) {
   VAR_8 = VAR_9 = FUNC_6(VAR_7.pages[VAR_12]);
   do {
    if (FUNC_2(VAR_8))
     FUNC_5(VAR_3,
             VAR_6, VAR_8);
   } while ((VAR_8 = VAR_8->b_this_page) != VAR_9);
  }
  FUNC_10(&VAR_7);
  FUNC_3();
 }

 for (VAR_11 = VAR_1;
      VAR_11 < VAR_0;
      VAR_11++)
  FUNC_4(&VAR_6[VAR_11], VAR_4);
}
