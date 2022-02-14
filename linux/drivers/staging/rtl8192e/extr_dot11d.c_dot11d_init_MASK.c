
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int dummy; } ;
struct rt_dot11d_info {int enabled; int max_tx_power_list; int channel_map; scalar_t__ country_len; int state; } ;


 int VAR_0 ;
 struct rt_dot11d_info* FUNC_0 (struct rtllib_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct rtllib_device*) ;
 int FUNC_2 (int ,int,scalar_t__) ;

void FUNC_3(struct rtllib_device *VAR_2)
{
 struct rt_dot11d_info *VAR_3 = FUNC_0(VAR_2);

 VAR_3->enabled = 0;

 VAR_3->state = VAR_0;
 VAR_3->country_len = 0;
 FUNC_2(VAR_3->channel_map, 0, VAR_1 + 1);
 FUNC_2(VAR_3->max_tx_power_list, 0xFF, VAR_1 + 1);
 FUNC_1(VAR_2);
}
