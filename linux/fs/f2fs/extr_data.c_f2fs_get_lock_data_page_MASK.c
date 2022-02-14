
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (struct inode*,int ,int ,int) ;
 int FUNC_4 (struct page*,int) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (int) ;

struct page *FUNC_7(struct inode *VAR_1, pgoff_t VAR_2,
       bool VAR_3)
{
 struct address_space *VAR_4 = VAR_1->i_mapping;
 struct page *VAR_5;
repeat:
 VAR_5 = FUNC_3(VAR_1, VAR_2, 0, VAR_3);
 if (FUNC_1(VAR_5))
  return VAR_5;


 FUNC_5(VAR_5);
 if (FUNC_6(VAR_5->mapping != VAR_4)) {
  FUNC_4(VAR_5, 1);
  goto repeat;
 }
 if (FUNC_6(!FUNC_2(VAR_5))) {
  FUNC_4(VAR_5, 1);
  return FUNC_0(-VAR_0);
 }
 return VAR_5;
}
