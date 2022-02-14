
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union hdmi_infoframe {int drm; int vendor; int audio; int spd; int avi; TYPE_1__ any; } ;
struct device {int dummy; } ;







 int FUNC_0 (char const*,struct device*,int *) ;
 int FUNC_1 (char const*,struct device*,int *) ;
 int FUNC_2 (char const*,struct device*,int *) ;
 int FUNC_3 (char const*,struct device*,int *) ;
 int FUNC_4 (char const*,struct device*,int *) ;

void FUNC_5(const char *VAR_0,
   struct device *VAR_1,
   const union hdmi_infoframe *VAR_2)
{
 switch (VAR_2->any.type) {
 case 131:
  FUNC_1(VAR_0, VAR_1, &VAR_2->avi);
  break;
 case 129:
  FUNC_3(VAR_0, VAR_1, &VAR_2->spd);
  break;
 case 132:
  FUNC_0(VAR_0, VAR_1, &VAR_2->audio);
  break;
 case 128:
  FUNC_4(VAR_0, VAR_1, &VAR_2->vendor);
  break;
 case 130:
  FUNC_2(VAR_0, VAR_1, &VAR_2->drm);
  break;
 }
}
