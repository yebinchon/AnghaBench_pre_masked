
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fake_broadcast; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_1__ options; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct qeth_card *VAR_7 = FUNC_0(VAR_3);
 char *VAR_8;
 int VAR_9, VAR_10 = 0;

 if (!VAR_7)
  return -VAR_1;

 FUNC_1(&VAR_7->conf_mutex);
 if (VAR_7->state != VAR_0) {
  VAR_10 = -VAR_2;
  goto out;
 }

 VAR_9 = FUNC_3(VAR_5, &VAR_8, 16);
 if ((VAR_9 == 0) || (VAR_9 == 1))
  VAR_7->options.fake_broadcast = VAR_9;
 else
  VAR_10 = -VAR_1;
out:
 FUNC_2(&VAR_7->conf_mutex);
 return VAR_10 ? VAR_10 : VAR_6;
}
