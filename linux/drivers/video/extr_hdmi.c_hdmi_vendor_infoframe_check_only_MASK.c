
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_vendor_infoframe {scalar_t__ type; int version; scalar_t__ oui; scalar_t__ vic; scalar_t__ s3d_struct; scalar_t__ length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct hdmi_vendor_infoframe const*) ;

__attribute__((used)) static int FUNC_1(const struct hdmi_vendor_infoframe *VAR_4)
{
 if (VAR_4->type != VAR_3 ||
     VAR_4->version != 1 ||
     VAR_4->oui != VAR_2)
  return -VAR_0;


 if (VAR_4->vic != 0 && VAR_4->s3d_struct != VAR_1)
  return -VAR_0;

 if (VAR_4->length != FUNC_0(VAR_4))
  return -VAR_0;

 return 0;
}
