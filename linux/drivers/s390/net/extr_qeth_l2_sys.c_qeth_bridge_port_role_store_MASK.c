
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int role; scalar_t__ reflect_promisc; } ;
struct TYPE_4__ {TYPE_1__ sbp; } ;
struct qeth_card {int conf_mutex; TYPE_2__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum qeth_sbp_roles { ____Placeholder_qeth_sbp_roles } qeth_sbp_roles ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qeth_card*,int) ;
 scalar_t__ FUNC_4 (struct qeth_card*) ;
 scalar_t__ FUNC_5 (struct qeth_card*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_6,
  struct device_attribute *VAR_7, const char *VAR_8, size_t VAR_9)
{
 struct qeth_card *VAR_10 = FUNC_0(VAR_6);
 int VAR_11 = 0;
 enum qeth_sbp_roles VAR_12;

 if (!VAR_10)
  return -VAR_1;
 if (FUNC_6(VAR_8, "primary"))
  VAR_12 = VAR_4;
 else if (FUNC_6(VAR_8, "secondary"))
  VAR_12 = VAR_5;
 else if (FUNC_6(VAR_8, "none"))
  VAR_12 = VAR_3;
 else
  return -VAR_1;

 FUNC_1(&VAR_10->conf_mutex);

 if (FUNC_5(VAR_10))
  VAR_11 = -VAR_0;
 else if (VAR_10->options.sbp.reflect_promisc)

  VAR_11 = -VAR_2;
 else if (FUNC_4(VAR_10)) {
  VAR_11 = FUNC_3(VAR_10, VAR_12);
  if (!VAR_11)
   VAR_10->options.sbp.role = VAR_12;
 } else
  VAR_10->options.sbp.role = VAR_12;

 FUNC_2(&VAR_10->conf_mutex);

 return VAR_11 ? VAR_11 : VAR_9;
}
