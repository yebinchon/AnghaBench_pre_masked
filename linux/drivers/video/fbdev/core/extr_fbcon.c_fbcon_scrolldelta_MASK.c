
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int height; } ;
struct vc_data {size_t vc_num; scalar_t__ vc_mode; int vc_top; scalar_t__ vc_bottom; scalar_t__ vc_rows; int vc_origin; int vc_size_row; int vc_cols; TYPE_3__ vc_font; } ;
struct TYPE_6__ {int yoffset; scalar_t__ xoffset; } ;
struct fbcon_ops {int (* update_start ) (struct fb_info*) ;TYPE_2__ var; } ;
struct fbcon_display {int yscroll; int vrows; int scrollmode; } ;
struct TYPE_5__ {int vmode; } ;
struct fb_info {TYPE_1__ var; struct fbcon_ops* fbcon_par; } ;
struct TYPE_8__ {struct vc_data* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;



 size_t* VAR_6 ;
 struct fbcon_display* VAR_7 ;
 int FUNC_0 (struct vc_data*,int) ;
 scalar_t__ FUNC_1 (struct vc_data*,struct fb_info*) ;
 int FUNC_2 (struct vc_data*,struct fbcon_display*,int) ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 struct fb_info** VAR_11 ;
 int FUNC_3 (int *,int *,unsigned long) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 long VAR_19 ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct vc_data*,int,int) ;
 TYPE_4__* VAR_20 ;

__attribute__((used)) static void FUNC_6(struct vc_data *VAR_21, int VAR_22)
{
 struct fb_info *VAR_23 = VAR_11[VAR_6[VAR_8]];
 struct fbcon_ops *VAR_24 = VAR_23->fbcon_par;
 struct fbcon_display *VAR_25 = &VAR_7[VAR_8];
 int VAR_26, VAR_27, VAR_28;

 if (VAR_19) {
  if (VAR_21->vc_num != VAR_8)
   return;
  if (VAR_21->vc_mode != VAR_5 || !VAR_22)
   return;
  if (VAR_10 >= 0) {
   struct vc_data *VAR_29 = VAR_20[VAR_10].d;

   if (VAR_29->vc_top == VAR_9
       && VAR_29->vc_bottom == VAR_29->vc_rows)
    VAR_29->vc_top = 0;
   if (VAR_10 == VAR_21->vc_num) {
    unsigned long VAR_30, VAR_31;
    int VAR_32;

    VAR_30 = VAR_18;
    VAR_31 = VAR_21->vc_origin +
        VAR_9 * VAR_21->vc_size_row;
    for (VAR_32 = 0; VAR_32 < VAR_9; VAR_32++) {
     if (VAR_30 == VAR_19)
      break;
     if (VAR_30 == VAR_15)
      VAR_30 = VAR_17;
     VAR_30 -= VAR_21->vc_size_row;
     VAR_31 -= VAR_21->vc_size_row;
     FUNC_3((u16 *) VAR_31, (u16 *) VAR_30,
          VAR_21->vc_size_row);
    }
    VAR_18 = VAR_16 = VAR_30;
    FUNC_5(VAR_21, VAR_21->vc_origin,
           VAR_9 * VAR_21->vc_cols);
   }
   VAR_10 = VAR_3;
  }
  FUNC_0(VAR_21, VAR_1 | VAR_2);
  FUNC_2(VAR_21, VAR_25, VAR_22);
  FUNC_0(VAR_21, VAR_0 | VAR_2);
  return;
 }

 if (!VAR_14)
  return;

 VAR_28 = VAR_12;
 VAR_12 -= VAR_22;
 if (VAR_12 < 0)
  VAR_12 = 0;
 else if (VAR_12 > VAR_13)
  VAR_12 = VAR_13;
 if (VAR_12 == VAR_28)
  return;

 if (FUNC_1(VAR_21, VAR_23))
  return;

 FUNC_0(VAR_21, VAR_1);

 VAR_26 = VAR_25->yscroll - VAR_12;
 VAR_27 = VAR_25->vrows;
 switch (VAR_25->scrollmode) {
 case 128:
  VAR_23->var.vmode |= VAR_4;
  break;
 case 130:
 case 129:
  VAR_27 -= VAR_21->vc_rows;
  VAR_23->var.vmode &= ~VAR_4;
  break;
 }
 if (VAR_26 < 0)
  VAR_26 += VAR_27;
 else if (VAR_26 >= VAR_27)
  VAR_26 -= VAR_27;

 VAR_24->var.xoffset = 0;
 VAR_24->var.yoffset = VAR_26 * VAR_21->vc_font.height;
 VAR_24->update_start(VAR_23);

 if (!VAR_12)
  FUNC_0(VAR_21, VAR_0);
}
