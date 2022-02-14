
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int bg_channels; int a_channels; TYPE_2__* a; TYPE_1__* bg; } ;
struct libipw_device {int freq_band; int mode; TYPE_3__ geo; } ;
struct TYPE_5__ {scalar_t__ channel; int flags; } ;
struct TYPE_4__ {scalar_t__ channel; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(struct libipw_device *VAR_5, u8 VAR_6)
{
 int VAR_7;



 if (VAR_5->geo.bg_channels == 0 && VAR_5->geo.a_channels == 0)
  return 0;

 if (VAR_5->freq_band & VAR_1)
  for (VAR_7 = 0; VAR_7 < VAR_5->geo.bg_channels; VAR_7++)



   if ((VAR_5->geo.bg[VAR_7].channel == VAR_6) &&
       !(VAR_5->geo.bg[VAR_7].flags & VAR_4) &&
       (!(VAR_5->mode & VAR_0) ||
        !(VAR_5->geo.bg[VAR_7].flags & VAR_3)))
    return VAR_1;

 if (VAR_5->freq_band & VAR_2)
  for (VAR_7 = 0; VAR_7 < VAR_5->geo.a_channels; VAR_7++)
   if ((VAR_5->geo.a[VAR_7].channel == VAR_6) &&
       !(VAR_5->geo.a[VAR_7].flags & VAR_4))
    return VAR_2;

 return 0;
}
