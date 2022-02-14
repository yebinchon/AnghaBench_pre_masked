
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct platform_device {int dummy; } ;
struct dsi_data {int num_lanes_supported; TYPE_1__* lanes; } ;
struct TYPE_2__ {unsigned int polarity; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,int ,int,int,int) ;
 struct dsi_data* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_1,
  unsigned VAR_2, unsigned VAR_3)
{
 struct dsi_data *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;
 u32 VAR_6;
 u8 VAR_7 = VAR_4->num_lanes_supported == 3 ? 22 : 26;

 VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_lanes_supported; ++VAR_5) {
  unsigned VAR_8 = VAR_4->lanes[VAR_5].polarity;

  if (VAR_2 & (1 << VAR_5))
   VAR_6 |= 1 << (VAR_5 * 2 + (VAR_8 ? 0 : 1));

  if (VAR_3 & (1 << VAR_5))
   VAR_6 |= 1 << (VAR_5 * 2 + (VAR_8 ? 1 : 0));
 }
 FUNC_0(VAR_1, VAR_0, VAR_6, VAR_7, 17);




 FUNC_0(VAR_1, VAR_0, 1, 27, 27);
}
