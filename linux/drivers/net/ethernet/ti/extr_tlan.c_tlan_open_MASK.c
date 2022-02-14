
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlan_priv {int tlan_rev; int media_timer; int timer; } ;
struct net_device {int name; int irq; int base_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 struct tlan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5)
{
 struct tlan_priv *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 VAR_6->tlan_rev = FUNC_5(VAR_5->base_addr, VAR_2);
 VAR_7 = FUNC_3(VAR_5->irq, VAR_3, VAR_0,
     VAR_5->name, VAR_5);

 if (VAR_7) {
  FUNC_1(VAR_5, "Cannot open because IRQ %d is already in use\n",
      VAR_5->irq);
  return VAR_7;
 }

 FUNC_4(&VAR_6->timer, ((void*)0), 0);
 FUNC_4(&VAR_6->media_timer, VAR_4, 0);

 FUNC_6(VAR_5);

 FUNC_0(VAR_1, "%s: Opened.  TLAN Chip Rev: %x\n",
   VAR_5->name, VAR_6->tlan_rev);

 return 0;

}
