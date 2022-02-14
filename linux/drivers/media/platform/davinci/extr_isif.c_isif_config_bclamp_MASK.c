
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int reset_val_sel; int line_ave_coef; int ob_start_h; int ob_start_v; int ob_v_sz_calc; } ;
struct TYPE_3__ {int mode; int win_count_calc; int win_h_sz_calc; int win_v_sz_calc; int win_start_h_calc; int win_start_v_calc; int clamp_pix_limit; int base_win_sel_calc; } ;
struct isif_black_clamp {int dc_offset; int bc_mode_color; int vert_start_sub; TYPE_2__ vert; TYPE_1__ horz; scalar_t__ en; } ;


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
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct isif_black_clamp *VAR_19)
{
 u32 VAR_20;





 FUNC_0(VAR_19->dc_offset, VAR_1);

 if (VAR_19->en) {
  VAR_20 = VAR_19->bc_mode_color << VAR_10;


  VAR_20 = VAR_20 | 1 | (VAR_19->horz.mode << VAR_12);

  FUNC_0(VAR_20, VAR_0);

  if (VAR_19->horz.mode != VAR_11) {
   VAR_20 = VAR_19->horz.win_count_calc |
         ((!!VAR_19->horz.base_win_sel_calc) <<
    VAR_15) |
         ((!!VAR_19->horz.clamp_pix_limit) <<
    VAR_13) |
         (VAR_19->horz.win_h_sz_calc <<
    VAR_14) |
         (VAR_19->horz.win_v_sz_calc <<
    VAR_16);
   FUNC_0(VAR_20, VAR_2);

   FUNC_0(VAR_19->horz.win_start_h_calc, VAR_3);
   FUNC_0(VAR_19->horz.win_start_v_calc, VAR_4);
  }




  VAR_20 |=
  (VAR_19->vert.reset_val_sel << VAR_18) |
  (VAR_19->vert.line_ave_coef << VAR_17);
  FUNC_0(VAR_20, VAR_6);


  FUNC_0(VAR_19->vert.ob_start_h, VAR_7);

  FUNC_0(VAR_19->vert.ob_start_v, VAR_8);

  FUNC_0(VAR_19->vert.ob_v_sz_calc, VAR_9);

  FUNC_0(VAR_19->vert_start_sub, VAR_5);
 }
}
