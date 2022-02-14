
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_dxe_ctl {int ctl_blk_order; struct wcn36xx_dxe_ctl* next; } ;
struct wcn36xx_dxe_ch {int desc_num; struct wcn36xx_dxe_ctl* head_blk_ctl; struct wcn36xx_dxe_ctl* tail_blk_ctl; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wcn36xx_dxe_ctl* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wcn36xx_dxe_ch*) ;

__attribute__((used)) static int FUNC_3(struct wcn36xx_dxe_ch *VAR_2)
{
 struct wcn36xx_dxe_ctl *VAR_3 = ((void*)0);
 struct wcn36xx_dxe_ctl *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_1(&VAR_2->lock);
 for (VAR_5 = 0; VAR_5 < VAR_2->desc_num; VAR_5++) {
  VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
  if (!VAR_4)
   goto out_fail;

  VAR_4->ctl_blk_order = VAR_5;
  if (VAR_5 == 0) {
   VAR_2->head_blk_ctl = VAR_4;
   VAR_2->tail_blk_ctl = VAR_4;
  } else if (VAR_2->desc_num - 1 == VAR_5) {
   VAR_3->next = VAR_4;
   VAR_4->next = VAR_2->head_blk_ctl;
  } else {
   VAR_3->next = VAR_4;
  }
  VAR_3 = VAR_4;
 }

 return 0;

out_fail:
 FUNC_2(VAR_2);
 return -VAR_0;
}
