
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct beiscsi_hba {int dummy; } ;
struct be_set_eqd {int eq_id; int delay_multiplier; } ;
struct be_dma_mem {struct be_cmd_req_modify_eq_delay* va; } ;
struct be_cmd_req_modify_eq_delay {TYPE_1__* delay; void* num_eq; } ;
struct TYPE_2__ {void* delay_multiplier; scalar_t__ phase; void* eq_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int ,int *,int ) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_dma_mem*,int ,int ,int) ;
 void* FUNC_2 (int) ;

int FUNC_3(struct beiscsi_hba *VAR_3,
       struct be_set_eqd *VAR_4, int VAR_5)
{
 struct be_cmd_req_modify_eq_delay *VAR_6;
 struct be_dma_mem VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_3, &VAR_7, VAR_0,
   VAR_1, sizeof(*VAR_6));
 if (VAR_9)
  return VAR_9;

 VAR_6 = VAR_7.va;
 VAR_6->num_eq = FUNC_2(VAR_5);
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_6->delay[VAR_8].eq_id = FUNC_2(VAR_4[VAR_8].eq_id);
  VAR_6->delay[VAR_8].phase = 0;
  VAR_6->delay[VAR_8].delay_multiplier =
    FUNC_2(VAR_4[VAR_8].delay_multiplier);
 }

 return FUNC_0(VAR_3, &VAR_7,
         VAR_2, ((void*)0), 0);
}
