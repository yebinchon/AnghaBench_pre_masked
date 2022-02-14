
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esas2r_sas_nvram {int dev_wait_time; int dev_wait_count; } ;
struct TYPE_2__ {int * interrupt_cx; } ;
struct esas2r_adapter {int disc_wait_time; int disc_wait_cnt; scalar_t__ prev_dev_cnt; int flags; TYPE_1__ general_req; int disc_start_time; int flags2; struct esas2r_sas_nvram* nvram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct esas2r_adapter *VAR_7)
{
 struct esas2r_sas_nvram *VAR_8 = VAR_7->nvram;

 FUNC_4();

 FUNC_0(VAR_3, &VAR_7->flags);
 FUNC_0(VAR_1, &VAR_7->flags2);
 FUNC_0(VAR_0, &VAR_7->flags2);

 VAR_7->disc_start_time = FUNC_6(VAR_6);
 VAR_7->disc_wait_time = VAR_8->dev_wait_time * 1000;
 VAR_7->disc_wait_cnt = VAR_8->dev_wait_count;

 if (VAR_7->disc_wait_cnt > VAR_5)
  VAR_7->disc_wait_cnt = VAR_5;







 FUNC_2("starting discovery...");

 VAR_7->general_req.interrupt_cx = ((void*)0);

 if (FUNC_7(VAR_2, &VAR_7->flags) ||
     FUNC_7(VAR_4, &VAR_7->flags)) {
  if (VAR_7->prev_dev_cnt == 0) {



   VAR_7->disc_wait_time = 0;
  } else {







   VAR_7->disc_wait_cnt = VAR_7->prev_dev_cnt;






   if (VAR_7->disc_wait_time < 15000)
    VAR_7->disc_wait_time = 15000;
  }
 }

 FUNC_3("disc wait count: %d", VAR_7->disc_wait_cnt);
 FUNC_3("disc wait time: %d", VAR_7->disc_wait_time);

 if (VAR_7->disc_wait_time == 0)
  FUNC_1(VAR_7);

 FUNC_5();
}
