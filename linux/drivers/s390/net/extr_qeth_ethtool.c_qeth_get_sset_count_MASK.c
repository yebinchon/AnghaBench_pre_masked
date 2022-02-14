
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int no_out_queues; } ;
struct qeth_card {TYPE_1__ qdio; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_3, int VAR_4)
{
 struct qeth_card *VAR_5 = VAR_3->ml_priv;

 switch (VAR_4) {
 case 128:
  return VAR_0 +
         VAR_5->qdio.no_out_queues * VAR_2;
 default:
  return -VAR_1;
 }
}
