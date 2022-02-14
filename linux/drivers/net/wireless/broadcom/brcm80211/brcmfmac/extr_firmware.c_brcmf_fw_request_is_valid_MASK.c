
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_fw_request {int n_items; struct brcmf_fw_item* items; } ;
struct brcmf_fw_item {int path; } ;



__attribute__((used)) static bool FUNC_0(struct brcmf_fw_request *VAR_0)
{
 struct brcmf_fw_item *VAR_1;
 int VAR_2;

 if (!VAR_0->n_items)
  return 0;

 for (VAR_2 = 0, VAR_1 = &VAR_0->items[0]; VAR_2 < VAR_0->n_items; VAR_2++, VAR_1++) {
  if (!VAR_1->path)
   return 0;
 }
 return 1;
}
