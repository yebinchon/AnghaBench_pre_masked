
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
typedef void* u16 ;
struct octeon_skb_page_info {scalar_t__ dma; int * page; } ;
struct octeon_recv_pkt {size_t length; size_t* buffer_size; int ** buffer_ptr; void* octeon_id; void* buffer_count; int rh; } ;
struct octeon_recv_info {struct octeon_recv_pkt* recv_pkt; } ;
struct octeon_droq_info {scalar_t__ length; int rh; } ;
struct octeon_droq {size_t buffer_size; int max_count; TYPE_1__* recv_buf_list; } ;
struct octeon_device {int pci_dev; scalar_t__ octeon_id; } ;
struct __dispatch {int dummy; } ;
struct TYPE_2__ {int * buffer; struct octeon_skb_page_info pg_info; scalar_t__ data; } ;


 size_t FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (int ,int ) ;
 struct octeon_recv_info* FUNC_2 (int) ;

__attribute__((used)) static inline struct octeon_recv_info *FUNC_3(
  struct octeon_device *VAR_0,
  struct octeon_droq *VAR_1,
  u32 VAR_2,
  u32 VAR_3)
{
 struct octeon_droq_info *VAR_4;
 struct octeon_recv_pkt *VAR_5;
 struct octeon_recv_info *VAR_6;
 u32 VAR_7, VAR_8;
 struct octeon_skb_page_info *VAR_9;

 VAR_4 = (struct octeon_droq_info *)VAR_1->recv_buf_list[VAR_3].data;

 VAR_6 = FUNC_2(sizeof(struct __dispatch));
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = VAR_6->recv_pkt;
 VAR_5->rh = VAR_4->rh;
 VAR_5->length = (u32)VAR_4->length;
 VAR_5->buffer_count = (u16)VAR_2;
 VAR_5->octeon_id = (u16)VAR_0->octeon_id;

 VAR_7 = 0;
 VAR_8 = (u32)VAR_4->length;

 while (VAR_2) {
  {
   VAR_9 = &VAR_1->recv_buf_list[VAR_3].pg_info;

   FUNC_1(VAR_0->pci_dev,
           (u64)VAR_9->dma);
   VAR_9->page = ((void*)0);
   VAR_9->dma = 0;
  }

  VAR_5->buffer_size[VAR_7] =
   (VAR_8 >=
    VAR_1->buffer_size) ? VAR_1->buffer_size : VAR_8;

  VAR_5->buffer_ptr[VAR_7] = VAR_1->recv_buf_list[VAR_3].buffer;
  VAR_1->recv_buf_list[VAR_3].buffer = ((void*)0);

  VAR_3 = FUNC_0(VAR_3, 1, VAR_1->max_count);
  VAR_8 -= VAR_1->buffer_size;
  VAR_7++;
  VAR_2--;
 }

 return VAR_6;
}
