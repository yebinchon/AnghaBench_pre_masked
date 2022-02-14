
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_vendor_infoframe {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct hdmi_vendor_infoframe*) ;
 int FUNC_1 (struct hdmi_vendor_infoframe*,void*,size_t) ;

ssize_t FUNC_2(struct hdmi_vendor_infoframe *VAR_0,
       void *VAR_1, size_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
