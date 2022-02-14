
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int i_pages; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct page*) ;
 struct address_space* FUNC_2 (struct page*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct page *VAR_1)
{
 struct address_space *VAR_2 = FUNC_2(VAR_1);
 unsigned long VAR_3;

 FUNC_3(&VAR_2->i_pages, VAR_3);
 FUNC_0(&VAR_2->i_pages, FUNC_1(VAR_1),
      VAR_0);
 FUNC_4(&VAR_2->i_pages, VAR_3);
}
