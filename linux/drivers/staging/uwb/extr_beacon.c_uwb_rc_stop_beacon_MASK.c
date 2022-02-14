
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uwb_rccb {int wCommand; void* bCommandType; } ;
struct TYPE_4__ {int wEvent; void* bEventType; } ;
struct uwb_rc_evt_confirm {scalar_t__ bResultCode; TYPE_2__ rceb; } ;
struct TYPE_3__ {int dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,scalar_t__) ;
 int FUNC_2 (struct uwb_rccb*) ;
 struct uwb_rccb* FUNC_3 (int,int ) ;
 int FUNC_4 (struct uwb_rc*,char*,struct uwb_rccb*,int,TYPE_2__*,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct uwb_rc *VAR_6)
{
 int VAR_7;
 struct uwb_rccb *VAR_8;
 struct uwb_rc_evt_confirm VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;
 VAR_8->bCommandType = VAR_3;
 VAR_8->wCommand = FUNC_0(VAR_4);
 VAR_9.rceb.bEventType = VAR_3;
 VAR_9.rceb.wEvent = VAR_4;
 VAR_7 = FUNC_4(VAR_6, "STOP-BEACON", VAR_8, sizeof(*VAR_8),
       &VAR_9.rceb, sizeof(VAR_9));
 if (VAR_7 < 0)
  goto error_cmd;
 if (VAR_9.bResultCode != VAR_5) {
  FUNC_1(&VAR_6->uwb_dev.dev,
   "STOP-BEACON: command execution failed: %s (%d)\n",
   FUNC_5(VAR_9.bResultCode), VAR_9.bResultCode);
  VAR_7 = -VAR_0;
 }
error_cmd:
 FUNC_2(VAR_8);
 return VAR_7;
}
