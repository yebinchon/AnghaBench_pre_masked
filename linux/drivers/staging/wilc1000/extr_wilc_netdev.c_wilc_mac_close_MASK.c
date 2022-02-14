
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {scalar_t__ mac_opened; scalar_t__ ndev; struct wilc* wilc; } ;
struct wilc {scalar_t__ open_ifcs; int close; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct wilc_vif *VAR_1 = FUNC_1(VAR_0);
 struct wilc *VAR_2 = VAR_1->wilc;

 FUNC_0(VAR_0, "Mac close\n");

 if (VAR_2->open_ifcs > 0)
  VAR_2->open_ifcs--;
 else
  return 0;

 if (VAR_1->ndev) {
  FUNC_2(VAR_1->ndev);

  FUNC_3(VAR_1->ndev);
 }

 if (VAR_2->open_ifcs == 0) {
  FUNC_0(VAR_0, "Deinitializing wilc1000\n");
  VAR_2->close = 1;
  FUNC_4(VAR_0);
 }

 VAR_1->mac_opened = 0;

 return 0;
}
