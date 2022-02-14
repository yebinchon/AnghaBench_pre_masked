
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int left; int width; int top; int height; } ;
struct ov772x_win_size {int com7_bit; TYPE_1__ rect; } ;
struct ov772x_priv {int regmap; TYPE_5__* band_filter_ctrl; int fps; TYPE_4__* hflip_ctrl; TYPE_3__* vflip_ctrl; TYPE_2__* info; } ;
struct ov772x_color_format {int dsp3; int dsp4; int com3; int com7; } ;
struct TYPE_10__ {short val; } ;
struct TYPE_9__ {scalar_t__ val; } ;
struct TYPE_8__ {scalar_t__ val; } ;
struct TYPE_7__ {int flags; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct ov772x_priv*) ;
 int FUNC_1 (struct ov772x_priv*) ;
 int FUNC_2 (struct ov772x_priv*,int ,struct ov772x_color_format const*,struct ov772x_win_size const*) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ov772x_priv *VAR_28,
        const struct ov772x_color_format *VAR_29,
        const struct ov772x_win_size *VAR_30)
{
 int VAR_31;
 u8 VAR_32;


 FUNC_1(VAR_28);


 VAR_31 = FUNC_0(VAR_28);
 if (VAR_31 < 0)
  return VAR_31;


 VAR_31 = FUNC_4(VAR_28->regmap, VAR_18, VAR_30->rect.left >> 2);
 if (VAR_31 < 0)
  goto ov772x_set_fmt_error;
 VAR_31 = FUNC_4(VAR_28->regmap, VAR_17, VAR_30->rect.width >> 2);
 if (VAR_31 < 0)
  goto ov772x_set_fmt_error;
 VAR_31 = FUNC_4(VAR_28->regmap, VAR_27, VAR_30->rect.top >> 1);
 if (VAR_31 < 0)
  goto ov772x_set_fmt_error;
 VAR_31 = FUNC_4(VAR_28->regmap, VAR_26, VAR_30->rect.height >> 1);
 if (VAR_31 < 0)
  goto ov772x_set_fmt_error;
 VAR_31 = FUNC_4(VAR_28->regmap, VAR_11, VAR_30->rect.width >> 2);
 if (VAR_31 < 0)
  goto ov772x_set_fmt_error;
 VAR_31 = FUNC_4(VAR_28->regmap, VAR_25, VAR_30->rect.height >> 1);
 if (VAR_31 < 0)
  goto ov772x_set_fmt_error;
 VAR_31 = FUNC_4(VAR_28->regmap, VAR_12,
      ((VAR_30->rect.top & 1) << VAR_16) |
      ((VAR_30->rect.left & 3) << VAR_14) |
      ((VAR_30->rect.height & 1) << VAR_15) |
      ((VAR_30->rect.width & 3) << VAR_13));
 if (VAR_31 < 0)
  goto ov772x_set_fmt_error;
 VAR_31 = FUNC_4(VAR_28->regmap, VAR_7,
      ((VAR_30->rect.height & 1) << VAR_9) |
      ((VAR_30->rect.width & 3) << VAR_8));
 if (VAR_31 < 0)
  goto ov772x_set_fmt_error;


 VAR_32 = VAR_29->dsp3;
 if (VAR_32) {
  VAR_31 = FUNC_3(VAR_28->regmap, VAR_5, VAR_23, VAR_32);
  if (VAR_31 < 0)
   goto ov772x_set_fmt_error;
 }


 if (VAR_29->dsp4) {
  VAR_31 = FUNC_4(VAR_28->regmap, VAR_6, VAR_29->dsp4);
  if (VAR_31 < 0)
   goto ov772x_set_fmt_error;
 }


 VAR_32 = VAR_29->com3;
 if (VAR_28->info && (VAR_28->info->flags & VAR_21))
  VAR_32 |= VAR_24;
 if (VAR_28->info && (VAR_28->info->flags & VAR_20))
  VAR_32 |= VAR_10;
 if (VAR_28->vflip_ctrl->val)
  VAR_32 ^= VAR_24;
 if (VAR_28->hflip_ctrl->val)
  VAR_32 ^= VAR_10;

 VAR_31 = FUNC_3(VAR_28->regmap, VAR_2, VAR_22 | VAR_19, VAR_32);
 if (VAR_31 < 0)
  goto ov772x_set_fmt_error;


 VAR_31 = FUNC_4(VAR_28->regmap, VAR_3, VAR_30->com7_bit | VAR_29->com7);
 if (VAR_31 < 0)
  goto ov772x_set_fmt_error;


 VAR_31 = FUNC_2(VAR_28, VAR_28->fps, VAR_29, VAR_30);
 if (VAR_31 < 0)
  goto ov772x_set_fmt_error;


 if (VAR_28->band_filter_ctrl->val) {
  unsigned short VAR_33 = VAR_28->band_filter_ctrl->val;

  VAR_31 = FUNC_3(VAR_28->regmap, VAR_4,
      VAR_1, VAR_1);
  if (!VAR_31)
   VAR_31 = FUNC_3(VAR_28->regmap, VAR_0,
       0xff, 256 - VAR_33);
  if (VAR_31 < 0)
   goto ov772x_set_fmt_error;
 }

 return VAR_31;

ov772x_set_fmt_error:

 FUNC_1(VAR_28);

 return VAR_31;
}
