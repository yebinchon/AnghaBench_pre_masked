
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct enc28j60_net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct enc28j60_net*) ;
 int FUNC_2 (struct enc28j60_net*) ;
 int FUNC_3 (struct enc28j60_net*) ;
 int FUNC_4 (struct enc28j60_net*,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*,char*,...) ;
 struct enc28j60_net* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct enc28j60_net*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2)
{
 struct enc28j60_net *VAR_3 = FUNC_8(VAR_2);

 if (!FUNC_6(VAR_2->dev_addr)) {
  if (FUNC_9(VAR_3))
   FUNC_7(VAR_2, "invalid MAC address %pM\n", VAR_2->dev_addr);
  return -VAR_0;
 }

 FUNC_4(VAR_3, 0);
 FUNC_1(VAR_3);
 if (!FUNC_3(VAR_3)) {
  if (FUNC_9(VAR_3))
   FUNC_7(VAR_2, "hw_reset() failed\n");
  return -VAR_1;
 }

 FUNC_5(VAR_2);

 FUNC_2(VAR_3);

 FUNC_0(VAR_2);



 FUNC_10(VAR_2);

 return 0;
}
