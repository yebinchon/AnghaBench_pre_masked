
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pcnt; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_2__* dev; TYPE_1__ ssqd; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {unsigned int dev_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
  struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct qeth_card *VAR_8 = FUNC_0(VAR_4);
 char *VAR_9;
 unsigned int VAR_10, VAR_11;
 int VAR_12 = 0;

 if (!VAR_8)
  return -VAR_1;

 FUNC_1(&VAR_8->conf_mutex);
 if (VAR_8->state != VAR_0) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_10 = FUNC_3(VAR_6, &VAR_9, 16);
 if (VAR_10 > VAR_3) {
  VAR_12 = -VAR_1;
  goto out;
 }
 VAR_11 = (VAR_8->ssqd.pcnt ? VAR_8->ssqd.pcnt - 1 : VAR_8->ssqd.pcnt);
 if (VAR_10 > VAR_11) {
  VAR_12 = -VAR_1;
  goto out;
 }
 VAR_8->dev->dev_port = VAR_10;
out:
 FUNC_2(&VAR_8->conf_mutex);
 return VAR_12 ? VAR_12 : VAR_7;
}
