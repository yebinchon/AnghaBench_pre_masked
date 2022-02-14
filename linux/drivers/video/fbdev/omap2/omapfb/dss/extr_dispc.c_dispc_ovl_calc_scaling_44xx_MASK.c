
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


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (unsigned long,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_4, unsigned long VAR_5,
  const struct omap_video_timings *VAR_6,
  u16 VAR_7, u16 VAR_8, u16 VAR_9, u16 VAR_10,
  enum omap_color_mode VAR_11, bool *VAR_12,
  int *VAR_13, int *VAR_14, int *VAR_15, int *VAR_16,
  u16 VAR_17, unsigned long *VAR_18, bool VAR_19)
{
 u16 VAR_20, VAR_21;
 int VAR_22 = *VAR_15;
 u16 VAR_23 = VAR_8 / *VAR_16;
 const int VAR_24 =
    FUNC_3(VAR_2);
 const int VAR_25 = FUNC_3(VAR_1);

 if (VAR_19) {
  VAR_21 = VAR_9 * VAR_25;
 } else {
  VAR_21 = FUNC_2() /
     FUNC_0(VAR_4, VAR_9);
 }

 *VAR_15 = FUNC_0(VAR_7, VAR_21);

 *VAR_15 = *VAR_15 > VAR_22 ? *VAR_15 : VAR_22;
 if (*VAR_15 > *VAR_13)
  return -VAR_0;

 do {
  VAR_20 = VAR_7 / *VAR_15;
 } while (*VAR_15 <= *VAR_13 &&
   VAR_20 > VAR_24 && ++*VAR_15);

 if (VAR_20 > VAR_24) {
  FUNC_1("Cannot scale width exceeds max line width");
  return -VAR_0;
 }

 *VAR_18 = VAR_3.feat->calc_core_clk(VAR_4, VAR_20, VAR_23,
    VAR_9, VAR_10, VAR_19);
 return 0;
}
