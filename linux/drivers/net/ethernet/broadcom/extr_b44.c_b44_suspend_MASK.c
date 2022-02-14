
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {int dummy; } ;
struct net_device {int irq; } ;
struct b44 {int flags; int lock; int dev; int timer; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (struct b44*,int ) ;
 int FUNC_3 (struct b44*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct net_device*) ;
 struct b44* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct net_device* FUNC_12 (struct ssb_device*) ;
 int FUNC_13 (struct ssb_device*,int ) ;

__attribute__((used)) static int FUNC_14(struct ssb_device *VAR_3, pm_message_t VAR_4)
{
 struct net_device *VAR_5 = FUNC_12(VAR_3);
 struct b44 *VAR_6 = FUNC_6(VAR_5);

 if (!FUNC_9(VAR_5))
  return 0;

 FUNC_4(&VAR_6->timer);

 FUNC_10(&VAR_6->lock);

 FUNC_1(VAR_6);
 FUNC_7(VAR_6->dev);
 FUNC_8(VAR_6->dev);
 FUNC_0(VAR_6);

 FUNC_11(&VAR_6->lock);

 FUNC_5(VAR_5->irq, VAR_5);
 if (VAR_6->flags & VAR_0) {
  FUNC_2(VAR_6, VAR_1);
  FUNC_3(VAR_6);
 }

 FUNC_13(VAR_3, VAR_2);
 return 0;
}
