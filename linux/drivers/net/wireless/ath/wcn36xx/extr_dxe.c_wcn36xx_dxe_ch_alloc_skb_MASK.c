
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_dxe_ctl {struct wcn36xx_dxe_ctl* next; } ;
struct wcn36xx_dxe_ch {int desc_num; struct wcn36xx_dxe_ctl* head_blk_ctl; } ;
struct wcn36xx {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wcn36xx_dxe_ctl*,int ) ;

__attribute__((used)) static int FUNC_1(struct wcn36xx *VAR_1,
        struct wcn36xx_dxe_ch *VAR_2)
{
 int VAR_3;
 struct wcn36xx_dxe_ctl *VAR_4 = ((void*)0);

 VAR_4 = VAR_2->head_blk_ctl;

 for (VAR_3 = 0; VAR_3 < VAR_2->desc_num; VAR_3++) {
  FUNC_0(VAR_1->dev, VAR_4, VAR_0);
  VAR_4 = VAR_4->next;
 }

 return 0;
}
