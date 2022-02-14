
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_count; } ;
struct TYPE_4__ {TYPE_1__ in_buf_pool; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_2__ qdio; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qeth_card*,int) ;
 int FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
  struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct qeth_card *VAR_9 = FUNC_0(VAR_5);
 char *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13 = 0;

 if (!VAR_9)
  return -VAR_1;

 FUNC_1(&VAR_9->conf_mutex);
 if (VAR_9->state != VAR_0) {
  VAR_13 = -VAR_2;
  goto out;
 }

 VAR_12 = VAR_9->qdio.in_buf_pool.buf_count;
 VAR_11 = FUNC_4(VAR_7, &VAR_10, 10);
 VAR_11 = (VAR_11 < VAR_4) ? VAR_4 :
  ((VAR_11 > VAR_3) ? VAR_3 : VAR_11);
 if (VAR_12 != VAR_11) {
  VAR_13 = FUNC_3(VAR_9, VAR_11);
 }
out:
 FUNC_2(&VAR_9->conf_mutex);
 return VAR_13 ? VAR_13 : VAR_8;
}
