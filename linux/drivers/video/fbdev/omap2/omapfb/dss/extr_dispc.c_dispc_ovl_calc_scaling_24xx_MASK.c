
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
 TYPE_2__ VAR_2 ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 unsigned long FUNC_4 (unsigned long,int,int,int,int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_3, unsigned long VAR_4,
  const struct omap_video_timings *VAR_5,
  u16 VAR_6, u16 VAR_7, u16 VAR_8, u16 VAR_9,
  enum omap_color_mode VAR_10, bool *VAR_11,
  int *VAR_12, int *VAR_13, int *VAR_14, int *VAR_15,
  u16 VAR_16, unsigned long *VAR_17, bool VAR_18)
{
 int VAR_19;
 u16 VAR_20, VAR_21;
 int VAR_22 = FUNC_3(*VAR_14, *VAR_15);
 const int VAR_23 =
   FUNC_2(VAR_1);

 *VAR_11 = 0;

 do {
  VAR_21 = VAR_7 / *VAR_15;
  VAR_20 = VAR_6 / *VAR_14;
  *VAR_17 = VAR_2.feat->calc_core_clk(VAR_3, VAR_20,
    VAR_21, VAR_8, VAR_9, VAR_18);
  VAR_19 = (VAR_20 > VAR_23 || !*VAR_17 ||
   *VAR_17 > FUNC_1());
  if (VAR_19) {
   if (*VAR_14 == *VAR_15) {
    *VAR_14 = VAR_22;
    ++*VAR_15;
   } else {
    FUNC_5(*VAR_14, *VAR_15);
    if (*VAR_14 < *VAR_15)
     ++*VAR_14;
   }
  }
 } while (*VAR_14 <= *VAR_12 && *VAR_15 <= *VAR_13 && VAR_19);

 if (VAR_19) {
  FUNC_0("failed to find scaling settings\n");
  return -VAR_0;
 }

 if (VAR_20 > VAR_23) {
  FUNC_0("Cannot scale max input width exceeded");
  return -VAR_0;
 }
 return 0;
}
