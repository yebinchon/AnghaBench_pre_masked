
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct cifs_readdata {struct page** pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static int
FUNC_2(struct cifs_readdata *VAR_3, unsigned int VAR_4)
{
 int VAR_5 = 0;
 struct page *VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_0(VAR_1|VAR_2);
  if (!VAR_6) {
   VAR_5 = -VAR_0;
   break;
  }
  VAR_3->pages[VAR_7] = VAR_6;
 }

 if (VAR_5) {
  unsigned int VAR_8 = VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   FUNC_1(VAR_3->pages[VAR_7]);
   VAR_3->pages[VAR_7] = ((void*)0);
  }
 }
 return VAR_5;
}
