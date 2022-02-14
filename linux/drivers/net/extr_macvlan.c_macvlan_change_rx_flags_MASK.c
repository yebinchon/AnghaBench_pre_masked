
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct macvlan_dev {struct net_device* lowerdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 struct macvlan_dev* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3, int VAR_4)
{
 struct macvlan_dev *VAR_5 = FUNC_2(VAR_3);
 struct net_device *VAR_6 = VAR_5->lowerdev;

 if (VAR_3->flags & VAR_2) {
  if (VAR_4 & VAR_0)
   FUNC_0(VAR_6, VAR_3->flags & VAR_0 ? 1 : -1);
  if (VAR_4 & VAR_1)
   FUNC_1(VAR_6,
         VAR_3->flags & VAR_1 ? 1 : -1);

 }
}
