
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uwb_rc_evt_beacon {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct TYPE_4__ {int size; } ;
struct uwb_event {TYPE_2__ notif; } ;
struct uwb_beacon_frame {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct uwb_rc *VAR_1, struct uwb_event *VAR_2,
        struct uwb_rc_evt_beacon *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct uwb_beacon_frame *VAR_5;
 struct device *VAR_6 = &VAR_1->uwb_dev.dev;


 if (VAR_2->notif.size < sizeof(*VAR_3) + sizeof(*VAR_5)) {
  FUNC_0(VAR_6, "BEACON event: Not enough data to decode "
   "(%zu vs %zu bytes needed)\n", VAR_2->notif.size,
   sizeof(*VAR_3) + sizeof(*VAR_5));
  goto error;
 }


 VAR_4 = 0;
error:
 return VAR_4;
}
