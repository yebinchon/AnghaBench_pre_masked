
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ bg_channels; scalar_t__ a_channels; } ;
struct libipw_device {TYPE_1__ geo; } ;
struct libipw_channel {int freq; int channel; } ;


 struct libipw_channel* FUNC_0 (struct libipw_device*,int ) ;

u32 FUNC_1(struct libipw_device * VAR_0, u8 VAR_1)
{
 const struct libipw_channel * VAR_2;



 if (VAR_0->geo.bg_channels == 0 && VAR_0->geo.a_channels == 0)
  return 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2->channel)
  return 0;
 return VAR_2->freq;
}
