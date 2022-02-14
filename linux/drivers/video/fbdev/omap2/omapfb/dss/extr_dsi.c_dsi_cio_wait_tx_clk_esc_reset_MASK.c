
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct platform_device {int dummy; } ;
struct dsi_data {int num_lanes_supported; TYPE_1__* lanes; } ;
struct TYPE_2__ {scalar_t__ function; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5)
{
 struct dsi_data *VAR_6 = FUNC_1(VAR_5);
 int VAR_7, VAR_8;
 bool VAR_9[VAR_2];
 static const u8 VAR_10[] = { 28, 27, 26 };
 static const u8 VAR_11[] = { 24, 25, 26, 27, 28 };
 const u8 *VAR_12;

 if (FUNC_3(VAR_4))
  VAR_12 = VAR_10;
 else
  VAR_12 = VAR_11;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_lanes_supported; ++VAR_8)
  VAR_9[VAR_8] = VAR_6->lanes[VAR_8].function != VAR_1;

 VAR_7 = 100000;
 while (1) {
  u32 VAR_13;
  int VAR_14;

  VAR_13 = FUNC_2(VAR_5, VAR_0);

  VAR_14 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_6->num_lanes_supported; ++VAR_8) {
   if (!VAR_9[VAR_8] || (VAR_13 & (1 << VAR_12[VAR_8])))
    VAR_14++;
  }

  if (VAR_14 == VAR_6->num_lanes_supported)
   break;

  if (--VAR_7 == 0) {
   for (VAR_8 = 0; VAR_8 < VAR_6->num_lanes_supported; ++VAR_8) {
    if (!VAR_9[VAR_8] || (VAR_13 & (1 << VAR_12[VAR_8])))
     continue;

    FUNC_0("CIO TXCLKESC%d domain not coming " "out of reset\n", VAR_8);

   }
   return -VAR_3;
  }
 }

 return 0;
}
