
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct omap_video_timings {int dummy; } ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;
struct TYPE_4__ {TYPE_1__* feat; } ;
struct TYPE_3__ {unsigned long (* calc_core_clk ) (unsigned long,int,int,int,int,int) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (unsigned long,struct omap_video_timings const*,int,int,int,int,int) ;
 int FUNC_2 (unsigned long,unsigned long,struct omap_video_timings const*,int,int,int,int,int,int) ;
 TYPE_2__ VAR_2 ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (unsigned long,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_3, unsigned long VAR_4,
  const struct omap_video_timings *VAR_5,
  u16 VAR_6, u16 VAR_7, u16 VAR_8, u16 VAR_9,
  enum omap_color_mode VAR_10, bool *VAR_11,
  int *VAR_12, int *VAR_13, int *VAR_14, int *VAR_15,
  u16 VAR_16, unsigned long *VAR_17, bool VAR_18)
{
 int VAR_19;
 u16 VAR_20, VAR_21;
 const int VAR_22 =
   FUNC_4(VAR_1);

 do {
  VAR_21 = VAR_7 / *VAR_15;
  VAR_20 = VAR_6 / *VAR_14;
  *VAR_11 = VAR_21 > VAR_9;

  if (VAR_20 > VAR_22)
   if (VAR_21 > VAR_9 &&
      VAR_21 < VAR_9 * 2)
    *VAR_11 = 0;
again:
  if (*VAR_11)
   *VAR_17 = FUNC_1(VAR_3, VAR_5,
      VAR_20, VAR_21, VAR_8,
      VAR_9, VAR_10);
  else
   *VAR_17 = VAR_2.feat->calc_core_clk(VAR_3, VAR_20,
     VAR_21, VAR_8, VAR_9,
     VAR_18);

  VAR_19 = FUNC_2(VAR_3, VAR_4, VAR_5,
    VAR_16, VAR_20, VAR_21, VAR_8,
    VAR_9, *VAR_11);
  if (VAR_19 && *VAR_11) {
   *VAR_11 = 0;
   goto again;
  }

  VAR_19 = (VAR_19 || VAR_20 > VAR_22 * 2 ||
   (VAR_20 > VAR_22 && *VAR_11) ||
   !*VAR_17 || *VAR_17 > FUNC_3());

  if (!VAR_19) {

   if (VAR_20 / 4 > VAR_8)
     VAR_19 = 1;

   if (*VAR_11) {
    if (VAR_21 / 4 > VAR_9)
     VAR_19 = 1;
   } else {
    if (VAR_21 / 2 > VAR_9)
     VAR_19 = 1;
   }
  }

  if (VAR_19)
   ++*VAR_15;
 } while (*VAR_14 <= *VAR_12 && *VAR_15 <= *VAR_13 && VAR_19);

 if (VAR_19) {
  FUNC_0("failed to find scaling settings\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_16, VAR_20,
    VAR_21, VAR_8, VAR_9, *VAR_11)) {
   FUNC_0("horizontal timing too tight\n");
   return -VAR_0;
 }

 if (VAR_20 > (VAR_22 * 2)) {
  FUNC_0("Cannot setup scaling");
  FUNC_0("width exceeds maximum width possible");
  return -VAR_0;
 }

 if (VAR_20 > VAR_22 && *VAR_11) {
  FUNC_0("cannot setup scaling with five taps");
  return -VAR_0;
 }
 return 0;
}
