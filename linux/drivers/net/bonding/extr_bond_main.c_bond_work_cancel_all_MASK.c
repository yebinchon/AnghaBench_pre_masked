
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bonding {int slave_arr_work; int mcast_work; int ad_work; int alb_work; int arp_work; int mii_work; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bonding *VAR_0)
{
 FUNC_0(&VAR_0->mii_work);
 FUNC_0(&VAR_0->arp_work);
 FUNC_0(&VAR_0->alb_work);
 FUNC_0(&VAR_0->ad_work);
 FUNC_0(&VAR_0->mcast_work);
 FUNC_0(&VAR_0->slave_arr_work);
}
