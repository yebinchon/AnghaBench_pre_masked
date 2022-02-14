
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mpage_readpage_args {int nr_pages; scalar_t__ bio; int get_block; struct page* page; } ;
typedef int get_block_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mpage_readpage_args*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

int FUNC_2(struct page *VAR_1, get_block_t VAR_2)
{
 struct mpage_readpage_args VAR_3 = {
  .page = VAR_1,
  .nr_pages = 1,
  .get_block = VAR_2,
 };

 VAR_3.bio = FUNC_0(&VAR_3);
 if (VAR_3.bio)
  FUNC_1(VAR_0, 0, VAR_3.bio);
 return 0;
}
