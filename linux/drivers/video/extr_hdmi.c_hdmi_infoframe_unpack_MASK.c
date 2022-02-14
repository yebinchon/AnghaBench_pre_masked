
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union hdmi_infoframe {int vendor; int audio; int spd; int drm; int avi; } ;
typedef int u8 ;


 int VAR_0 ;
 size_t VAR_1 ;





 int FUNC_0 (int *,void const*,size_t) ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 (int *,void const*,size_t) ;
 int FUNC_4 (int *,void const*,size_t) ;

int FUNC_5(union hdmi_infoframe *VAR_2,
     const void *VAR_3, size_t VAR_4)
{
 int VAR_5;
 const u8 *VAR_6 = VAR_3;

 if (VAR_4 < VAR_1)
  return -VAR_0;

 switch (VAR_6[0]) {
 case 131:
  VAR_5 = FUNC_1(&VAR_2->avi, VAR_3, VAR_4);
  break;
 case 130:
  VAR_5 = FUNC_2(&VAR_2->drm, VAR_3, VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_3(&VAR_2->spd, VAR_3, VAR_4);
  break;
 case 132:
  VAR_5 = FUNC_0(&VAR_2->audio, VAR_3, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_4(&VAR_2->vendor, VAR_3, VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
