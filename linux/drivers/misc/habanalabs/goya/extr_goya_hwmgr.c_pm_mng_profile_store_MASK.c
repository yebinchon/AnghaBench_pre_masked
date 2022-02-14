
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {scalar_t__ pm_mng_profile; int fpriv_list_lock; int dev; int work_freq; int curr_pll_profile; scalar_t__ compute_ctx; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 struct hl_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct hl_device*) ;
 int FUNC_4 (struct hl_device*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_7,
  struct device_attribute *VAR_8, const char *VAR_9, size_t VAR_10)
{
 struct hl_device *VAR_11 = FUNC_1(VAR_7);

 if (FUNC_3(VAR_11)) {
  VAR_10 = -VAR_1;
  goto out;
 }

 FUNC_5(&VAR_11->fpriv_list_lock);

 if (VAR_11->compute_ctx) {
  FUNC_0(VAR_11->dev,
   "Can't change PM profile while compute context is opened on the device\n");
  VAR_10 = -VAR_2;
  goto unlock_mutex;
 }

 if (FUNC_8("auto", VAR_9, FUNC_7("auto")) == 0) {

  if (VAR_11->pm_mng_profile == VAR_6) {
   VAR_11->curr_pll_profile = VAR_3;
   FUNC_4(VAR_11, VAR_4);
   VAR_11->pm_mng_profile = VAR_5;
  }
 } else if (FUNC_8("manual", VAR_9, FUNC_7("manual")) == 0) {
  if (VAR_11->pm_mng_profile == VAR_5) {





   VAR_11->pm_mng_profile = VAR_6;

   FUNC_6(&VAR_11->fpriv_list_lock);




   FUNC_2(&VAR_11->work_freq);

   return VAR_10;
  }
 } else {
  FUNC_0(VAR_11->dev, "value should be auto or manual\n");
  VAR_10 = -VAR_0;
 }

unlock_mutex:
 FUNC_6(&VAR_11->fpriv_list_lock);
out:
 return VAR_10;
}
