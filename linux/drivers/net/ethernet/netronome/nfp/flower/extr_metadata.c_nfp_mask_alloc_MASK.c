
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct circ_buf {size_t head; size_t tail; size_t* buf; } ;
struct TYPE_2__ {scalar_t__ init_unallocated; int * last_used; struct circ_buf mask_id_free_list; } ;
struct nfp_flower_priv {TYPE_1__ mask_ids; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (size_t*,size_t*,int) ;

__attribute__((used)) static int FUNC_4(struct nfp_app *VAR_4, u8 *VAR_5)
{
 struct nfp_flower_priv *VAR_6 = VAR_4->priv;
 ktime_t VAR_7;
 struct circ_buf *VAR_8;
 u8 VAR_9, VAR_10;

 VAR_8 = &VAR_6->mask_ids.mask_id_free_list;
 VAR_10 = VAR_2 - 1;

 if (VAR_6->mask_ids.init_unallocated > 0) {
  *VAR_5 = VAR_6->mask_ids.init_unallocated;
  VAR_6->mask_ids.init_unallocated--;
  return 0;
 }


 if (VAR_8->head == VAR_8->tail)
  goto err_not_found;

 FUNC_3(&VAR_9, &VAR_8->buf[VAR_8->tail], VAR_1);
 *VAR_5 = VAR_9;

 VAR_7 = FUNC_0(VAR_6->mask_ids.last_used[*VAR_5],
         VAR_3);

 if (FUNC_1(FUNC_2(), VAR_7))
  goto err_not_found;

 FUNC_3(&VAR_8->buf[VAR_8->tail], &VAR_10, VAR_1);
 VAR_8->tail = (VAR_8->tail + VAR_1) %
       (VAR_2 * VAR_1);

 return 0;

err_not_found:
 *VAR_5 = VAR_10;
 return -VAR_0;
}
