
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct page*,struct address_space*,int ) ;
 int FUNC_3 (struct page*) ;
 struct address_space* FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct page*) ;

int
FUNC_7(struct page *VAR_1)
{
 struct address_space *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 if (FUNC_5(!VAR_2))
  return !FUNC_0(VAR_1);





 FUNC_3(VAR_1);
 VAR_3 = !FUNC_0(VAR_1);
 if (VAR_3)
  FUNC_2(VAR_1, VAR_2, 0);
 FUNC_6(VAR_1);

 if (VAR_3)
  FUNC_1(VAR_2->host, VAR_0);
 return VAR_3;
}
