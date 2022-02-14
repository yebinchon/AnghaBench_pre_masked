
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ role; int reflect_promisc; int reflect_promisc_primary; } ;
struct TYPE_4__ {TYPE_1__ sbp; } ;
struct qeth_card {int conf_mutex; TYPE_2__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct qeth_card*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
  struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct qeth_card *VAR_8 = FUNC_0(VAR_4);
 int VAR_9, VAR_10;
 int VAR_11 = 0;

 if (!VAR_8)
  return -VAR_1;

 if (FUNC_4(VAR_6, "none")) {
  VAR_9 = 0;
  VAR_10 = 0;
 } else if (FUNC_4(VAR_6, "primary")) {
  VAR_9 = 1;
  VAR_10 = 1;
 } else if (FUNC_4(VAR_6, "secondary")) {
  VAR_9 = 1;
  VAR_10 = 0;
 } else
  return -VAR_1;

 FUNC_1(&VAR_8->conf_mutex);

 if (FUNC_3(VAR_8))
  VAR_11 = -VAR_0;
 else if (VAR_8->options.sbp.role != VAR_3)
  VAR_11 = -VAR_2;
 else {
  VAR_8->options.sbp.reflect_promisc = VAR_9;
  VAR_8->options.sbp.reflect_promisc_primary = VAR_10;
  VAR_11 = 0;
 }

 FUNC_2(&VAR_8->conf_mutex);

 return VAR_11 ? VAR_11 : VAR_7;
}
