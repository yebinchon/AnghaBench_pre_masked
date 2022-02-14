
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct uwb_rc*) ;
 int FUNC_2 (struct uwb_rc*) ;
 int FUNC_3 (struct uwb_rc*) ;
 int FUNC_4 (struct uwb_rc*) ;
 int FUNC_5 (struct uwb_rc*) ;
 int FUNC_6 (struct uwb_rc*) ;
 int FUNC_7 (struct uwb_rc*) ;

__attribute__((used)) static int FUNC_8(struct uwb_rc *VAR_0)
{
 int VAR_1;
 struct device *VAR_2 = &VAR_0->uwb_dev.dev;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_2, "cannot setup UWB radio: %d\n", VAR_1);
  goto error;
 }
 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_2, "cannot setup UWB MAC address: %d\n", VAR_1);
  goto error;
 }
 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_2, "cannot assign UWB DevAddr: %d\n", VAR_1);
  goto error;
 }
 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_2, "cannot setup IE subsystem: %d\n", VAR_1);
  goto error_ie_setup;
 }
 VAR_1 = FUNC_7(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_2, "cannot setup reservation subsystem: %d\n", VAR_1);
  goto error_rsv_setup;
 }
 FUNC_1(VAR_0);
 return 0;

error_rsv_setup:
 FUNC_4(VAR_0);
error_ie_setup:
error:
 return VAR_1;
}
