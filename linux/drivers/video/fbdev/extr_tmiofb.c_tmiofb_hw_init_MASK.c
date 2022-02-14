
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmiofb_par {scalar_t__ lcr; scalar_t__ ccr; } ;
struct resource {unsigned long start; } ;
struct platform_device {int dummy; } ;
struct mfd_cell {struct resource* resources; } ;
struct fb_info {unsigned long screen_size; struct tmiofb_par* par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 struct mfd_cell* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int) ;
 struct fb_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_17)
{
 const struct mfd_cell *VAR_18 = FUNC_0(VAR_17);
 struct fb_info *VAR_19 = FUNC_2(VAR_17);
 struct tmiofb_par *VAR_20 = VAR_19->par;
 const struct resource *VAR_21 = &VAR_18->resources[0];
 const struct resource *VAR_22 = &VAR_18->resources[2];
 unsigned long VAR_23;

 if (VAR_21 == ((void*)0) || VAR_22 == ((void*)0))
  return -VAR_9;

 VAR_23 = VAR_21->start;

 FUNC_3(0x003a, VAR_20->ccr + VAR_4);
 FUNC_3(0x003a, VAR_20->ccr + VAR_3);
 FUNC_3(0x3f00, VAR_20->ccr + VAR_5);

 FUNC_1(2);

 FUNC_3(0x0000, VAR_20->ccr + VAR_5);
 FUNC_3(VAR_23 >> 16, VAR_20->ccr + VAR_0);
 FUNC_3(VAR_23, VAR_20->ccr + VAR_1);
 FUNC_3(0x0002, VAR_20->ccr + VAR_2);
 FUNC_3(0x40a8, VAR_20->ccr + VAR_7);
 FUNC_3(0x0018, VAR_20->ccr + VAR_8);
 FUNC_3(0x0002, VAR_20->ccr + VAR_6);
 FUNC_1(2);
 FUNC_3(0x000b, VAR_20->ccr + VAR_6);

 VAR_23 = VAR_22->start + VAR_19->screen_size;
 FUNC_3(VAR_23 >> 16, VAR_20->lcr + VAR_13);
 FUNC_3(VAR_23, VAR_20->lcr + VAR_14);
 FUNC_3(VAR_16 - 1, VAR_20->lcr + VAR_12);
 FUNC_3(1, VAR_20->lcr + VAR_11);
 FUNC_3(1, VAR_20->lcr + VAR_10);
 FUNC_3(0, VAR_20->lcr + VAR_15);

 return 0;
}
