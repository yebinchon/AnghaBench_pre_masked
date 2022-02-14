
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct neigh_parms {int neigh_setup; struct net_device* dev; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_1,
       struct neigh_parms *VAR_2)
{

 if (VAR_2->dev == VAR_1)
  VAR_2->neigh_setup = VAR_0;

 return 0;
}
