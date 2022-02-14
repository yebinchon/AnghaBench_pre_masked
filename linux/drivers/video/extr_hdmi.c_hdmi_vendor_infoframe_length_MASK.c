
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_vendor_infoframe {scalar_t__ s3d_struct; scalar_t__ vic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct hdmi_vendor_infoframe *VAR_2)
{

 if (VAR_2->s3d_struct >= VAR_1)
  return 6;
 else if (VAR_2->vic != 0 || VAR_2->s3d_struct != VAR_0)
  return 5;
 else
  return 4;
}
