
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int num_tx_queues; int phydev; } ;
struct bcm_sysport_priv {int irq1; int is_lite; int irq0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_sysport_priv*) ;
 int FUNC_1 (struct bcm_sysport_priv*,unsigned int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct bcm_sysport_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct bcm_sysport_priv*,int ) ;
 int FUNC_8 (struct bcm_sysport_priv*,int ) ;
 int FUNC_9 (struct bcm_sysport_priv*,int ,int ) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2)
{
 struct bcm_sysport_priv *VAR_3 = FUNC_5(VAR_2);
 unsigned int VAR_4;
 int VAR_5;

 FUNC_2(VAR_2);


 FUNC_9(VAR_3, VAR_0, 0);

 VAR_5 = FUNC_8(VAR_3, 0);
 if (VAR_5) {
  FUNC_4(VAR_2, "timeout disabling RDMA\n");
  return VAR_5;
 }


 FUNC_10(2000, 3000);

 VAR_5 = FUNC_7(VAR_3, 0);
 if (VAR_5) {
  FUNC_4(VAR_2, "timeout disabling TDMA\n");
  return VAR_5;
 }


 FUNC_9(VAR_3, VAR_1, 0);


 for (VAR_4 = 0; VAR_4 < VAR_2->num_tx_queues; VAR_4++)
  FUNC_1(VAR_3, VAR_4);
 FUNC_0(VAR_3);

 FUNC_3(VAR_3->irq0, VAR_2);
 if (!VAR_3->is_lite)
  FUNC_3(VAR_3->irq1, VAR_2);


 FUNC_6(VAR_2->phydev);

 return 0;
}
