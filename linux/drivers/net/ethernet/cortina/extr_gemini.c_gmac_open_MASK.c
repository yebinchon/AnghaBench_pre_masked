
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int irq; int phydev; int name; } ;
struct TYPE_2__ {int * function; } ;
struct gemini_ethernet_port {TYPE_1__ rx_coalesce_timer; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct gemini_ethernet_port*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct gemini_ethernet_port*) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct net_device*,char*) ;
 int FUNC_12 (struct net_device*,char*) ;
 struct gemini_ethernet_port* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct gemini_ethernet_port*,int ,struct net_device*,char*,int) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_20(struct net_device *VAR_7)
{
 struct gemini_ethernet_port *VAR_8 = FUNC_13(VAR_7);
 int VAR_9;

 if (!VAR_7->phydev) {
  VAR_9 = FUNC_5(VAR_7);
  if (VAR_9) {
   FUNC_15(VAR_8, VAR_6, VAR_7,
      "PHY init failed: %d\n", VAR_9);
   return VAR_9;
  }
 }

 VAR_9 = FUNC_19(VAR_7->irq, VAR_5,
     VAR_3, VAR_7->name, VAR_7);
 if (VAR_9) {
  FUNC_12(VAR_7, "no IRQ\n");
  return VAR_9;
 }

 FUNC_14(VAR_7);
 FUNC_17(VAR_7->phydev);

 VAR_9 = FUNC_1(VAR_8);



 if (VAR_9 && (VAR_9 != -VAR_1)) {
  FUNC_12(VAR_7, "could not resize freeq\n");
  goto err_stop_phy;
 }

 VAR_9 = FUNC_6(VAR_7);
 if (VAR_9) {
  FUNC_12(VAR_7, "could not setup RXQ\n");
  goto err_stop_phy;
 }

 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9) {
  FUNC_12(VAR_7, "could not setup TXQs\n");
  FUNC_2(VAR_7);
  goto err_stop_phy;
 }

 FUNC_10(&VAR_8->napi);

 FUNC_8(VAR_8);
 FUNC_3(VAR_7, 1);
 FUNC_4(VAR_7);
 FUNC_16(VAR_7);

 FUNC_9(&VAR_8->rx_coalesce_timer, VAR_0,
       VAR_2);
 VAR_8->rx_coalesce_timer.function = &VAR_4;

 FUNC_11(VAR_7, "opened\n");

 return 0;

err_stop_phy:
 FUNC_18(VAR_7->phydev);
 FUNC_0(VAR_7->irq, VAR_7);
 return VAR_9;
}
