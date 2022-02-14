
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; } ;
struct st_buffer {int reserved_page_order; int frp_segs; int buffer_size; TYPE_1__ map_data; scalar_t__ sg_segs; int * reserved_pages; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct st_buffer * VAR_1)
{
 int VAR_2, VAR_3 = VAR_1->reserved_page_order;

 for (VAR_2 = 0; VAR_2 < VAR_1->frp_segs; VAR_2++) {
  FUNC_0(VAR_1->reserved_pages[VAR_2], VAR_3);
  VAR_1->buffer_size -= (VAR_0 << VAR_3);
 }
 VAR_1->frp_segs = 0;
 VAR_1->sg_segs = 0;
 VAR_1->reserved_page_order = 0;
 VAR_1->map_data.offset = 0;
}
