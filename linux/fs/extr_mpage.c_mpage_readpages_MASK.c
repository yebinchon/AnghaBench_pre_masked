
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; int lru; int flags; } ;
struct mpage_readpage_args {int is_readahead; unsigned int nr_pages; scalar_t__ bio; struct page* page; int get_block; } ;
struct list_head {int dummy; } ;
struct address_space {int dummy; } ;
typedef int get_block_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*,struct address_space*,int ,int ) ;
 scalar_t__ FUNC_2 (struct mpage_readpage_args*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct list_head*) ;
 struct page* FUNC_5 (struct list_head*) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct address_space*) ;

int
FUNC_10(struct address_space *VAR_2, struct list_head *VAR_3,
    unsigned VAR_4, get_block_t VAR_5)
{
 struct mpage_readpage_args VAR_6 = {
  .get_block = VAR_5,
  .is_readahead = 1,
 };
 unsigned VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  struct page *VAR_8 = FUNC_5(VAR_3);

  FUNC_7(&VAR_8->flags);
  FUNC_3(&VAR_8->lru);
  if (!FUNC_1(VAR_8, VAR_2,
     VAR_8->index,
     FUNC_9(VAR_2))) {
   VAR_6.page = VAR_8;
   VAR_6.nr_pages = VAR_4 - VAR_7;
   VAR_6.bio = FUNC_2(&VAR_6);
  }
  FUNC_8(VAR_8);
 }
 FUNC_0(!FUNC_4(VAR_3));
 if (VAR_6.bio)
  FUNC_6(VAR_0, VAR_1, VAR_6.bio);
 return 0;
}
