
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int v4l_minor_number_video; int v4l_minor_number_vbi; int v4l_minor_number_radio; } ;
typedef enum pvr2_v4l_type { ____Placeholder_pvr2_v4l_type } pvr2_v4l_type ;






void FUNC_0(struct pvr2_hdw *VAR_0,
         enum pvr2_v4l_type VAR_1,int VAR_2)
{
 switch (VAR_1) {
 case 128: VAR_0->v4l_minor_number_video = VAR_2;break;
 case 129: VAR_0->v4l_minor_number_vbi = VAR_2;break;
 case 130: VAR_0->v4l_minor_number_radio = VAR_2;break;
 default: break;
 }
}
