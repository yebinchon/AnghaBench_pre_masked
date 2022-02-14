
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_start_scan_arg {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; int started; } ;
struct ath10k {int data_lock; TYPE_1__ scan; int conf_mutex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*,struct wmi_start_scan_arg const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_4,
        const struct wmi_start_scan_arg *VAR_5)
{
 int VAR_6;

 FUNC_3(&VAR_4->conf_mutex);

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_6(&VAR_4->scan.started, 1 * VAR_3);
 if (VAR_6 == 0) {
  VAR_6 = FUNC_0(VAR_4);
  if (VAR_6)
   FUNC_1(VAR_4, "failed to stop scan: %d\n", VAR_6);

  return -VAR_2;
 }





 FUNC_4(&VAR_4->data_lock);
 if (VAR_4->scan.state == VAR_0) {
  FUNC_5(&VAR_4->data_lock);
  return -VAR_1;
 }
 FUNC_5(&VAR_4->data_lock);

 return 0;
}
