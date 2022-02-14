
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uwb_rccb {int wCommand; void* bCommandType; } ;
struct TYPE_4__ {int wEvent; void* bEventType; } ;
struct uwb_rc_evt_confirm {scalar_t__ bResultCode; TYPE_2__ rceb; } ;
struct TYPE_3__ {int mutex; int dev; } ;
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
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct uwb_rc*,char*,struct uwb_rccb*,size_t,TYPE_2__*,int) ;
 int FUNC_7 (scalar_t__) ;

int FUNC_8(struct uwb_rc *VAR_6)
{
 int VAR_7 = -VAR_1;
 struct uwb_rc_evt_confirm VAR_8;
 struct uwb_rccb *VAR_9;
 size_t VAR_10 = sizeof(*VAR_9);

 FUNC_4(&VAR_6->uwb_dev.mutex);
 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  goto error_kzalloc;
 VAR_9->bCommandType = VAR_3;
 VAR_9->wCommand = FUNC_0(VAR_4);
 VAR_8.rceb.bEventType = VAR_3;
 VAR_8.rceb.wEvent = VAR_4;
 VAR_7 = FUNC_6(VAR_6, "RESET", VAR_9, VAR_10,
       &VAR_8.rceb, sizeof(VAR_8));
 if (VAR_7 < 0)
  goto error_cmd;
 if (VAR_8.bResultCode != VAR_5) {
  FUNC_1(&VAR_6->uwb_dev.dev,
   "RESET: command execution failed: %s (%d)\n",
   FUNC_7(VAR_8.bResultCode), VAR_8.bResultCode);
  VAR_7 = -VAR_0;
 }
error_cmd:
 FUNC_2(VAR_9);
error_kzalloc:
 FUNC_5(&VAR_6->uwb_dev.mutex);
 return VAR_7;
}
