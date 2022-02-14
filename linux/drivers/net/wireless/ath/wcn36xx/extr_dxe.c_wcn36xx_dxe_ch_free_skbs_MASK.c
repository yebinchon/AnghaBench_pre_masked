
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_dxe_ctl {struct wcn36xx_dxe_ctl* next; int skb; } ;
struct wcn36xx_dxe_ch {int desc_num; struct wcn36xx_dxe_ctl* head_blk_ctl; } ;
struct wcn36xx {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct wcn36xx *VAR_0,
         struct wcn36xx_dxe_ch *VAR_1)
{
 struct wcn36xx_dxe_ctl *VAR_2 = VAR_1->head_blk_ctl;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->desc_num; VAR_3++) {
  FUNC_0(VAR_2->skb);
  VAR_2 = VAR_2->next;
 }
}
