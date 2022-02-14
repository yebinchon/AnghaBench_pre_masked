
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union hdmi_vendor_any_infoframe {int dummy; } hdmi_vendor_any_infoframe ;
typedef int ssize_t ;


 int FUNC_0 (union hdmi_vendor_any_infoframe*) ;
 int FUNC_1 (union hdmi_vendor_any_infoframe*,void*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_2(union hdmi_vendor_any_infoframe *VAR_0,
          void *VAR_1, size_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
