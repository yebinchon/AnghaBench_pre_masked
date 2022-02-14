
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; int sa_family; } ;
struct sk_buff {int dummy; } ;
struct net_device {int priv_flags; } ;
struct macvlan_port {TYPE_1__* dev; int perm_addr; int bc_queue; int bc_work; } ;
struct macvlan_dev {int dev; } ;
struct TYPE_4__ {struct macvlan_dev* src; } ;
struct TYPE_3__ {int addr_len; int type; int dev_addr; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,struct sockaddr*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct macvlan_port*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct macvlan_port*) ;
 struct macvlan_port* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_1)
{
 struct macvlan_port *VAR_2 = FUNC_9(VAR_1);
 struct sk_buff *VAR_3;

 VAR_1->priv_flags &= ~VAR_0;
 FUNC_11(VAR_1);




 FUNC_2(&VAR_2->bc_work);

 while ((VAR_3 = FUNC_1(&VAR_2->bc_queue))) {
  const struct macvlan_dev *VAR_4 = FUNC_0(VAR_3)->src;

  if (VAR_4)
   FUNC_3(VAR_4->dev);

  FUNC_7(VAR_3);
 }




 if (FUNC_8(VAR_2) &&
     !FUNC_5(VAR_2->dev->dev_addr, VAR_2->perm_addr)) {
  struct sockaddr VAR_5;

  VAR_5.sa_family = VAR_2->dev->type;
  FUNC_10(&VAR_5.sa_data, VAR_2->perm_addr, VAR_2->dev->addr_len);
  FUNC_4(VAR_2->dev, &VAR_5, ((void*)0));
 }

 FUNC_6(VAR_2);
}
