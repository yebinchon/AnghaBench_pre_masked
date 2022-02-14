
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int buf_count; } ;
struct TYPE_7__ {TYPE_2__ init_pool; } ;
struct TYPE_5__ {scalar_t__ cq; unsigned long sniffer; } ;
struct TYPE_8__ {int qdioac2; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_3__ qdio; TYPE_1__ options; TYPE_4__ ssqd; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct qeth_card*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qeth_card*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct qeth_card* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (struct qeth_card*,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_6,
  struct device_attribute *VAR_7, const char *VAR_8, size_t VAR_9)
{
 struct qeth_card *VAR_10 = FUNC_2(VAR_6);
 int VAR_11 = 0;
 unsigned long VAR_12;

 if (!VAR_10)
  return -VAR_1;

 if (!FUNC_1(VAR_10))
  return -VAR_2;
 if (VAR_10->options.cq == VAR_3)
  return -VAR_2;

 FUNC_4(&VAR_10->conf_mutex);
 if (VAR_10->state != VAR_0) {
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_11 = FUNC_3(VAR_8, 16, &VAR_12);
 if (VAR_11) {
  VAR_11 = -VAR_1;
  goto out;
 }
 switch (VAR_12) {
 case 0:
  VAR_10->options.sniffer = VAR_12;
  break;
 case 1:
  FUNC_6(FUNC_0(VAR_10), &VAR_10->ssqd);
  if (VAR_10->ssqd.qdioac2 & VAR_5) {
   VAR_10->options.sniffer = VAR_12;
   if (VAR_10->qdio.init_pool.buf_count !=
     VAR_4)
    FUNC_7(VAR_10,
     VAR_4);
  } else
   VAR_11 = -VAR_2;
  break;
 default:
  VAR_11 = -VAR_1;
 }
out:
 FUNC_5(&VAR_10->conf_mutex);
 return VAR_11 ? VAR_11 : VAR_9;
}
