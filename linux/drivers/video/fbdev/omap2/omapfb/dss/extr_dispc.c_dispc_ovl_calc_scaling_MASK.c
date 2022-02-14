
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct omap_video_timings {scalar_t__ pixelclock; } ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;
typedef enum omap_dss_rotation_type { ____Placeholder_omap_dss_rotation_type } omap_dss_rotation_type ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;
struct TYPE_4__ {TYPE_1__* feat; } ;
struct TYPE_3__ {int (* calc_scaling ) (unsigned long,unsigned long,struct omap_video_timings const*,int,int,int,int,int,int*,int*,int*,int*,int*,int,unsigned long*,int) ;} ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int const) ;
 int FUNC_2 (char*,int,int,int,int,int,int ,int,int ,int,int,int,int,int,int ,int,int ,int,unsigned long,unsigned long) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (unsigned long,unsigned long,struct omap_video_timings const*,int,int,int,int,int,int*,int*,int*,int*,int*,int,unsigned long*,int) ;

__attribute__((used)) static int FUNC_8(unsigned long VAR_10, unsigned long VAR_11,
  enum omap_overlay_caps VAR_12,
  const struct omap_video_timings *VAR_13,
  u16 VAR_14, u16 VAR_15, u16 VAR_16, u16 VAR_17,
  enum omap_color_mode VAR_18, bool *VAR_19,
  int *VAR_20, int *VAR_21, u16 VAR_22,
  enum omap_dss_rotation_type VAR_23, bool VAR_24)
{
 const int VAR_25 = FUNC_5(VAR_2);
 const int VAR_26 = 16;
 unsigned long VAR_27 = 0;
 int VAR_28, VAR_29, VAR_30;

 if (VAR_14 == VAR_16 && VAR_15 == VAR_17)
  return 0;

 if (!VAR_24 && (VAR_10 == 0 || VAR_13->pixelclock == 0)) {
  FUNC_3("cannot calculate scaling settings: pclk is zero\n");
  return -VAR_0;
 }

 if ((VAR_12 & VAR_7) == 0)
  return -VAR_0;

 if (VAR_24) {
  *VAR_20 = *VAR_21 = 1;
 } else {
  *VAR_20 = VAR_26;
  *VAR_21 = (VAR_23 == VAR_8 &&
    FUNC_6(VAR_1)) ?
    2 : VAR_26;
 }

 if (VAR_18 == VAR_3 ||
     VAR_18 == VAR_4 ||
     VAR_18 == VAR_5 ||
     VAR_18 == VAR_6) {
  *VAR_20 = 1;
  *VAR_21 = 1;
  *VAR_19 = 0;
  return 0;
 }

 VAR_28 = FUNC_1(FUNC_1(VAR_14, VAR_16), VAR_25);
 VAR_29 = FUNC_1(FUNC_1(VAR_15, VAR_17), VAR_25);

 if (VAR_28 > *VAR_20 || VAR_16 > VAR_14 * 8)
  return -VAR_0;

 if (VAR_29 > *VAR_21 || VAR_17 > VAR_15 * 8)
  return -VAR_0;

 VAR_30 = VAR_9.feat->calc_scaling(VAR_10, VAR_11, VAR_13, VAR_14, VAR_15,
  VAR_16, VAR_17, VAR_18, VAR_19,
  VAR_20, VAR_21, &VAR_28, &VAR_29, VAR_22, &VAR_27,
  VAR_24);
 if (VAR_30)
  return VAR_30;

 FUNC_2("%dx%d -> %dx%d (%d.%02d x %d.%02d), decim %dx%d %dx%d (%d.%02d x %d.%02d), taps %d, req clk %lu, cur clk %lu\n",
  VAR_14, VAR_15,
  VAR_16, VAR_17,
  VAR_16 / VAR_14, FUNC_0(VAR_16, VAR_14),
  VAR_17 / VAR_15, FUNC_0(VAR_17, VAR_15),

  VAR_28, VAR_29,
  VAR_14 / VAR_28, VAR_15 / VAR_29,
  VAR_16 / (VAR_14 / VAR_28), FUNC_0(VAR_16, VAR_14 / VAR_28),
  VAR_17 / (VAR_15 / VAR_29), FUNC_0(VAR_17, VAR_15 / VAR_29),

  *VAR_19 ? 5 : 3,
  VAR_27, FUNC_4());

 if (!VAR_27 || VAR_27 > FUNC_4()) {
  FUNC_3("failed to set up scaling, "
   "required core clk rate = %lu Hz, "
   "current core clk rate = %lu Hz\n",
   VAR_27, FUNC_4());
  return -VAR_0;
 }

 *VAR_20 = VAR_28;
 *VAR_21 = VAR_29;
 return 0;
}
