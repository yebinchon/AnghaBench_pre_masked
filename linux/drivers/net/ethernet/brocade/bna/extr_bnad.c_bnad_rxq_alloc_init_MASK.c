
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnad_rx_unmap_q {int alloc_order; int map_size; int type; } ;
struct bnad {int dummy; } ;
struct bna_rcb {TYPE_1__* rxq; int id; struct bnad_rx_unmap_q* unmap_q; } ;
struct TYPE_2__ {int buffer_size; scalar_t__ multi_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bnad*,struct bna_rcb*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct bnad *VAR_3, struct bna_rcb *VAR_4)
{
 struct bnad_rx_unmap_q *VAR_5 = VAR_4->unmap_q;
 int VAR_6;

 FUNC_2(VAR_3, VAR_4);

 VAR_6 = FUNC_3(VAR_4->rxq->buffer_size);

 VAR_5->type = VAR_1;

 if (FUNC_1(VAR_4->id)) {
  VAR_5->alloc_order = 0;
  VAR_5->map_size = VAR_4->rxq->buffer_size;
 } else {
  if (VAR_4->rxq->multi_buffer) {
   VAR_5->alloc_order = 0;
   VAR_5->map_size = VAR_4->rxq->buffer_size;
   VAR_5->type = VAR_0;
  } else {
   VAR_5->alloc_order = VAR_6;
   VAR_5->map_size =
    (VAR_4->rxq->buffer_size > 2048) ?
    VAR_2 << VAR_6 : 2048;
  }
 }

 FUNC_0((VAR_2 << VAR_6) % VAR_5->map_size);

 return 0;
}
