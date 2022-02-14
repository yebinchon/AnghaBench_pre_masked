
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bonding {int slave_arr_work; int ad_work; int arp_work; int mii_work; int alb_work; int mcast_work; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_1(struct bonding *VAR_6)
{
 FUNC_0(&VAR_6->mcast_work,
     VAR_4);
 FUNC_0(&VAR_6->alb_work, VAR_1);
 FUNC_0(&VAR_6->mii_work, VAR_3);
 FUNC_0(&VAR_6->arp_work, VAR_2);
 FUNC_0(&VAR_6->ad_work, VAR_0);
 FUNC_0(&VAR_6->slave_arr_work, VAR_5);
}
