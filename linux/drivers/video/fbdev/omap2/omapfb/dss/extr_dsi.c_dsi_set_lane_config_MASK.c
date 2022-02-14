
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct platform_device {int dummy; } ;
struct dsi_data {int num_lanes_used; unsigned int num_lanes_supported; TYPE_1__* lanes; } ;
typedef enum dsi_lane_function { ____Placeholder_dsi_lane_function } dsi_lane_function ;
struct TYPE_2__ {int const function; unsigned int polarity; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,unsigned int,unsigned int) ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_1(VAR_2);
 static const u8 VAR_4[] = { 0, 4, 8, 12, 16 };
 static const enum dsi_lane_function VAR_5[] = {
  132,
  131,
  130,
  129,
  128,
 };
 u32 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_3->num_lanes_used; ++VAR_7) {
  unsigned VAR_8 = VAR_4[VAR_7];
  unsigned VAR_9, VAR_10;
  unsigned VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_3->num_lanes_supported; ++VAR_11)
   if (VAR_3->lanes[VAR_11].function == VAR_5[VAR_7])
    break;

  if (VAR_11 == VAR_3->num_lanes_supported)
   return -VAR_1;

  VAR_10 = VAR_11;
  VAR_9 = VAR_3->lanes[VAR_11].polarity;

  VAR_6 = FUNC_0(VAR_6, VAR_10 + 1, VAR_8 + 2, VAR_8);
  VAR_6 = FUNC_0(VAR_6, VAR_9, VAR_8 + 3, VAR_8 + 3);
 }


 for (; VAR_7 < VAR_3->num_lanes_supported; ++VAR_7) {
  unsigned VAR_12 = VAR_4[VAR_7];

  VAR_6 = FUNC_0(VAR_6, 0, VAR_12 + 2, VAR_12);
  VAR_6 = FUNC_0(VAR_6, 0, VAR_12 + 3, VAR_12 + 3);
 }

 FUNC_3(VAR_2, VAR_0, VAR_6);

 return 0;
}
