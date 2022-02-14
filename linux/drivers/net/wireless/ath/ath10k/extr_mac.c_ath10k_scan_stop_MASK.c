
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int scan_id; } ;
struct wmi_stop_scan_arg {int req_id; TYPE_2__ u; int req_type; } ;
struct TYPE_3__ {scalar_t__ state; int completed; } ;
struct ath10k {int data_lock; TYPE_1__ scan; int conf_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,char*,...) ;
 int FUNC_2 (struct ath10k*,struct wmi_stop_scan_arg*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_5)
{
 struct wmi_stop_scan_arg VAR_6 = {
  .req_id = 1,
  .req_type = VAR_4,
  .u.scan_id = VAR_0,
 };
 int VAR_7;

 FUNC_3(&VAR_5->conf_mutex);

 VAR_7 = FUNC_2(VAR_5, &VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_5, "failed to stop wmi scan: %d\n", VAR_7);
  goto out;
 }

 VAR_7 = FUNC_6(&VAR_5->scan.completed, 3 * VAR_3);
 if (VAR_7 == 0) {
  FUNC_1(VAR_5, "failed to receive scan abortion completion: timed out\n");
  VAR_7 = -VAR_2;
 } else if (VAR_7 > 0) {
  VAR_7 = 0;
 }

out:







 FUNC_4(&VAR_5->data_lock);
 if (VAR_5->scan.state != VAR_1)
  FUNC_0(VAR_5);
 FUNC_5(&VAR_5->data_lock);

 return VAR_7;
}
