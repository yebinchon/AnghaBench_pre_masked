
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hostnotification; } ;
struct TYPE_4__ {TYPE_1__ sbp; } ;
struct qeth_card {int conf_mutex; TYPE_2__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qeth_card*,int) ;
 scalar_t__ FUNC_5 (struct qeth_card*) ;
 scalar_t__ FUNC_6 (struct qeth_card*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct qeth_card *VAR_6 = FUNC_0(VAR_2);
 bool VAR_7;
 int VAR_8;

 if (!VAR_6)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_4, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2(&VAR_6->conf_mutex);

 if (FUNC_6(VAR_6))
  VAR_8 = -VAR_0;
 else if (FUNC_5(VAR_6)) {
  VAR_8 = FUNC_4(VAR_6, VAR_7);
  if (!VAR_8)
   VAR_6->options.sbp.hostnotification = VAR_7;
 } else
  VAR_6->options.sbp.hostnotification = VAR_7;

 FUNC_3(&VAR_6->conf_mutex);

 return VAR_8 ? VAR_8 : VAR_5;
}
