
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtllib_device {int dummy; } ;
struct rt_dot11d_info {int* channel_map; int* max_tx_power_list; scalar_t__ country_len; int state; } ;


 int VAR_0 ;
 struct rt_dot11d_info* FUNC_0 (struct rtllib_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct rtllib_device*) ;
 int FUNC_2 (int*,int,scalar_t__) ;

void FUNC_3(struct rtllib_device *VAR_2)
{
 struct rt_dot11d_info *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4;

 FUNC_2(VAR_3->channel_map, 0, VAR_1 + 1);
 FUNC_2(VAR_3->max_tx_power_list, 0xFF, VAR_1 + 1);
 for (VAR_4 = 1; VAR_4 <= 11; VAR_4++)
  (VAR_3->channel_map)[VAR_4] = 1;
 for (VAR_4 = 12; VAR_4 <= 14; VAR_4++)
  (VAR_3->channel_map)[VAR_4] = 2;
 VAR_3->state = VAR_0;
 VAR_3->country_len = 0;
 FUNC_1(VAR_2);
}
