
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_fw_request {int n_items; struct brcmf_fw_item* items; } ;
struct TYPE_2__ {int data; } ;
struct brcmf_fw_item {scalar_t__ type; TYPE_1__ nv_data; int binary; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcmf_fw_request*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct brcmf_fw_request *VAR_2)
{
 struct brcmf_fw_item *VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = &VAR_2->items[0]; VAR_4 < VAR_2->n_items; VAR_4++, VAR_3++) {
  if (VAR_3->type == VAR_0)
   FUNC_2(VAR_3->binary);
  else if (VAR_3->type == VAR_1)
   FUNC_0(VAR_3->nv_data.data);
 }
 FUNC_1(VAR_2);
}
