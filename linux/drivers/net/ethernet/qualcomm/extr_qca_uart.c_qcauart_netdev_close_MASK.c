
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcauart {int lock; scalar_t__ tx_left; int tx_work; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct qcauart* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct qcauart *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_0(&VAR_1->tx_work);

 FUNC_3(&VAR_1->lock);
 VAR_1->tx_left = 0;
 FUNC_4(&VAR_1->lock);

 return 0;
}
