
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {TYPE_2__* a; TYPE_1__* bg; } ;
struct libipw_device {TYPE_3__ geo; } ;
struct TYPE_5__ {scalar_t__ flags; } ;
struct TYPE_4__ {scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct libipw_device*,scalar_t__) ;

u8 FUNC_1(struct libipw_device * VAR_2, u8 VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (VAR_4 == -1)
  return VAR_1;

 if (VAR_3 <= VAR_0)
  return VAR_2->geo.bg[VAR_4].flags;

 return VAR_2->geo.a[VAR_4].flags;
}
