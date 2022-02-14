
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int invert4; } ;
struct qeth_card {int conf_mutex; int ip_lock; TYPE_1__ ipato; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qeth_card*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct qeth_card *VAR_5 = FUNC_0(VAR_1);
 bool VAR_6;
 int VAR_7 = 0;

 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->conf_mutex);
 if (FUNC_5(VAR_3, "toggle")) {
  VAR_6 = !VAR_5->ipato.invert4;
 } else if (FUNC_1(VAR_3, &VAR_6)) {
  VAR_7 = -VAR_0;
  goto out;
 }

 if (VAR_5->ipato.invert4 != VAR_6) {
  VAR_5->ipato.invert4 = VAR_6;
  FUNC_2(&VAR_5->ip_lock);
  FUNC_4(VAR_5);
  FUNC_3(&VAR_5->ip_lock);
 }
out:
 FUNC_3(&VAR_5->conf_mutex);
 return VAR_7 ? VAR_7 : VAR_4;
}
