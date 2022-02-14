
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi108_prv_data {int rxfree; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct tsi108_prv_data* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct tsi108_prv_data *VAR_2 = FUNC_0(VAR_1);






 if (FUNC_1(VAR_1) && VAR_2->rxfree < VAR_0 / 4)
  FUNC_2(VAR_1);
}
