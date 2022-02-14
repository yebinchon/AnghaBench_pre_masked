
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int prev_isolation; int isolation; } ;
struct qeth_card {int conf_mutex; TYPE_2__ options; TYPE_1__* gdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum qeth_ipa_isolation_modes { ____Placeholder_qeth_ipa_isolation_modes } qeth_ipa_isolation_modes ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (int *,char*) ;
 struct qeth_card* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct qeth_card*) ;
 int FUNC_7 (struct qeth_card*,int) ;
 scalar_t__ FUNC_8 (char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_8,
  struct device_attribute *VAR_9, const char *VAR_10, size_t VAR_11)
{
 struct qeth_card *VAR_12 = FUNC_3(VAR_8);
 enum qeth_ipa_isolation_modes VAR_13;
 int VAR_14 = 0;

 if (!VAR_12)
  return -VAR_3;

 FUNC_4(&VAR_12->conf_mutex);
 if (!FUNC_0(VAR_12) && !FUNC_1(VAR_12)) {
  VAR_14 = -VAR_4;
  FUNC_2(&VAR_12->gdev->dev, "Adapter does not "
   "support QDIO data connection isolation\n");
  goto out;
 }


 if (FUNC_8(VAR_10, VAR_2)) {
  VAR_13 = VAR_7;
 } else if (FUNC_8(VAR_10, VAR_1)) {
  VAR_13 = VAR_6;
 } else if (FUNC_8(VAR_10, VAR_0)) {
  VAR_13 = VAR_5;
 } else {
  VAR_14 = -VAR_3;
  goto out;
 }
 VAR_14 = VAR_11;


 VAR_12->options.prev_isolation = VAR_12->options.isolation;
 VAR_12->options.isolation = VAR_13;
 if (FUNC_6(VAR_12)) {
  int VAR_15 = FUNC_7(VAR_12, 1);
  if (VAR_15 != 0)
   VAR_14 = VAR_15;
 }
out:
 FUNC_5(&VAR_12->conf_mutex);
 return VAR_14;
}
