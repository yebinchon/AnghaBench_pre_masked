
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct circ_buf {size_t head; size_t tail; int* buf; } ;
struct TYPE_2__ {scalar_t__ init_unalloc; struct circ_buf free_list; } ;
struct nfp_flower_priv {int stats_ring_size; scalar_t__ active_mem_unit; scalar_t__ total_mem_units; TYPE_1__ stats_ids; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct nfp_app *VAR_4, u32 *VAR_5)
{
 struct nfp_flower_priv *VAR_6 = VAR_4->priv;
 u32 VAR_7, VAR_8;
 struct circ_buf *VAR_9;

 VAR_9 = &VAR_6->stats_ids.free_list;
 VAR_7 = VAR_6->stats_ring_size;

 if (VAR_6->stats_ids.init_unalloc > 0) {
  if (VAR_6->active_mem_unit == VAR_6->total_mem_units) {
   VAR_6->stats_ids.init_unalloc--;
   VAR_6->active_mem_unit = 0;
  }

  *VAR_5 =
   FUNC_0(VAR_3,
       VAR_6->stats_ids.init_unalloc - 1) |
   FUNC_0(VAR_2,
       VAR_6->active_mem_unit);
  VAR_6->active_mem_unit++;
  return 0;
 }


 if (VAR_9->head == VAR_9->tail) {
  *VAR_5 = VAR_7;
  return -VAR_0;
 }

 FUNC_1(&VAR_8, &VAR_9->buf[VAR_9->tail], VAR_1);
 *VAR_5 = VAR_8;
 FUNC_1(&VAR_9->buf[VAR_9->tail], &VAR_7, VAR_1);
 VAR_9->tail = (VAR_9->tail + VAR_1) %
       (VAR_6->stats_ring_size * VAR_1);

 return 0;
}
