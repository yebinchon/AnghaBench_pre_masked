
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union hdmi_infoframe {TYPE_1__ any; int vendor; int audio; int spd; int avi; } ;


 int VAR_0 ;




 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(union hdmi_infoframe *VAR_1)
{
 switch (VAR_1->any.type) {
 case 130:
  return FUNC_2(&VAR_1->avi);
 case 129:
  return FUNC_3(&VAR_1->spd);
 case 131:
  return FUNC_1(&VAR_1->audio);
 case 128:
  return FUNC_4(&VAR_1->vendor);
 default:
  FUNC_0(1, "Bad infoframe type %d\n", VAR_1->any.type);
  return -VAR_0;
 }
}
