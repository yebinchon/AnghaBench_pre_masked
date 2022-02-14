
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union hdmi_infoframe {TYPE_1__ any; int vendor; int audio; int spd; int drm; int avi; } ;
typedef int ssize_t ;


 int VAR_0 ;





 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *,void*,size_t) ;
 int FUNC_2 (int *,void*,size_t) ;
 int FUNC_3 (int *,void*,size_t) ;
 int FUNC_4 (int *,void*,size_t) ;
 int FUNC_5 (int *,void*,size_t) ;

ssize_t
FUNC_6(union hdmi_infoframe *VAR_1,
      void *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;

 switch (VAR_1->any.type) {
 case 131:
  VAR_4 = FUNC_2(&VAR_1->avi, VAR_2, VAR_3);
  break;
 case 130:
  VAR_4 = FUNC_3(&VAR_1->drm, VAR_2, VAR_3);
  break;
 case 129:
  VAR_4 = FUNC_4(&VAR_1->spd, VAR_2, VAR_3);
  break;
 case 132:
  VAR_4 = FUNC_1(&VAR_1->audio, VAR_2, VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_5(&VAR_1->vendor,
       VAR_2, VAR_3);
  break;
 default:
  FUNC_0(1, "Bad infoframe type %d\n", VAR_1->any.type);
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
