
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int scan_waiting; int drv_req_rescan; int reset_lock; scalar_t__ reset_in_progress; int scan_lock; scalar_t__ scan_finished; int scan_wait_queue; } ;
struct Scsi_Host {int dummy; } ;


 void FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*) ;
 int FUNC_2 (struct ctlr_info*) ;
 struct ctlr_info* FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct Scsi_Host *VAR_0)
{
 struct ctlr_info *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;







 if (FUNC_6(FUNC_2(VAR_1)))
  return FUNC_0(VAR_1);




 FUNC_4(&VAR_1->scan_lock, VAR_2);
 if (VAR_1->scan_waiting) {
  FUNC_5(&VAR_1->scan_lock, VAR_2);
  return;
 }

 FUNC_5(&VAR_1->scan_lock, VAR_2);


 while (1) {
  FUNC_4(&VAR_1->scan_lock, VAR_2);
  if (VAR_1->scan_finished)
   break;
  VAR_1->scan_waiting = 1;
  FUNC_5(&VAR_1->scan_lock, VAR_2);
  FUNC_7(VAR_1->scan_wait_queue, VAR_1->scan_finished);





 }
 VAR_1->scan_finished = 0;
 VAR_1->scan_waiting = 0;
 FUNC_5(&VAR_1->scan_lock, VAR_2);

 if (FUNC_6(FUNC_2(VAR_1)))
  return FUNC_0(VAR_1);




 FUNC_4(&VAR_1->reset_lock, VAR_2);
 if (VAR_1->reset_in_progress) {
  VAR_1->drv_req_rescan = 1;
  FUNC_5(&VAR_1->reset_lock, VAR_2);
  FUNC_0(VAR_1);
  return;
 }
 FUNC_5(&VAR_1->reset_lock, VAR_2);

 FUNC_1(VAR_1);

 FUNC_0(VAR_1);
}
