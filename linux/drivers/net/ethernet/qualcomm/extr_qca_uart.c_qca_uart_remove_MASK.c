
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dummy; } ;
struct qcauart {int net_dev; int tx_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct serdev_device*) ;
 struct qcauart* FUNC_3 (struct serdev_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct serdev_device *VAR_0)
{
 struct qcauart *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_1->net_dev);


 FUNC_2(VAR_0);
 FUNC_0(&VAR_1->tx_work);

 FUNC_1(VAR_1->net_dev);
}
