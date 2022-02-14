
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct page {int dummy; } ;
struct extent_buffer {struct page** pages; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct extent_buffer*,unsigned long,unsigned long,unsigned long*,size_t*) ;
 unsigned long* FUNC_3 (struct page*) ;

int FUNC_4(struct extent_buffer *VAR_1, unsigned long VAR_2,
      unsigned long VAR_3)
{
 u8 *VAR_4;
 struct page *VAR_5;
 unsigned long VAR_6;
 size_t VAR_7;

 FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_6, &VAR_7);
 VAR_5 = VAR_1->pages[VAR_6];
 FUNC_1(!FUNC_0(VAR_5));
 VAR_4 = FUNC_3(VAR_5);
 return 1U & (VAR_4[VAR_7] >> (VAR_3 & (VAR_0 - 1)));
}
