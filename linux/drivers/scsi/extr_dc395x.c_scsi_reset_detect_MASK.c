
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int delay_time; } ;
struct AdapterCtlBlk {int acb_flag; int * active_dcb; TYPE_1__ eeprom; scalar_t__ last_reset; int waiting_timer; } ;


 int FUNC_0 (struct AdapterCtlBlk*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct AdapterCtlBlk*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct AdapterCtlBlk*,int ,int *,int) ;
 int FUNC_4 (int ,char*,struct AdapterCtlBlk*) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (struct AdapterCtlBlk*) ;
 int FUNC_6 (struct AdapterCtlBlk*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct AdapterCtlBlk*) ;

__attribute__((used)) static void FUNC_10(struct AdapterCtlBlk *VAR_11)
{
 FUNC_4(VAR_4, "scsi_reset_detect: acb=%p\n", VAR_11);

 if (FUNC_7(&VAR_11->waiting_timer))
  FUNC_2(&VAR_11->waiting_timer);

 FUNC_0(VAR_11, VAR_9, VAR_2);
 FUNC_0(VAR_11, VAR_8, VAR_1);

 FUNC_8(500);

 VAR_11->last_reset =
     VAR_10 + 5 * VAR_3 / 2 +
     VAR_3 * VAR_11->eeprom.delay_time;

 FUNC_1(VAR_11, "scsi_reset_detect");
 FUNC_6(VAR_11);



 if (VAR_11->acb_flag & VAR_6) {
  VAR_11->acb_flag |= VAR_7;
 } else {
  VAR_11->acb_flag |= VAR_5;
  FUNC_5(VAR_11);
  FUNC_3(VAR_11, VAR_0, ((void*)0), 1);

  VAR_11->active_dcb = ((void*)0);
  VAR_11->acb_flag = 0;
  FUNC_9(VAR_11);
 }
}
