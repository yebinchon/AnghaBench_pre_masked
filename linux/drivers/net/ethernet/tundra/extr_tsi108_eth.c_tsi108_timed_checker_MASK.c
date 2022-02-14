
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi108_prv_data {int timer; struct net_device* dev; } ;
struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tsi108_prv_data* VAR_1 ;
 struct tsi108_prv_data* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct tsi108_prv_data *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 struct net_device *VAR_6 = VAR_5->dev;

 FUNC_2(VAR_6);
 FUNC_3(VAR_6);
 FUNC_1(&VAR_5->timer, VAR_2 + VAR_0);
}
