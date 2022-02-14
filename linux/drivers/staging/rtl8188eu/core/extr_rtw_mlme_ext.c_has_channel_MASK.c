
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt_channel_info {int ChannelNum; } ;



__attribute__((used)) static int FUNC_0(struct rt_channel_info *VAR_0,
        u8 VAR_1,
        u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].ChannelNum == VAR_2)
   return 1;
 }
 return 0;
}
