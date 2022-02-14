
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_dxe_ctl {struct wcn36xx_dxe_ctl* next; } ;
struct wcn36xx_dxe_ch {int desc_num; struct wcn36xx_dxe_ctl* head_blk_ctl; } ;


 int FUNC_0 (struct wcn36xx_dxe_ctl*) ;

__attribute__((used)) static void FUNC_1(struct wcn36xx_dxe_ch *VAR_0)
{
 struct wcn36xx_dxe_ctl *VAR_1 = VAR_0->head_blk_ctl, *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->desc_num && VAR_1; VAR_3++) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
