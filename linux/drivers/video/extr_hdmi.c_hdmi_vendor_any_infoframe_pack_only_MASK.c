
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ oui; } ;
union hdmi_vendor_any_infoframe {int hdmi; TYPE_1__ any; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (union hdmi_vendor_any_infoframe const*) ;
 int FUNC_1 (int *,void*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_2(const union hdmi_vendor_any_infoframe *VAR_2,
        void *VAR_3, size_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5)
  return VAR_5;


 if (VAR_2->any.oui != VAR_1)
  return -VAR_0;

 return FUNC_1(&VAR_2->hdmi, VAR_3, VAR_4);
}
