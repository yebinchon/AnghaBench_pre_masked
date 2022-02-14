
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct page*,int) ;
 int FUNC_3 (struct page*,int) ;

__attribute__((used)) static struct page *FUNC_4(int VAR_2, int VAR_3)
{
 struct page *VAR_4;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 do {
  VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_3);
 } while (!VAR_4 && VAR_3--);

 if (VAR_4 && VAR_3) {






  FUNC_3(VAR_4, VAR_3);
  FUNC_0(VAR_4);
  FUNC_2(VAR_4, VAR_3);
 }

 return VAR_4;
}
