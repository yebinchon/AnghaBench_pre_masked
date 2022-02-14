
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct circ_buf {size_t head; int * buf; int tail; } ;
struct TYPE_2__ {int * last_used; struct circ_buf mask_id_free_list; } ;
struct nfp_flower_priv {TYPE_1__ mask_ids; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 scalar_t__ FUNC_0 (size_t,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,size_t*,int) ;

__attribute__((used)) static int FUNC_3(struct nfp_app *VAR_3, u8 VAR_4)
{
 struct nfp_flower_priv *VAR_5 = VAR_3->priv;
 struct circ_buf *VAR_6;

 VAR_6 = &VAR_5->mask_ids.mask_id_free_list;

 if (FUNC_0(VAR_6->head, VAR_6->tail, VAR_2) == 0)
  return -VAR_0;

 FUNC_2(&VAR_6->buf[VAR_6->head], &VAR_4, VAR_1);
 VAR_6->head = (VAR_6->head + VAR_1) %
       (VAR_2 * VAR_1);

 VAR_5->mask_ids.last_used[VAR_4] = FUNC_1();

 return 0;
}
