
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typhoon {int ioaddr; int napi; } ;
struct net_device {int irq; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct typhoon* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ,int ,int ,struct net_device*) ;
 scalar_t__ FUNC_7 (struct typhoon*,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct typhoon*) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct typhoon*,int ,int ) ;
 int FUNC_11 (struct typhoon*) ;
 int FUNC_12 (struct typhoon*,int ) ;

__attribute__((used)) static int
FUNC_13(struct net_device *VAR_6)
{
 struct typhoon *VAR_7 = FUNC_4(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_8(VAR_7);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_12(VAR_7, VAR_4);
 if(VAR_8 < 0) {
  FUNC_3(VAR_6, "unable to wakeup device\n");
  goto out_sleep;
 }

 VAR_8 = FUNC_6(VAR_6->irq, VAR_5, VAR_0,
    VAR_6->name, VAR_6);
 if(VAR_8 < 0)
  goto out_sleep;

 FUNC_2(&VAR_7->napi);

 VAR_8 = FUNC_11(VAR_7);
 if(VAR_8 < 0) {
  FUNC_1(&VAR_7->napi);
  goto out_irq;
 }

 FUNC_5(VAR_6);
 return 0;

out_irq:
 FUNC_0(VAR_6->irq, VAR_6);

out_sleep:
 if(FUNC_7(VAR_7, VAR_3) < 0) {
  FUNC_3(VAR_6, "unable to reboot into sleep img\n");
  FUNC_9(VAR_7->ioaddr, VAR_1);
  goto out;
 }

 if(FUNC_10(VAR_7, VAR_2, 0) < 0)
  FUNC_3(VAR_6, "unable to go back to sleep\n");

out:
 return VAR_8;
}
