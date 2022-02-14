
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; unsigned char* dev_addr; } ;
struct macvlan_port {unsigned char* perm_addr; } ;
struct macvlan_dev {struct macvlan_port* port; struct net_device* lowerdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,unsigned char*) ;
 int FUNC_1 (struct net_device*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_3 (struct macvlan_port*,unsigned char*) ;
 int FUNC_4 (struct macvlan_port*) ;
 int FUNC_5 (struct macvlan_port*) ;
 int FUNC_6 (struct macvlan_dev*,unsigned char*) ;
 scalar_t__ FUNC_7 (struct macvlan_port*) ;
 struct macvlan_dev* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_2, unsigned char *VAR_3)
{
 struct macvlan_dev *VAR_4 = FUNC_8(VAR_2);
 struct net_device *VAR_5 = VAR_4->lowerdev;
 struct macvlan_port *VAR_6 = VAR_4->port;
 int VAR_7;

 if (!(VAR_2->flags & VAR_1)) {

  FUNC_2(VAR_2->dev_addr, VAR_3);
 } else {

  if (FUNC_3(VAR_4->port, VAR_3))
   return -VAR_0;

  if (!FUNC_7(VAR_6)) {
   VAR_7 = FUNC_0(VAR_5, VAR_3);
   if (VAR_7)
    return VAR_7;

   FUNC_1(VAR_5, VAR_2->dev_addr);
  }

  FUNC_6(VAR_4, VAR_3);
 }
 if (FUNC_7(VAR_6) && !FUNC_4(VAR_6)) {




  FUNC_2(VAR_4->port->perm_addr,
    VAR_5->dev_addr);
 }
 FUNC_5(VAR_6);
 return 0;
}
