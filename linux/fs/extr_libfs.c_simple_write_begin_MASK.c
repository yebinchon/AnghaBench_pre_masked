
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned int pgoff_t ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct address_space*,unsigned int,unsigned int) ;
 int FUNC_2 (struct page*,int ,unsigned int,unsigned int,unsigned int) ;

int FUNC_3(struct file *VAR_3, struct address_space *VAR_4,
   loff_t VAR_5, unsigned VAR_6, unsigned VAR_7,
   struct page **VAR_8, void **VAR_9)
{
 struct page *VAR_10;
 pgoff_t VAR_11;

 VAR_11 = VAR_5 >> VAR_1;

 VAR_10 = FUNC_1(VAR_4, VAR_11, VAR_7);
 if (!VAR_10)
  return -VAR_0;

 *VAR_8 = VAR_10;

 if (!FUNC_0(VAR_10) && (VAR_6 != VAR_2)) {
  unsigned VAR_12 = VAR_5 & (VAR_2 - 1);

  FUNC_2(VAR_10, 0, VAR_12, VAR_12 + VAR_6, VAR_2);
 }
 return 0;
}
