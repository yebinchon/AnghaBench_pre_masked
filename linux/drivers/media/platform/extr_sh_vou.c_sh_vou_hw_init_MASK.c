
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sh_vou_pdata {int flags; int bus_fmt; } ;
struct TYPE_2__ {int dev; } ;
struct sh_vou_device {int pix; TYPE_1__ v4l2_dev; struct sh_vou_pdata* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sh_vou_device*,int ) ;
 int FUNC_3 (struct sh_vou_device*,int ,int) ;
 int FUNC_4 (struct sh_vou_device*,int ,int,int) ;
 int FUNC_5 (struct sh_vou_device*,int ,int) ;
 int FUNC_6 (struct sh_vou_device*,int *) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sh_vou_device *VAR_9)
{
 struct sh_vou_pdata *VAR_10 = VAR_9->pdata;
 u32 VAR_11 = FUNC_1(VAR_10->bus_fmt) << 29;
 int VAR_12 = 100;


 FUNC_3(VAR_9, VAR_5, 0);


 FUNC_3(VAR_9, VAR_8, 0x101);
 while (--VAR_12 && (FUNC_2(VAR_9, VAR_8) & 0x101))
  FUNC_7(1);

 if (!VAR_12)
  return -VAR_0;

 FUNC_0(VAR_9->v4l2_dev.dev, "Reset took %dus\n", 100 - VAR_12);

 if (VAR_10->flags & VAR_2)
  VAR_11 |= 1 << 28;
 if (VAR_10->flags & VAR_1)
  VAR_11 |= 1 << 27;
 if (VAR_10->flags & VAR_3)
  VAR_11 |= 1 << 26;
 FUNC_4(VAR_9, VAR_4, VAR_11, 0xfc000000);


 FUNC_3(VAR_9, VAR_7, 4);

 FUNC_5(VAR_9, VAR_6, 0x800000);

 FUNC_6(VAR_9, &VAR_9->pix);

 return 0;
}
