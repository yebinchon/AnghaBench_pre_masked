
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {int rx_lock; int rx_roq_refcount; scalar_t__ rx_reorder; } ;


 int FUNC_0 (struct i2400m*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct i2400m *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->rx_reorder) {
  FUNC_2(&VAR_1->rx_lock, VAR_2);
  FUNC_1(&VAR_1->rx_roq_refcount, VAR_0);
  FUNC_3(&VAR_1->rx_lock, VAR_2);
 }

 FUNC_0(VAR_1);
}
