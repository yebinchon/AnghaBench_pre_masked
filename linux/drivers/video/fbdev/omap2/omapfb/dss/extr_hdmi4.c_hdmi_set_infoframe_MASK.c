
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_device {int dummy; } ;
struct hdmi_avi_infoframe {int dummy; } ;
struct TYPE_3__ {struct hdmi_avi_infoframe infoframe; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct omap_dss_device *VAR_1,
  const struct hdmi_avi_infoframe *VAR_2)
{
 VAR_0.cfg.infoframe = *VAR_2;
 return 0;
}
