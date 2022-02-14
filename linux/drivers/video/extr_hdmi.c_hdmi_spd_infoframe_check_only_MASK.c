
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spd_infoframe {scalar_t__ type; int version; scalar_t__ length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct hdmi_spd_infoframe *VAR_3)
{
 if (VAR_3->type != VAR_1 ||
     VAR_3->version != 1 ||
     VAR_3->length != VAR_2)
  return -VAR_0;

 return 0;
}
