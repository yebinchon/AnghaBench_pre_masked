
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi108_prv_data {scalar_t__ phy_ok; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tsi108_prv_data* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tsi108_prv_data*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3)
{
 struct tsi108_prv_data *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;

 FUNC_1(&VAR_2, VAR_5);
 FUNC_3(VAR_4, VAR_1, VAR_0);
 VAR_4->phy_ok = 0;
 FUNC_2(&VAR_2, VAR_5);
}
