
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct address_space*,unsigned long,int *) ;

__attribute__((used)) static struct page *FUNC_3(struct inode *VAR_0, unsigned long VAR_1)
{
 struct address_space *VAR_2 = VAR_0->i_mapping;
 struct page *VAR_3 = FUNC_2(VAR_2, VAR_1, ((void*)0));
 if (!FUNC_0(VAR_3))
  FUNC_1(VAR_3);
 return VAR_3;
}
