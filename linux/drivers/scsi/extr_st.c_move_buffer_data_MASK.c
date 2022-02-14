
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_buffer {int reserved_page_order; int buffer_bytes; int frp_segs; int read_pointer; struct page** reserved_pages; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct page*) ;

__attribute__((used)) static void FUNC_3(struct st_buffer * VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0, VAR_6;
 int VAR_7, VAR_8;
 int VAR_9 = VAR_0 << VAR_1->reserved_page_order;

 if (VAR_2 == 0)
  return;

 VAR_8=VAR_1->buffer_bytes - VAR_2;
 for (VAR_3=0; VAR_3 < VAR_1->frp_segs; VAR_3++) {
  VAR_5 = VAR_2;
  if (VAR_5 < VAR_9)
   break;
  VAR_2 -= VAR_9;
 }

 VAR_1->buffer_bytes = VAR_1->read_pointer = VAR_8;
 for (VAR_4=VAR_6=0; VAR_8 > 0; ) {
  struct page *VAR_10 = VAR_1->reserved_pages[VAR_4];
  struct page *VAR_11 = VAR_1->reserved_pages[VAR_3];

  VAR_7 = FUNC_1(VAR_9 - VAR_6, VAR_9 - VAR_5);
  FUNC_0(FUNC_2(VAR_10) + VAR_6,
   FUNC_2(VAR_11) + VAR_5, VAR_7);
  VAR_5 += VAR_7;
  if (VAR_5 >= VAR_9) {
   VAR_3++;
   VAR_5 = 0;
  }
  VAR_6 += VAR_7;
  if (VAR_6 >= VAR_9) {
   VAR_4++;
   VAR_6 = 0;
  }
  VAR_8 -= VAR_7;
 }
}
