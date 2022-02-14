
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_self_init_dram {size_t fw_cnt; int paging_cnt; TYPE_1__* paging; TYPE_1__* fw; } ;
struct iwl_trans {struct iwl_self_init_dram init_dram; } ;
struct iwl_context_info_dram {void** virtual_img; void** umac_img; void** lmac_img; } ;
struct fw_img {int * sec; } ;
struct TYPE_3__ {int physical; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_trans*,int *,TYPE_1__*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct fw_img const*,int) ;
 void* FUNC_5 (int,int,int ) ;

int FUNC_6(struct iwl_trans *VAR_2,
    const struct fw_img *VAR_3,
    struct iwl_context_info_dram *VAR_4)
{
 struct iwl_self_init_dram *VAR_5 = &VAR_2->init_dram;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (FUNC_0(VAR_5->paging,
   "paging shouldn't already be initialized (%d pages)\n",
   VAR_5->paging_cnt))
  FUNC_3(VAR_2);

 VAR_8 = FUNC_4(VAR_3, 0);

 VAR_9 = FUNC_4(VAR_3, VAR_8 + 1);

 VAR_10 = FUNC_4(VAR_3, VAR_8 + VAR_9 + 2);

 VAR_5->fw = FUNC_5(VAR_9 + VAR_8, sizeof(*VAR_5->fw), VAR_1);
 if (!VAR_5->fw)
  return -VAR_0;
 VAR_5->paging = FUNC_5(VAR_10, sizeof(*VAR_5->paging), VAR_1);
 if (!VAR_5->paging)
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_7 = FUNC_2(VAR_2, &VAR_3->sec[VAR_6],
         &VAR_5->fw[VAR_5->fw_cnt]);
  if (VAR_7)
   return VAR_7;
  VAR_4->lmac_img[VAR_6] =
   FUNC_1(VAR_5->fw[VAR_5->fw_cnt].physical);
  VAR_5->fw_cnt++;
 }


 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {

  VAR_7 = FUNC_2(VAR_2,
         &VAR_3->sec[VAR_5->fw_cnt + 1],
         &VAR_5->fw[VAR_5->fw_cnt]);
  if (VAR_7)
   return VAR_7;
  VAR_4->umac_img[VAR_6] =
   FUNC_1(VAR_5->fw[VAR_5->fw_cnt].physical);
  VAR_5->fw_cnt++;
 }
 for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++) {

  int VAR_11 = VAR_5->fw_cnt + VAR_6 + 2;

  VAR_7 = FUNC_2(VAR_2, &VAR_3->sec[VAR_11],
         &VAR_5->paging[VAR_6]);
  if (VAR_7)
   return VAR_7;

  VAR_4->virtual_img[VAR_6] =
   FUNC_1(VAR_5->paging[VAR_6].physical);
  VAR_5->paging_cnt++;
 }

 return 0;
}
