
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct page* FUNC_3 (struct inode*,int ,int ,int) ;
 int FUNC_4 (struct page*,int ) ;
 struct page* FUNC_5 (struct address_space*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct page*) ;

struct page *FUNC_8(struct inode *VAR_1, pgoff_t VAR_2)
{
 struct address_space *VAR_3 = VAR_1->i_mapping;
 struct page *VAR_4;

 VAR_4 = FUNC_5(VAR_3, VAR_2);
 if (VAR_4 && FUNC_2(VAR_4))
  return VAR_4;
 FUNC_4(VAR_4, 0);

 VAR_4 = FUNC_3(VAR_1, VAR_2, 0, 0);
 if (FUNC_1(VAR_4))
  return VAR_4;

 if (FUNC_2(VAR_4))
  return VAR_4;

 FUNC_7(VAR_4);
 if (FUNC_6(!FUNC_2(VAR_4))) {
  FUNC_4(VAR_4, 0);
  return FUNC_0(-VAR_0);
 }
 return VAR_4;
}
