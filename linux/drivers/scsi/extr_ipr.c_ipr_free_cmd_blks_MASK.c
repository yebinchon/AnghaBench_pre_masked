
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ioa_cfg {int * ipr_cmd_pool; int ** ipr_cmnd_list_dma; int ** ipr_cmnd_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int **) ;

__attribute__((used)) static void FUNC_3(struct ipr_ioa_cfg *VAR_1)
{
 int VAR_2;

 if (VAR_1->ipr_cmnd_list) {
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   if (VAR_1->ipr_cmnd_list[VAR_2])
    FUNC_1(VAR_1->ipr_cmd_pool,
           VAR_1->ipr_cmnd_list[VAR_2],
           VAR_1->ipr_cmnd_list_dma[VAR_2]);

   VAR_1->ipr_cmnd_list[VAR_2] = ((void*)0);
  }
 }

 if (VAR_1->ipr_cmd_pool)
  FUNC_0(VAR_1->ipr_cmd_pool);

 FUNC_2(VAR_1->ipr_cmnd_list);
 FUNC_2(VAR_1->ipr_cmnd_list_dma);
 VAR_1->ipr_cmnd_list = ((void*)0);
 VAR_1->ipr_cmnd_list_dma = ((void*)0);
 VAR_1->ipr_cmd_pool = ((void*)0);
}
