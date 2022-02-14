
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int wEvent; void* bEventType; } ;
struct uwb_rc_evt_dev_addr_mgmt {int bResultCode; TYPE_3__ rceb; } ;
struct TYPE_5__ {int wCommand; void* bCommandType; } ;
struct uwb_rc_cmd_dev_addr_mgmt {int bmOperationType; TYPE_2__ rccb; int baAddr; } ;
struct TYPE_4__ {int dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (struct uwb_rc_cmd_dev_addr_mgmt*) ;
 struct uwb_rc_cmd_dev_addr_mgmt* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int const*,size_t) ;
 int FUNC_6 (struct uwb_rc*,char*,TYPE_2__*,int,TYPE_3__*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static
int FUNC_8(struct uwb_rc *VAR_7,
    u8 VAR_8, const u8 *VAR_9,
    struct uwb_rc_evt_dev_addr_mgmt *VAR_10)
{
 int VAR_11;
 struct uwb_rc_cmd_dev_addr_mgmt *VAR_12;

 VAR_11 = -VAR_1;
 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_3);
 if (VAR_12 == ((void*)0))
  goto error_kzalloc;
 VAR_12->rccb.bCommandType = VAR_4;
 VAR_12->rccb.wCommand = FUNC_1(VAR_5);
 VAR_12->bmOperationType = VAR_8;
 if (VAR_9) {
  size_t VAR_13 = 0;
  switch (VAR_8 >> 1) {
  case 0: VAR_13 = 2; break;
  case 1: VAR_13 = 6; break;
  default: FUNC_0();
  }
  FUNC_5(VAR_12->baAddr, VAR_9, VAR_13);
 }
 VAR_10->rceb.bEventType = VAR_4;
 VAR_10->rceb.wEvent = VAR_5;
 VAR_11 = FUNC_6(VAR_7, "DEV-ADDR-MGMT",
       &VAR_12->rccb, sizeof(*VAR_12),
       &VAR_10->rceb, sizeof(*VAR_10));
 if (VAR_11 < 0)
  goto error_cmd;
 if (VAR_11 < sizeof(*VAR_10)) {
  FUNC_2(&VAR_7->uwb_dev.dev,
   "DEV-ADDR-MGMT: not enough data replied: "
   "%d vs %zu bytes needed\n", VAR_11, sizeof(*VAR_10));
  VAR_11 = -VAR_2;
 } else if (VAR_10->bResultCode != VAR_6) {
  FUNC_2(&VAR_7->uwb_dev.dev,
   "DEV-ADDR-MGMT: command execution failed: %s (%d)\n",
   FUNC_7(VAR_10->bResultCode),
   VAR_10->bResultCode);
  VAR_11 = -VAR_0;
 } else
  VAR_11 = 0;
error_cmd:
 FUNC_3(VAR_12);
error_kzalloc:
 return VAR_11;
}
