
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct rtllib_device {int global_domain; int bss_start_channel; int ibss_maxjoin_chal; } ;
struct TYPE_4__ {int* channel_map; } ;
struct TYPE_3__ {int len; int* channel; } ;




 TYPE_2__* FUNC_0 (struct rtllib_device*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int*,int ,int) ;

void FUNC_2(u8 VAR_1, struct rtllib_device *VAR_2)
{
 int VAR_3, VAR_4 = 14, VAR_5 = 1;

 VAR_2->global_domain = 0;

 if (VAR_0[VAR_1].len != 0) {
  FUNC_1(FUNC_0(VAR_2)->channel_map, 0,
         sizeof(FUNC_0(VAR_2)->channel_map));
  for (VAR_3 = 0; VAR_3 < VAR_0[VAR_1].len; VAR_3++) {
   if (VAR_0[VAR_1].channel[VAR_3] < VAR_5 ||
       VAR_0[VAR_1].channel[VAR_3] > VAR_4)
    break;
   FUNC_0(VAR_2)->channel_map[VAR_0
     [VAR_1].channel[VAR_3]] = 1;
  }
 }

 switch (VAR_1) {
 case 129:
  VAR_2->global_domain = 1;
  for (VAR_3 = 12; VAR_3 <= 14; VAR_3++)
   FUNC_0(VAR_2)->channel_map[VAR_3] = 2;
  VAR_2->bss_start_channel = 10;
  VAR_2->ibss_maxjoin_chal = 11;
  break;

 case 128:
  for (VAR_3 = 12; VAR_3 <= 13; VAR_3++)
   FUNC_0(VAR_2)->channel_map[VAR_3] = 2;
  VAR_2->bss_start_channel = 10;
  VAR_2->ibss_maxjoin_chal = 11;
  break;

 default:
  VAR_2->bss_start_channel = 1;
  VAR_2->ibss_maxjoin_chal = 14;
  break;
 }
}
