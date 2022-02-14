
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; int irq; } ;
struct ifi_canfd_priv {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct ifi_canfd_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3)
{
 struct ifi_canfd_priv *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5) {
  FUNC_4(VAR_3, "Failed to open CAN device\n");
  return VAR_5;
 }


 VAR_5 = FUNC_8(VAR_3->irq, VAR_2, VAR_1,
     VAR_3->name, VAR_3);
 if (VAR_5 < 0) {
  FUNC_4(VAR_3, "Failed to request interrupt\n");
  goto err_irq;
 }

 FUNC_2(VAR_3);

 FUNC_0(VAR_3, VAR_0);
 FUNC_3(&VAR_4->napi);
 FUNC_6(VAR_3);

 return 0;
err_irq:
 FUNC_1(VAR_3);
 return VAR_5;
}
