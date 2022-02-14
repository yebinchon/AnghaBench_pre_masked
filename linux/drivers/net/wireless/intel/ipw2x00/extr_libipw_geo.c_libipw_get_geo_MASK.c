
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libipw_geo {int dummy; } ;
struct libipw_device {struct libipw_geo const geo; } ;



const struct libipw_geo *FUNC_0(struct libipw_device *VAR_0)
{
 return &VAR_0->geo;
}
