
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gxfb_par {scalar_t__ enable_crt; } ;
struct fb_info {struct gxfb_par* par; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct gxfb_par*,int ) ;
 int FUNC_1 (struct gxfb_par*,int ) ;
 int FUNC_2 (struct gxfb_par*,int ,int) ;
 int FUNC_3 (struct gxfb_par*,int ,int) ;

int FUNC_4(struct fb_info *VAR_8, int VAR_9)
{
 struct gxfb_par *VAR_10 = VAR_8->par;
 u32 VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;


 switch (VAR_9) {
 case 129:
  VAR_13 = 0; VAR_14 = 1; VAR_15 = 1; VAR_16 = 1;
  break;
 case 131:
  VAR_13 = 1; VAR_14 = 1; VAR_15 = 1; VAR_16 = 1;
  break;
 case 128:
  VAR_13 = 1; VAR_14 = 1; VAR_15 = 0; VAR_16 = 1;
  break;
 case 132:
  VAR_13 = 1; VAR_14 = 0; VAR_15 = 1; VAR_16 = 1;
  break;
 case 130:
  VAR_13 = 1; VAR_14 = 0; VAR_15 = 0; VAR_16 = 0;
  break;
 default:
  return -VAR_0;
 }
 VAR_11 = FUNC_1(VAR_10, VAR_3);
 VAR_11 &= ~(VAR_5 | VAR_6 | VAR_7 |
   VAR_4);
 if (!VAR_13)
  VAR_11 |= VAR_5;
 if (VAR_14)
  VAR_11 |= VAR_6;
 if (VAR_15)
  VAR_11 |= VAR_7;
 if (VAR_16)
  VAR_11 |= VAR_4;
 FUNC_3(VAR_10, VAR_3, VAR_11);



 if (VAR_10->enable_crt == 0) {
  VAR_12 = FUNC_0(VAR_10, VAR_1);
  if (VAR_9 == 130)
   VAR_12 &= ~VAR_2;
  else
   VAR_12 |= VAR_2;
  FUNC_2(VAR_10, VAR_1, VAR_12);
 }

 return 0;
}
