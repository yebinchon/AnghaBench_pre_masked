
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct gelic_card {int ether_port_status; struct net_device** netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct gelic_card*) ;
 int FUNC_1 (struct gelic_card*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int*,int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct gelic_card *VAR_4,
          int VAR_5)
{
 u64 VAR_6;
 struct net_device *VAR_7;

 FUNC_2(FUNC_0(VAR_4), FUNC_1(VAR_4),
   VAR_1,
   VAR_2, 0, 0,
   &VAR_4->ether_port_status, &VAR_6);

 if (VAR_5) {
  VAR_7 = VAR_4->netdev[VAR_3];
  if (VAR_4->ether_port_status & VAR_0)
   FUNC_4(VAR_7);
  else
   FUNC_3(VAR_7);
 }
}
