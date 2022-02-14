
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int temperature; int wmi_sync; } ;
struct ath10k {scalar_t__ state; int conf_mutex; int data_lock; TYPE_1__ thermal; int dev_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath10k*,char*,...) ;
 int FUNC_1 (struct ath10k*) ;
 struct ath10k* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 unsigned long FUNC_10 (int *,int ) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_7,
     struct device_attribute *VAR_8,
     char *VAR_9)
{
 struct ath10k *VAR_10 = FUNC_2(VAR_7);
 int VAR_11, VAR_12;
 unsigned long VAR_13;

 FUNC_3(&VAR_10->conf_mutex);


 if (VAR_10->state != VAR_1) {
  VAR_11 = -VAR_3;
  goto out;
 }

 FUNC_5(&VAR_10->thermal.wmi_sync);
 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_10, "failed to read temperature %d\n", VAR_11);
  goto out;
 }

 if (FUNC_9(VAR_0, &VAR_10->dev_flags)) {
  VAR_11 = -VAR_4;
  goto out;
 }

 VAR_13 = FUNC_10(&VAR_10->thermal.wmi_sync,
      VAR_2);
 if (!VAR_13) {
  FUNC_0(VAR_10, "failed to synchronize thermal read\n");
  VAR_11 = -VAR_5;
  goto out;
 }

 FUNC_7(&VAR_10->data_lock);
 VAR_12 = VAR_10->thermal.temperature;
 FUNC_8(&VAR_10->data_lock);


 VAR_11 = FUNC_6(VAR_9, VAR_6, "%d\n", VAR_12 * 1000);
out:
 FUNC_4(&VAR_10->conf_mutex);
 return VAR_11;
}
