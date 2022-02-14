
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int const ChannelNum; } ;
typedef TYPE_1__ RT_CHANNEL_INFO ;



int FUNC_0(RT_CHANNEL_INFO *VAR_0, const u32 VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_0[VAR_2].ChannelNum != 0; VAR_2++) {
  if (VAR_1 == VAR_0[VAR_2].ChannelNum)
   break;
 }

 if (VAR_2 >= VAR_0[VAR_2].ChannelNum)
  return -1;
 return VAR_2;
}
