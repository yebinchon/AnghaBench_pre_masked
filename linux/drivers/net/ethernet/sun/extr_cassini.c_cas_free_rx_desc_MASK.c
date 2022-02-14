
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas {int *** rx_pages; } ;
typedef int cas_page_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cas*,int *) ;

__attribute__((used)) static inline void FUNC_2(struct cas *VAR_0, int VAR_1)
{
 cas_page_t **VAR_2 = VAR_0->rx_pages[VAR_1];
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (VAR_2[VAR_3]) {
   FUNC_1(VAR_0, VAR_2[VAR_3]);
   VAR_2[VAR_3] = ((void*)0);
  }
 }
}
