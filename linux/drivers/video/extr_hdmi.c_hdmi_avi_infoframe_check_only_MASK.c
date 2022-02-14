
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_avi_infoframe {scalar_t__ type; int version; scalar_t__ length; scalar_t__ picture_aspect; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(const struct hdmi_avi_infoframe *VAR_4)
{
 if (VAR_4->type != VAR_2 ||
     VAR_4->version != 2 ||
     VAR_4->length != VAR_1)
  return -VAR_0;

 if (VAR_4->picture_aspect > VAR_3)
  return -VAR_0;

 return 0;
}
