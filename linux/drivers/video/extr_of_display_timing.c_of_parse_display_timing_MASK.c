
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct display_timing {int flags; int pixelclock; int vsync_len; int vactive; int vfront_porch; int vback_porch; int hsync_len; int hactive; int hfront_porch; int hback_porch; } ;
struct device_node {int dummy; } ;


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
 int FUNC_0 (struct display_timing*,int ,int) ;
 scalar_t__ FUNC_1 (struct device_node const*,char*) ;
 int FUNC_2 (struct device_node const*,char*,scalar_t__*) ;
 int FUNC_3 (struct device_node const*,char*,int *) ;
 int FUNC_4 (char*,struct device_node const*) ;

__attribute__((used)) static int FUNC_5(const struct device_node *VAR_14,
  struct display_timing *VAR_15)
{
 u32 VAR_16 = 0;
 int VAR_17 = 0;

 FUNC_0(VAR_15, 0, sizeof(*VAR_15));

 VAR_17 |= FUNC_3(VAR_14, "hback-porch", &VAR_15->hback_porch);
 VAR_17 |= FUNC_3(VAR_14, "hfront-porch", &VAR_15->hfront_porch);
 VAR_17 |= FUNC_3(VAR_14, "hactive", &VAR_15->hactive);
 VAR_17 |= FUNC_3(VAR_14, "hsync-len", &VAR_15->hsync_len);
 VAR_17 |= FUNC_3(VAR_14, "vback-porch", &VAR_15->vback_porch);
 VAR_17 |= FUNC_3(VAR_14, "vfront-porch", &VAR_15->vfront_porch);
 VAR_17 |= FUNC_3(VAR_14, "vactive", &VAR_15->vactive);
 VAR_17 |= FUNC_3(VAR_14, "vsync-len", &VAR_15->vsync_len);
 VAR_17 |= FUNC_3(VAR_14, "clock-frequency", &VAR_15->pixelclock);

 VAR_15->flags = 0;
 if (!FUNC_2(VAR_14, "vsync-active", &VAR_16))
  VAR_15->flags |= VAR_16 ? VAR_11 :
    VAR_12;
 if (!FUNC_2(VAR_14, "hsync-active", &VAR_16))
  VAR_15->flags |= VAR_16 ? VAR_4 :
    VAR_5;
 if (!FUNC_2(VAR_14, "de-active", &VAR_16))
  VAR_15->flags |= VAR_16 ? VAR_0 :
    VAR_1;
 if (!FUNC_2(VAR_14, "pixelclk-active", &VAR_16))
  VAR_15->flags |= VAR_16 ? VAR_8 :
    VAR_7;

 if (!FUNC_2(VAR_14, "syncclk-active", &VAR_16))
  VAR_15->flags |= VAR_16 ? VAR_10 :
    VAR_9;
 else if (VAR_15->flags & (VAR_8 |
         VAR_7))
  VAR_15->flags |= VAR_15->flags & VAR_8 ?
    VAR_10 :
    VAR_9;

 if (FUNC_1(VAR_14, "interlaced"))
  VAR_15->flags |= VAR_6;
 if (FUNC_1(VAR_14, "doublescan"))
  VAR_15->flags |= VAR_3;
 if (FUNC_1(VAR_14, "doubleclk"))
  VAR_15->flags |= VAR_2;

 if (VAR_17) {
  FUNC_4("%pOF: error reading timing properties\n", VAR_14);
  return -VAR_13;
 }

 return 0;
}
