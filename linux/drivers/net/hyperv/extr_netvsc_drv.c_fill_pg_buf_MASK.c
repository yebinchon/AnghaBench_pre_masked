
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct page {int dummy; } ;
struct hv_page_buffer {unsigned long len; scalar_t__ offset; int pfn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct page*) ;

__attribute__((used)) static u32 FUNC_1(struct page *VAR_3, u32 VAR_4, u32 VAR_5,
         struct hv_page_buffer *VAR_6)
{
 int VAR_7 = 0;




 VAR_3 += (VAR_4 >> VAR_1);
 VAR_4 &= ~VAR_0;

 while (VAR_5 > 0) {
  unsigned long VAR_8;

  VAR_8 = VAR_2 - VAR_4;
  if (VAR_8 > VAR_5)
   VAR_8 = VAR_5;
  VAR_6[VAR_7].pfn = FUNC_0(VAR_3);
  VAR_6[VAR_7].offset = VAR_4;
  VAR_6[VAR_7].len = VAR_8;

  VAR_4 += VAR_8;
  VAR_5 -= VAR_8;

  if (VAR_4 == VAR_2 && VAR_5) {
   VAR_3++;
   VAR_4 = 0;
   VAR_7++;
  }
 }

 return VAR_7 + 1;
}
