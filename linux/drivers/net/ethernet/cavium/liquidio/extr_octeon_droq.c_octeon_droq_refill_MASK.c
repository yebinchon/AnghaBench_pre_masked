
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct octeon_skb_page_info {scalar_t__ page; } ;
struct octeon_droq_desc {int buffer_ptr; } ;
struct TYPE_3__ {int rx_alloc_failure; } ;
struct octeon_droq {scalar_t__ max_count; size_t refill_idx; scalar_t__ refill_count; TYPE_2__* recv_buf_list; TYPE_1__ stats; struct octeon_droq_desc* desc_ring; } ;
struct octeon_device {int dummy; } ;
struct TYPE_4__ {void* buffer; int * data; struct octeon_skb_page_info pg_info; } ;


 int * FUNC_0 (void*) ;
 size_t FUNC_1 (size_t,int,scalar_t__) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct octeon_droq*,struct octeon_droq_desc*) ;
 void* FUNC_4 (struct octeon_device*,struct octeon_skb_page_info*) ;
 void* FUNC_5 (struct octeon_device*,struct octeon_skb_page_info*) ;

__attribute__((used)) static u32
FUNC_6(struct octeon_device *VAR_0, struct octeon_droq *VAR_1)
{
 struct octeon_droq_desc *VAR_2;
 void *VAR_3 = ((void*)0);
 u8 *VAR_4;
 u32 VAR_5 = 0;
 struct octeon_skb_page_info *VAR_6;

 VAR_2 = VAR_1->desc_ring;

 while (VAR_1->refill_count && (VAR_5 < VAR_1->max_count)) {



  if (!VAR_1->recv_buf_list[VAR_1->refill_idx].buffer) {
   VAR_6 =
    &VAR_1->recv_buf_list[VAR_1->refill_idx].pg_info;



   if (VAR_6->page)
    VAR_3 = FUNC_5(VAR_0, VAR_6);
   else
    VAR_3 = FUNC_4(VAR_0, VAR_6);



   if (!VAR_3) {
    VAR_1->stats.rx_alloc_failure++;
    break;
   }
   VAR_1->recv_buf_list[VAR_1->refill_idx].buffer =
    VAR_3;
   VAR_4 = FUNC_0(VAR_3);
  } else {
   VAR_4 = FUNC_0(VAR_1->recv_buf_list
           [VAR_1->refill_idx].buffer);
  }

  VAR_1->recv_buf_list[VAR_1->refill_idx].data = VAR_4;

  VAR_2[VAR_1->refill_idx].buffer_ptr =
   FUNC_2(VAR_1->recv_buf_list[
         VAR_1->refill_idx].buffer);

  VAR_1->refill_idx = FUNC_1(VAR_1->refill_idx, 1,
           VAR_1->max_count);
  VAR_5++;
  VAR_1->refill_count--;
 }

 if (VAR_1->refill_count)
  VAR_5 +=
   FUNC_3(VAR_1, VAR_2);






 return VAR_5;
}
