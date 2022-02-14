
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_ethernet {scalar_t__ imode; scalar_t__ port; int (* poll ) (struct net_device*) ;} ;
struct net_device {scalar_t__ phydev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int VAR_2 ;
 struct octeon_ethernet* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_3)
{
 struct octeon_ethernet *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 if (VAR_5)
  return VAR_5;

 if (VAR_3->phydev) {
  if ((VAR_4->imode == VAR_0 &&
       VAR_4->port == 0) ||
      (VAR_4->imode == VAR_1)) {
   VAR_4->poll = FUNC_0;
   FUNC_0(VAR_3);
  }
 }

 return 0;
}
