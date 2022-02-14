
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_long ;
struct TYPE_4__ {short crsr_x; short spot_x; short crsr_y; short spot_y; int height; int fmode; scalar_t__ width; } ;
struct amifb_par {int vmode; short xres; short yres; short clk_shift; short line_shift; int bplcon0; int fmode; TYPE_1__ crsr; scalar_t__ diwstrt_v; scalar_t__ diwstrt_h; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct TYPE_5__ {void** w; } ;
typedef TYPE_2__ copins ;
struct TYPE_6__ {TYPE_2__*** list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_3__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;
 void* FUNC_1 (int ) ;
 int VAR_10 ;
 int* VAR_11 ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int* VAR_12 ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(const struct amifb_par *VAR_13)
{
 copins *VAR_14, *VAR_15;
 u_short VAR_16, VAR_17, VAR_18;
 u_long VAR_19, VAR_20;
 short VAR_21, VAR_22;

 VAR_15 = VAR_6.list[VAR_7][0];
 VAR_14 = VAR_6.list[VAR_7][1];
 VAR_20 = VAR_19 = FUNC_0(VAR_9);
 VAR_21 = VAR_13->crsr.crsr_x - VAR_13->crsr.spot_x;
 VAR_22 = VAR_13->crsr.crsr_y - VAR_13->crsr.spot_y;
 if (!(VAR_13->vmode & VAR_1)) {
  VAR_21 -= VAR_13->xoffset;
  VAR_22 -= VAR_13->yoffset;
 }
 if (!VAR_10 && VAR_8 > 0 && VAR_13->crsr.height > 0 &&
     VAR_21 > -(short)VAR_13->crsr.width && VAR_21 < VAR_13->xres &&
     VAR_22 > -(short)VAR_13->crsr.height && VAR_22 < VAR_13->yres) {
  VAR_19 = FUNC_0(VAR_11);
  VAR_16 = VAR_13->diwstrt_h + (VAR_21 << VAR_13->clk_shift) - 4;
  VAR_17 = VAR_13->diwstrt_v + (VAR_22 << VAR_13->line_shift);
  VAR_18 = VAR_17 + (VAR_13->crsr.height << VAR_13->line_shift);
  if (VAR_13->bplcon0 & VAR_0) {
   VAR_20 = FUNC_0(VAR_12);
   VAR_11[0] = FUNC_5(VAR_17, VAR_16);
   VAR_12[0] = FUNC_5(VAR_17 + 1, VAR_16);
   if (FUNC_3(VAR_17)) {
    VAR_11[1 << VAR_13->crsr.fmode] = FUNC_4(VAR_17, VAR_16, VAR_18);
    VAR_12[1 << VAR_13->crsr.fmode] = FUNC_4(VAR_17 + 1, VAR_16, VAR_18 + 1);
    FUNC_6(VAR_19, VAR_20);
   } else {
    VAR_11[1 << VAR_13->crsr.fmode] = FUNC_4(VAR_17, VAR_16, VAR_18 + 1);
    VAR_12[1 << VAR_13->crsr.fmode] = FUNC_4(VAR_17 + 1, VAR_16, VAR_18);
   }
  } else {
   VAR_11[0] = FUNC_5(VAR_17, VAR_16) | (VAR_3 && (VAR_13->fmode & VAR_2) ? 0x80 : 0);
   VAR_11[1 << VAR_13->crsr.fmode] = FUNC_4(VAR_17, VAR_16, VAR_18);
  }
 }
 VAR_14[VAR_4].w[1] = FUNC_1(VAR_19);
 VAR_14[VAR_5].w[1] = FUNC_2(VAR_19);
 if (VAR_13->bplcon0 & VAR_0) {
  VAR_15[VAR_4].w[1] = FUNC_1(VAR_20);
  VAR_15[VAR_5].w[1] = FUNC_2(VAR_20);
 }
}
