
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nic {int netdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct nic*) ;
 int VAR_0 ;
 struct nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct nic*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct nic *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = 0;

 FUNC_2(VAR_1);
 if ((VAR_3 = FUNC_0(VAR_2)))
  FUNC_3(VAR_2, VAR_0, VAR_2->netdev, "Cannot open interface, aborting\n");
 return VAR_3;
}
