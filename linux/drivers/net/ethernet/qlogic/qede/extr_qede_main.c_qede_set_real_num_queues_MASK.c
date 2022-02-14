
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_tc; } ;
struct qede_dev {int ndev; TYPE_1__ dev_info; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*) ;
 int FUNC_2 (struct qede_dev*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct qede_dev *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_4(VAR_0->ndev,
       FUNC_2(VAR_0) *
       VAR_0->dev_info.num_tc);
 if (VAR_1) {
  FUNC_0(VAR_0, "Failed to set real number of Tx queues\n");
  return VAR_1;
 }

 VAR_1 = FUNC_3(VAR_0->ndev, FUNC_1(VAR_0));
 if (VAR_1) {
  FUNC_0(VAR_0, "Failed to set real number of Rx queues\n");
  return VAR_1;
 }

 return 0;
}
