
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lynxfb_output {int* channel; int paths; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_fix_screeninfo {int dummy; } ;
typedef enum disp_output { ____Placeholder_disp_output } disp_output ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 () ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_5(struct lynxfb_output *VAR_9,
       struct fb_var_screeninfo *VAR_10,
       struct fb_fix_screeninfo *VAR_11)
{
 int VAR_12;
 enum disp_output VAR_13;
 int VAR_14;

 VAR_12 = 0;
 VAR_13 = 0;
 VAR_14 = *VAR_9->channel;

 if (FUNC_4() != VAR_1) {
  if (VAR_14 == VAR_8) {
   FUNC_3("primary channel\n");
   if (VAR_9->paths & VAR_7)
    VAR_13 |= VAR_4;
   if (VAR_9->paths & VAR_6)
    VAR_13 |= VAR_2;

  } else {
   FUNC_3("secondary channel\n");
   if (VAR_9->paths & VAR_7)
    VAR_13 |= VAR_5;
   if (VAR_9->paths & VAR_6)
    VAR_13 |= VAR_3;
  }
  FUNC_0(VAR_13);
 } else {

  u32 VAR_15;

  VAR_15 = FUNC_1(VAR_0);
  VAR_15 |= 0xf;
  FUNC_2(VAR_0, VAR_15);
 }

 FUNC_3("ddk setlogicdispout done\n");
 return VAR_12;
}
