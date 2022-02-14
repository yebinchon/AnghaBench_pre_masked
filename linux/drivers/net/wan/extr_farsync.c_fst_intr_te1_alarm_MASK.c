
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct fst_port_info {int dummy; } ;
struct fst_card_info {int dummy; } ;
struct TYPE_2__ {int alarmIndicationSignal; int receiveRemoteAlarm; int lossOfSignal; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fst_card_info*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct fst_port_info*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct fst_card_info *VAR_2, struct fst_port_info *VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;
 u8 VAR_6;

 VAR_4 = FUNC_0(VAR_2, VAR_1.lossOfSignal);
 VAR_5 = FUNC_0(VAR_2, VAR_1.receiveRemoteAlarm);
 VAR_6 = FUNC_0(VAR_2, VAR_1.alarmIndicationSignal);

 if (VAR_4) {



  if (FUNC_3(FUNC_5(VAR_3))) {
   FUNC_1(VAR_0, "Net carrier off\n");
   FUNC_2(FUNC_5(VAR_3));
  }
 } else {



  if (!FUNC_3(FUNC_5(VAR_3))) {
   FUNC_1(VAR_0, "Net carrier on\n");
   FUNC_4(FUNC_5(VAR_3));
  }
 }

 if (VAR_4)
  FUNC_1(VAR_0, "Assert LOS Alarm\n");
 else
  FUNC_1(VAR_0, "De-assert LOS Alarm\n");
 if (VAR_5)
  FUNC_1(VAR_0, "Assert RRA Alarm\n");
 else
  FUNC_1(VAR_0, "De-assert RRA Alarm\n");

 if (VAR_6)
  FUNC_1(VAR_0, "Assert AIS Alarm\n");
 else
  FUNC_1(VAR_0, "De-assert AIS Alarm\n");
}
