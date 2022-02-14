
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct be_adapter {int flags; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

void FUNC_3(struct be_adapter *VAR_1, u8 VAR_2)
{
 struct net_device *VAR_3 = VAR_1->netdev;

 if (!(VAR_1->flags & VAR_0)) {
  FUNC_1(VAR_3);
  VAR_1->flags |= VAR_0;
 }

 if (VAR_2)
  FUNC_2(VAR_3);
 else
  FUNC_1(VAR_3);

 FUNC_0(VAR_3, "Link is %s\n", VAR_2 ? "Up" : "Down");
}
