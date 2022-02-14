
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int ctl_lock; int * cmd_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct pvr2_hdw*,int,int,int *,int,int *,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct pvr2_hdw *VAR_3)
{




 int VAR_4;
 FUNC_1(VAR_3->ctl_lock); do {
  VAR_3->cmd_buffer[0] = VAR_0;
  VAR_4 = FUNC_2(VAR_3,VAR_1*1,!0,
        VAR_3->cmd_buffer,1,
        VAR_3->cmd_buffer,1);
  if (VAR_4 < 0) break;
 } while(0); FUNC_0(VAR_3->ctl_lock);
 if (VAR_4) {
  FUNC_3(VAR_2,
      "Probe of device endpoint 1 result status %d",
      VAR_4);
 } else {
  FUNC_3(VAR_2,
      "Probe of device endpoint 1 succeeded");
 }
 return VAR_4 == 0;
}
