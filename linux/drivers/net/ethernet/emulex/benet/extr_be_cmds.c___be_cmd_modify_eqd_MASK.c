
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_set_eqd {int eq_id; int delay_multiplier; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_req_modify_eq_delay {TYPE_1__* set_eqd; void* num_eq; int hdr; } ;
struct be_adapter {int mcc_lock; } ;
struct TYPE_2__ {void* delay_multiplier; scalar_t__ phase; void* eq_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_2 (int) ;
 struct be_cmd_req_modify_eq_delay* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct be_mcc_wrb* FUNC_6 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_7(struct be_adapter *VAR_3,
          struct be_set_eqd *VAR_4, int VAR_5)
{
 struct be_mcc_wrb *VAR_6;
 struct be_cmd_req_modify_eq_delay *VAR_7;
 int VAR_8 = 0, VAR_9;

 FUNC_4(&VAR_3->mcc_lock);

 VAR_6 = FUNC_6(VAR_3);
 if (!VAR_6) {
  VAR_8 = -VAR_1;
  goto err;
 }
 VAR_7 = FUNC_3(VAR_6);

 FUNC_1(&VAR_7->hdr, VAR_0,
          VAR_2, sizeof(*VAR_7), VAR_6,
          ((void*)0));

 VAR_7->num_eq = FUNC_2(VAR_5);
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_7->set_eqd[VAR_9].eq_id = FUNC_2(VAR_4[VAR_9].eq_id);
  VAR_7->set_eqd[VAR_9].phase = 0;
  VAR_7->set_eqd[VAR_9].delay_multiplier =
    FUNC_2(VAR_4[VAR_9].delay_multiplier);
 }

 VAR_8 = FUNC_0(VAR_3);
err:
 FUNC_5(&VAR_3->mcc_lock);
 return VAR_8;
}
