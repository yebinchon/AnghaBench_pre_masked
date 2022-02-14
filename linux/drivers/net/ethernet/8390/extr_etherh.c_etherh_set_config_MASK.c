
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int if_port; int flags; } ;
struct ifmap {int port; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, struct ifmap *VAR_3)
{
 switch (VAR_3->port) {
 case 129:
 case 128:




  VAR_2->flags &= ~VAR_1;
  VAR_2->if_port = VAR_3->port;
  break;

 default:
  return -VAR_0;
 }

 FUNC_0(VAR_2);

 return 0;
}
