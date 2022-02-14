
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; int ip_lock; TYPE_1__ ipato; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qeth_card*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct qeth_card *VAR_7 = FUNC_0(VAR_3);
 bool VAR_8;
 int VAR_9 = 0;

 if (!VAR_7)
  return -VAR_1;

 FUNC_2(&VAR_7->conf_mutex);
 if (VAR_7->state != VAR_0) {
  VAR_9 = -VAR_2;
  goto out;
 }

 if (FUNC_5(VAR_5, "toggle")) {
  VAR_8 = !VAR_7->ipato.enabled;
 } else if (FUNC_1(VAR_5, &VAR_8)) {
  VAR_9 = -VAR_1;
  goto out;
 }

 if (VAR_7->ipato.enabled != VAR_8) {
  VAR_7->ipato.enabled = VAR_8;
  FUNC_2(&VAR_7->ip_lock);
  FUNC_4(VAR_7);
  FUNC_3(&VAR_7->ip_lock);
 }
out:
 FUNC_3(&VAR_7->conf_mutex);
 return VAR_9 ? VAR_9 : VAR_6;
}
