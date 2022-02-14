
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct platform_device {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct omap_dsi_pin_config {int num_pins; int* pins; } ;
struct dsi_lane_config {int function; size_t polarity; } ;
struct dsi_data {int num_lanes_supported; int num_lanes_used; int lanes; } ;
typedef enum dsi_lane_function { ____Placeholder_dsi_lane_function } dsi_lane_function ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct platform_device* FUNC_0 (struct omap_dss_device*) ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,struct dsi_lane_config*,int) ;

__attribute__((used)) static int FUNC_3(struct omap_dss_device *VAR_3,
  const struct omap_dsi_pin_config *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_0(VAR_3);
 struct dsi_data *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;
 const int *VAR_8;
 struct dsi_lane_config VAR_9[VAR_1];
 int VAR_10;
 int VAR_11;

 static const enum dsi_lane_function VAR_12[] = {
  132,
  131,
  130,
  129,
  128,
 };

 VAR_7 = VAR_4->num_pins;
 VAR_8 = VAR_4->pins;

 if (VAR_7 < 4 || VAR_7 > VAR_6->num_lanes_supported * 2
   || VAR_7 % 2 != 0)
  return -VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11)
  VAR_9[VAR_11].function = VAR_0;

 VAR_10 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11 += 2) {
  u8 VAR_13, VAR_14;
  int VAR_15, VAR_16;

  VAR_15 = VAR_8[VAR_11];
  VAR_16 = VAR_8[VAR_11 + 1];

  if (VAR_15 < 0 || VAR_15 >= VAR_6->num_lanes_supported * 2)
   return -VAR_2;

  if (VAR_16 < 0 || VAR_16 >= VAR_6->num_lanes_supported * 2)
   return -VAR_2;

  if (VAR_15 & 1) {
   if (VAR_16 != VAR_15 - 1)
    return -VAR_2;
   VAR_14 = 1;
  } else {
   if (VAR_16 != VAR_15 + 1)
    return -VAR_2;
   VAR_14 = 0;
  }

  VAR_13 = VAR_15 / 2;

  VAR_9[VAR_13].function = VAR_12[VAR_11 / 2];
  VAR_9[VAR_13].polarity = VAR_14;
  VAR_10++;
 }

 FUNC_2(VAR_6->lanes, VAR_9, sizeof(VAR_6->lanes));
 VAR_6->num_lanes_used = VAR_10;

 return 0;
}
