
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int phydev; } ;
struct b44 {int flags; int lock; int timer; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct net_device*) ;
 int FUNC_7 (int *) ;
 struct b44* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_3)
{
 struct b44 *VAR_4 = FUNC_8(VAR_3);

 FUNC_10(VAR_3);

 if (VAR_4->flags & VAR_0)
  FUNC_11(VAR_3->phydev);

 FUNC_7(&VAR_4->napi);

 FUNC_5(&VAR_4->timer);

 FUNC_12(&VAR_4->lock);

 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
 FUNC_9(VAR_3);

 FUNC_13(&VAR_4->lock);

 FUNC_6(VAR_3->irq, VAR_3);

 if (VAR_4->flags & VAR_1) {
  FUNC_3(VAR_4, VAR_2);
  FUNC_4(VAR_4);
 }

 FUNC_0(VAR_4);

 return 0;
}
