
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bonding {int * recv_probe; scalar_t__ send_peer_notif; } ;


 int FUNC_0 (struct bonding*) ;
 scalar_t__ FUNC_1 (struct bonding*) ;
 int FUNC_2 (struct bonding*) ;
 struct bonding* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct bonding *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1);
 VAR_1->send_peer_notif = 0;
 if (FUNC_1(VAR_1))
  FUNC_0(VAR_1);
 VAR_1->recv_probe = ((void*)0);

 return 0;
}
