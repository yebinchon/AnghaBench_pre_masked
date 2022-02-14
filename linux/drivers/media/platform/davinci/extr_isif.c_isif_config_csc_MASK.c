
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* coeff; int en; } ;
struct isif_df_csc {int start_pix; int num_pixels; int start_line; int num_lines; TYPE_2__ csc; } ;
struct TYPE_3__ {int integer; int decimal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct isif_df_csc *VAR_9)
{
 u32 VAR_10 = 0, VAR_11 = 0, VAR_12;

 if (!VAR_9->csc.en) {
  FUNC_0(0, VAR_0);
  return;
 }
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  if ((VAR_12 % 2) == 0) {

   VAR_10 = (VAR_9->csc.coeff[VAR_12].integer <<
    VAR_7) |
    VAR_9->csc.coeff[VAR_12].decimal;
  } else {


   VAR_11 = (VAR_9->csc.coeff[VAR_12].integer <<
    VAR_7) |
    VAR_9->csc.coeff[VAR_12].decimal;
   VAR_11 <<= VAR_6;
   VAR_11 |= VAR_10;
   FUNC_0(VAR_11, (VAR_1 + ((VAR_12 - 1) << 1)));
  }
 }


 FUNC_0(VAR_9->start_pix, VAR_5);






 FUNC_0(VAR_9->num_pixels, VAR_2);
 FUNC_0(VAR_9->start_line, VAR_4);




 FUNC_0(VAR_9->num_lines, VAR_3);


 FUNC_0(1, VAR_0);
}
