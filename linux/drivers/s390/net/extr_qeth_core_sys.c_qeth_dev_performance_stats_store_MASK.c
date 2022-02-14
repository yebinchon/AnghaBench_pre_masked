
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_qdio_out_q {int stats; } ;
struct TYPE_2__ {unsigned int no_out_queues; struct qeth_qdio_out_q** out_qs; } ;
struct qeth_card {TYPE_1__ qdio; int stats; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct qeth_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct qeth_card *VAR_5 = FUNC_0(VAR_1);
 struct qeth_qdio_out_q *VAR_6;
 unsigned int VAR_7;
 bool VAR_8;
 int VAR_9;

 if (!VAR_5)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_3, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8) {
  FUNC_2(&VAR_5->stats, 0, sizeof(VAR_5->stats));
  for (VAR_7 = 0; VAR_7 < VAR_5->qdio.no_out_queues; VAR_7++) {
   VAR_6 = VAR_5->qdio.out_qs[VAR_7];
   if (!VAR_6)
    break;
   FUNC_2(&VAR_6->stats, 0, sizeof(VAR_6->stats));
  }
 }

 return VAR_4;
}
