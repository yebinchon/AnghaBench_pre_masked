
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {int dev; int bus; } ;
struct net_device {int name; int irq; } ;
struct b44 {int timer; int dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (struct b44*) ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct net_device*,char*) ;
 struct b44* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ) ;
 struct net_device* FUNC_16 (struct ssb_device*) ;

__attribute__((used)) static int FUNC_17(struct ssb_device *VAR_4)
{
 struct net_device *VAR_5 = FUNC_16(VAR_4);
 struct b44 *VAR_6 = FUNC_8(VAR_5);
 int VAR_7 = 0;

 VAR_7 = FUNC_15(VAR_4->bus, 0);
 if (VAR_7) {
  FUNC_5(VAR_4->dev,
   "Failed to powerup the bus\n");
  return VAR_7;
 }

 if (!FUNC_10(VAR_5))
  return 0;

 FUNC_13(&VAR_6->lock);
 FUNC_4(VAR_6);
 FUNC_3(VAR_6, VAR_0);
 FUNC_14(&VAR_6->lock);






 VAR_7 = FUNC_12(VAR_5->irq, VAR_2, VAR_1, VAR_5->name, VAR_5);
 if (VAR_7) {
  FUNC_7(VAR_5, "request_irq failed\n");
  FUNC_13(&VAR_6->lock);
  FUNC_2(VAR_6);
  FUNC_1(VAR_6);
  FUNC_14(&VAR_6->lock);
  return VAR_7;
 }

 FUNC_9(VAR_6->dev);

 FUNC_0(VAR_6);
 FUNC_11(VAR_5);

 FUNC_6(&VAR_6->timer, VAR_3 + 1);

 return 0;
}
