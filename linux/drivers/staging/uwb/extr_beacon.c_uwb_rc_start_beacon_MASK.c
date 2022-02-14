
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_6__ {int wEvent; void* bEventType; } ;
struct uwb_rc_evt_confirm {scalar_t__ bResultCode; TYPE_3__ rceb; } ;
struct TYPE_5__ {void* wCommand; void* bCommandType; } ;
struct uwb_rc_cmd_start_beacon {TYPE_2__ rccb; int bChannelNumber; void* wBPSTOffset; } ;
struct TYPE_4__ {int dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,scalar_t__) ;
 int FUNC_2 (struct uwb_rc_cmd_start_beacon*) ;
 struct uwb_rc_cmd_start_beacon* FUNC_3 (int,int ) ;
 int FUNC_4 (struct uwb_rc*,char*,TYPE_2__*,int,TYPE_3__*,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct uwb_rc *VAR_6, u16 VAR_7, u8 VAR_8)
{
 int VAR_9;
 struct uwb_rc_cmd_start_beacon *VAR_10;
 struct uwb_rc_evt_confirm VAR_11;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;
 VAR_10->rccb.bCommandType = VAR_3;
 VAR_10->rccb.wCommand = FUNC_0(VAR_4);
 VAR_10->wBPSTOffset = FUNC_0(VAR_7);
 VAR_10->bChannelNumber = VAR_8;
 VAR_11.rceb.bEventType = VAR_3;
 VAR_11.rceb.wEvent = VAR_4;
 VAR_9 = FUNC_4(VAR_6, "START-BEACON", &VAR_10->rccb, sizeof(*VAR_10),
       &VAR_11.rceb, sizeof(VAR_11));
 if (VAR_9 < 0)
  goto error_cmd;
 if (VAR_11.bResultCode != VAR_5) {
  FUNC_1(&VAR_6->uwb_dev.dev,
   "START-BEACON: command execution failed: %s (%d)\n",
   FUNC_5(VAR_11.bResultCode), VAR_11.bResultCode);
  VAR_9 = -VAR_0;
 }
error_cmd:
 FUNC_2(VAR_10);
 return VAR_9;
}
