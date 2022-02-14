
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {struct libipw_channel const* a; struct libipw_channel const* bg; } ;
struct libipw_device {TYPE_1__ geo; } ;
struct libipw_channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct libipw_channel const VAR_1 ;
 int FUNC_0 (struct libipw_device*,scalar_t__) ;

const struct libipw_channel *FUNC_1(struct libipw_device
            *VAR_2, u8 VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (VAR_4 == -1)
  return &VAR_1;

 if (VAR_3 <= VAR_0)
  return &VAR_2->geo.bg[VAR_4];

 return &VAR_2->geo.a[VAR_4];
}
