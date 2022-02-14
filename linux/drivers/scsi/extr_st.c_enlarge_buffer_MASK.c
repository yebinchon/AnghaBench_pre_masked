
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_buffer {int buffer_size; int use_sg; int frp_segs; int reserved_page_order; struct page** reserved_pages; int b_data; scalar_t__ cleared; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct page* FUNC_1 (int,int) ;
 int FUNC_2 (struct st_buffer*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct st_buffer * VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 gfp_t VAR_14;

 if (VAR_7 <= VAR_6->buffer_size)
  return 1;

 if (VAR_6->buffer_size <= VAR_2)
  FUNC_2(VAR_6);

 VAR_10 = VAR_6->use_sg;

 VAR_14 = VAR_1 | VAR_4;
 if (VAR_8)
  VAR_14 |= VAR_0;

 if (VAR_6->cleared)
  VAR_14 |= VAR_5;

 if (VAR_6->frp_segs) {
  VAR_12 = VAR_6->reserved_page_order;
  VAR_11 = VAR_2 << VAR_12;
 } else {
  for (VAR_11 = VAR_2, VAR_12 = 0;
       VAR_12 < VAR_3 &&
        VAR_10 * (VAR_2 << VAR_12) < VAR_7;
       VAR_12++, VAR_11 *= 2)
   ;
  VAR_6->reserved_page_order = VAR_12;
 }
 if (VAR_10 * (VAR_2 << VAR_12) < VAR_7) {
  if (VAR_12 == VAR_3)
   return 0;
  FUNC_2(VAR_6);
  return FUNC_4(VAR_6, VAR_7, VAR_8);
 }

 for (VAR_9 = VAR_6->frp_segs, VAR_13 = VAR_6->buffer_size;
      VAR_9 < VAR_10 && VAR_13 < VAR_7;) {
  struct page *VAR_15;

  VAR_15 = FUNC_1(VAR_14, VAR_12);
  if (!VAR_15) {
   FUNC_0(VAR_6->buffer_size = VAR_13);
   FUNC_2(VAR_6);
   return 0;
  }

  VAR_6->frp_segs += 1;
  VAR_13 += VAR_11;
  VAR_6->buffer_size = VAR_13;
  VAR_6->reserved_pages[VAR_9] = VAR_15;
  VAR_9++;
 }
 VAR_6->b_data = FUNC_3(VAR_6->reserved_pages[0]);

 return 1;
}
