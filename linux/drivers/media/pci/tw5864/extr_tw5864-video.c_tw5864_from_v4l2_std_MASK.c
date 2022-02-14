
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef enum tw5864_vid_std { ____Placeholder_tw5864_vid_std } tw5864_vid_std ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static enum tw5864_vid_std FUNC_0(v4l2_std_id VAR_15)
{
 if (VAR_15 & VAR_9)
  return VAR_1;
 if (VAR_15 & VAR_11)
  return VAR_3;
 if (VAR_15 & VAR_14)
  return VAR_7;
 if (VAR_15 & VAR_8)
  return VAR_2;
 if (VAR_15 & VAR_12)
  return VAR_6;
 if (VAR_15 & VAR_13)
  return VAR_5;
 if (VAR_15 & VAR_10)
  return VAR_4;

 return VAR_0;
}
