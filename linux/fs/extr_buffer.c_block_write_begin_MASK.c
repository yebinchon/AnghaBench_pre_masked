
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;
typedef int get_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*,int,unsigned int,int *) ;
 struct page* FUNC_1 (struct address_space*,int,unsigned int) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct page*) ;

int FUNC_5(struct address_space *VAR_2, loff_t VAR_3, unsigned VAR_4,
  unsigned VAR_5, struct page **VAR_6, get_block_t *VAR_7)
{
 pgoff_t VAR_8 = VAR_3 >> VAR_1;
 struct page *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_2, VAR_8, VAR_5);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_9, VAR_3, VAR_4, VAR_7);
 if (FUNC_3(VAR_10)) {
  FUNC_4(VAR_9);
  FUNC_2(VAR_9);
  VAR_9 = ((void*)0);
 }

 *VAR_6 = VAR_9;
 return VAR_10;
}
