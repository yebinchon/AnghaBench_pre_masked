
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int version; } ;
union hdmi_vendor_any_infoframe {TYPE_1__ any; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(const union hdmi_vendor_any_infoframe *VAR_2)
{
 if (VAR_2->any.type != VAR_1 ||
     VAR_2->any.version != 1)
  return -VAR_0;

 return 0;
}
