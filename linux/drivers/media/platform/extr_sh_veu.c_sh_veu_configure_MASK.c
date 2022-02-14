
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_8__ {int bytesperline; TYPE_3__ frame; } ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_6__ {TYPE_1__ frame; } ;
struct sh_veu_dev {scalar_t__ is_2h; TYPE_4__ vfmt_out; TYPE_2__ vfmt_in; } ;


 int FUNC_0 (int,int) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct sh_veu_dev*,int ,int) ;
 int FUNC_2 (struct sh_veu_dev*,int,int,int) ;
 int FUNC_3 (struct sh_veu_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct sh_veu_dev *VAR_18)
{
 u32 VAR_19, VAR_20, VAR_21;
 u32 VAR_22, VAR_23, VAR_24;
 u32 VAR_25, VAR_26;


 FUNC_1(VAR_18, VAR_0, 0x100);

 VAR_19 = VAR_18->vfmt_in.frame.width;
 VAR_21 = VAR_18->vfmt_in.frame.height;
 VAR_20 = FUNC_0(VAR_18->vfmt_in.frame.width, 16);

 VAR_22 = VAR_25 = VAR_18->vfmt_out.frame.width;
 VAR_24 = VAR_26 = VAR_18->vfmt_out.frame.height;

 VAR_23 = VAR_18->vfmt_out.bytesperline;






 VAR_19 = FUNC_2(VAR_18, VAR_19, VAR_25, VAR_22);
 VAR_21 = FUNC_3(VAR_18, VAR_21, VAR_26, VAR_24);

 FUNC_1(VAR_18, VAR_16, VAR_20);
 FUNC_1(VAR_18, VAR_14, VAR_19 | (VAR_21 << 16));
 FUNC_1(VAR_18, VAR_1, 0);

 FUNC_1(VAR_18, VAR_4, VAR_23);
 FUNC_1(VAR_18, VAR_3, 0);

 FUNC_1(VAR_18, VAR_15, 0x67);
 FUNC_1(VAR_18, VAR_17, (6 << 16) | (0 << 14) | 2 | 4);

 if (VAR_18->is_2h) {
  FUNC_1(VAR_18, VAR_5, 0x0cc5);
  FUNC_1(VAR_18, VAR_6, 0x0950);
  FUNC_1(VAR_18, VAR_7, 0x0000);

  FUNC_1(VAR_18, VAR_8, 0x397f);
  FUNC_1(VAR_18, VAR_9, 0x0950);
  FUNC_1(VAR_18, VAR_10, 0x3ccd);

  FUNC_1(VAR_18, VAR_11, 0x0000);
  FUNC_1(VAR_18, VAR_12, 0x0950);
  FUNC_1(VAR_18, VAR_13, 0x1023);

  FUNC_1(VAR_18, VAR_2, 0x00800010);
 }
}
