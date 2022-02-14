
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct circ_buf {size_t head; int * buf; int tail; } ;
struct TYPE_2__ {struct circ_buf free_list; } ;
struct nfp_flower_priv {int stats_ring_size; TYPE_1__ stats_ids; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int FUNC_0 (size_t,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct nfp_app *VAR_2, u32 VAR_3)
{
 struct nfp_flower_priv *VAR_4 = VAR_2->priv;
 struct circ_buf *VAR_5;

 VAR_5 = &VAR_4->stats_ids.free_list;

 if (!FUNC_0(VAR_5->head, VAR_5->tail,
   VAR_4->stats_ring_size * VAR_1 -
   VAR_1 + 1))
  return -VAR_0;

 FUNC_1(&VAR_5->buf[VAR_5->head], &VAR_3, VAR_1);
 VAR_5->head = (VAR_5->head + VAR_1) %
       (VAR_4->stats_ring_size * VAR_1);

 return 0;
}
