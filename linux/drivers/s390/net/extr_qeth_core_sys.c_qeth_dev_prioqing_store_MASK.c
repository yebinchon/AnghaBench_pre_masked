
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int no_out_queues; int default_out_queue; void* do_prio_queueing; } ;
struct qeth_card {scalar_t__ state; int conf_mutex; TYPE_1__ qdio; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 struct qeth_card* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_12,
  struct device_attribute *VAR_13, const char *VAR_14, size_t VAR_15)
{
 struct qeth_card *VAR_16 = FUNC_2(VAR_12);
 int VAR_17 = 0;

 if (!VAR_16)
  return -VAR_1;

 if (FUNC_0(VAR_16))
  return -VAR_3;

 FUNC_3(&VAR_16->conf_mutex);
 if (VAR_16->state != VAR_0) {
  VAR_17 = -VAR_4;
  goto out;
 }




 if (VAR_16->qdio.no_out_queues == 1) {
  VAR_16->qdio.do_prio_queueing = VAR_7;
  VAR_17 = -VAR_4;
  goto out;
 }

 if (FUNC_5(VAR_14, "prio_queueing_prec")) {
  VAR_16->qdio.do_prio_queueing = VAR_8;
  VAR_16->qdio.default_out_queue = VAR_5;
 } else if (FUNC_5(VAR_14, "prio_queueing_skb")) {
  VAR_16->qdio.do_prio_queueing = VAR_9;
  VAR_16->qdio.default_out_queue = VAR_5;
 } else if (FUNC_5(VAR_14, "prio_queueing_tos")) {
  VAR_16->qdio.do_prio_queueing = VAR_10;
  VAR_16->qdio.default_out_queue = VAR_5;
 } else if (FUNC_5(VAR_14, "prio_queueing_vlan")) {
  if (FUNC_1(VAR_16)) {
   VAR_17 = -VAR_2;
   goto out;
  }
  VAR_16->qdio.do_prio_queueing = VAR_11;
  VAR_16->qdio.default_out_queue = VAR_5;
 } else if (FUNC_5(VAR_14, "no_prio_queueing:0")) {
  VAR_16->qdio.do_prio_queueing = VAR_6;
  VAR_16->qdio.default_out_queue = 0;
 } else if (FUNC_5(VAR_14, "no_prio_queueing:1")) {
  VAR_16->qdio.do_prio_queueing = VAR_6;
  VAR_16->qdio.default_out_queue = 1;
 } else if (FUNC_5(VAR_14, "no_prio_queueing:2")) {
  VAR_16->qdio.do_prio_queueing = VAR_6;
  VAR_16->qdio.default_out_queue = 2;
 } else if (FUNC_5(VAR_14, "no_prio_queueing:3")) {
  VAR_16->qdio.do_prio_queueing = VAR_6;
  VAR_16->qdio.default_out_queue = 3;
 } else if (FUNC_5(VAR_14, "no_prio_queueing")) {
  VAR_16->qdio.do_prio_queueing = VAR_6;
  VAR_16->qdio.default_out_queue = VAR_5;
 } else
  VAR_17 = -VAR_1;
out:
 FUNC_4(&VAR_16->conf_mutex);
 return VAR_17 ? VAR_17 : VAR_15;
}
