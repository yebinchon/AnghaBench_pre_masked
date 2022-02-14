
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; int flags; int priv_flags; int dev_addr; } ;
struct macvlan_port {int bc_work; int bc_queue; int * vlan_source_hash; int * vlan_hash; int vlans; int perm_addr; struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 unsigned int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct macvlan_port*) ;
 struct macvlan_port* FUNC_5 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ,struct macvlan_port*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_10)
{
 struct macvlan_port *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 if (VAR_10->type != VAR_0 || VAR_10->flags & VAR_5)
  return -VAR_2;

 if (FUNC_6(VAR_10))
  return -VAR_1;

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_4);
 if (VAR_11 == ((void*)0))
  return -VAR_3;

 VAR_11->dev = VAR_10;
 FUNC_3(VAR_11->perm_addr, VAR_10->dev_addr);
 FUNC_1(&VAR_11->vlans);
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
  FUNC_0(&VAR_11->vlan_hash[VAR_12]);
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
  FUNC_0(&VAR_11->vlan_source_hash[VAR_12]);

 FUNC_8(&VAR_11->bc_queue);
 FUNC_2(&VAR_11->bc_work, VAR_9);

 VAR_13 = FUNC_7(VAR_10, VAR_8, VAR_11);
 if (VAR_13)
  FUNC_4(VAR_11);
 else
  VAR_10->priv_flags |= VAR_6;
 return VAR_13;
}
