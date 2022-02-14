
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_device {int mcast_work; } ;
struct netvsc_device {struct rndis_device* extension; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct netvsc_device *VAR_0)
{
 struct rndis_device *VAR_1 = VAR_0->extension;

 FUNC_0(&VAR_1->mcast_work);
}
