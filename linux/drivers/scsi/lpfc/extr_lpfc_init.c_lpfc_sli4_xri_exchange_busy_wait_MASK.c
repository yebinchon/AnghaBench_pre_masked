
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_sli4_hdw_queue {int lpfc_abts_io_buf_list; } ;
struct TYPE_2__ {int lpfc_abts_els_sgl_list; int lpfc_abts_nvmet_ctx_list; struct lpfc_sli4_hdw_queue* hdwq; } ;
struct lpfc_hba {int cfg_enable_fc4_type; int cfg_hdw_queue; TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_6)
{
 struct lpfc_sli4_hdw_queue *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 1;
 int VAR_12 = 1;
 int VAR_13 = FUNC_0(&VAR_6->sli4_hba.lpfc_abts_els_sgl_list);





 FUNC_3(VAR_3 * 5);


 if (VAR_6->cfg_enable_fc4_type & VAR_2)
  FUNC_1(VAR_6);

 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_6->cfg_hdw_queue; VAR_8++) {
  VAR_7 = &VAR_6->sli4_hba.hdwq[VAR_8];
  VAR_11 = FUNC_0(&VAR_7->lpfc_abts_io_buf_list);
  if (!VAR_11)
   VAR_9++;
 }
 if (VAR_9)
  VAR_11 = 0;

 if (VAR_6->cfg_enable_fc4_type & VAR_2) {
  VAR_12 =
   FUNC_0(&VAR_6->sli4_hba.lpfc_abts_nvmet_ctx_list);
 }

 while (!VAR_13 || !VAR_11 || !VAR_12) {
  if (VAR_10 > VAR_5) {
   if (!VAR_12)
    FUNC_2(VAR_6, VAR_0, VAR_1,
      "6424 NVMET XRI exchange busy "
      "wait time: %d seconds.\n",
      VAR_10/1000);
   if (!VAR_11)
    FUNC_2(VAR_6, VAR_0, VAR_1,
      "6100 IO XRI exchange busy "
      "wait time: %d seconds.\n",
      VAR_10/1000);
   if (!VAR_13)
    FUNC_2(VAR_6, VAR_0, VAR_1,
      "2878 ELS XRI exchange busy "
      "wait time: %d seconds.\n",
      VAR_10/1000);
   FUNC_3(VAR_4);
   VAR_10 += VAR_4;
  } else {
   FUNC_3(VAR_3);
   VAR_10 += VAR_3;
  }

  VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_6->cfg_hdw_queue; VAR_8++) {
   VAR_7 = &VAR_6->sli4_hba.hdwq[VAR_8];
   VAR_11 = FUNC_0(
       &VAR_7->lpfc_abts_io_buf_list);
   if (!VAR_11)
    VAR_9++;
  }
  if (VAR_9)
   VAR_11 = 0;

  if (VAR_6->cfg_enable_fc4_type & VAR_2) {
   VAR_12 = FUNC_0(
    &VAR_6->sli4_hba.lpfc_abts_nvmet_ctx_list);
  }
  VAR_13 =
   FUNC_0(&VAR_6->sli4_hba.lpfc_abts_els_sgl_list);

 }
}
