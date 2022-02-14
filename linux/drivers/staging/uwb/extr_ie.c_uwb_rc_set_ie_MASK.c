
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wEvent; int bEventType; } ;
struct uwb_rc_evt_set_ie {int bResultCode; TYPE_2__ rceb; } ;
struct uwb_rc_cmd_set_ie {int wIELength; int rccb; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct uwb_rc*,char*,int *,scalar_t__,TYPE_2__*,int) ;
 int FUNC_3 (int) ;

int FUNC_4(struct uwb_rc *VAR_4, struct uwb_rc_cmd_set_ie *VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = &VAR_4->uwb_dev.dev;
 struct uwb_rc_evt_set_ie VAR_8;

 VAR_8.rceb.bEventType = VAR_1;
 VAR_8.rceb.wEvent = VAR_2;
 VAR_6 = FUNC_2(VAR_4, "SET-IE", &VAR_5->rccb,
       sizeof(*VAR_5) + FUNC_1(VAR_5->wIELength),
       &VAR_8.rceb, sizeof(VAR_8));
 if (VAR_6 < 0)
  goto error_cmd;
 else if (VAR_6 != sizeof(VAR_8)) {
  FUNC_0(VAR_7, "SET-IE: not enough data to decode reply "
   "(%d bytes received vs %zu needed)\n",
   VAR_6, sizeof(VAR_8));
  VAR_6 = -VAR_0;
 } else if (VAR_8.bResultCode != VAR_3) {
  FUNC_0(VAR_7, "SET-IE: command execution failed: %s (%d)\n",
   FUNC_3(VAR_8.bResultCode), VAR_8.bResultCode);
  VAR_6 = -VAR_0;
 } else
  VAR_6 = 0;
error_cmd:
 return VAR_6;
}
