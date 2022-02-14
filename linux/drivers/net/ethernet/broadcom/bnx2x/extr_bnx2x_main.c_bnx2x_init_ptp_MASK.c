
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int timecounter_init_done; int cyclecounter; int timecounter; int ptp_task; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int ) ;

void FUNC_8(struct bnx2x *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_0("Stopping PTP initialization\n");
  return;
 }


 FUNC_2(&VAR_2->ptp_task, VAR_1);





 if (!VAR_2->timecounter_init_done) {
  FUNC_4(VAR_2);
  FUNC_7(&VAR_2->timecounter, &VAR_2->cyclecounter,
     FUNC_6(FUNC_5()));
  VAR_2->timecounter_init_done = 1;
 }

 FUNC_1(VAR_0, "PTP initialization ended successfully\n");
}
