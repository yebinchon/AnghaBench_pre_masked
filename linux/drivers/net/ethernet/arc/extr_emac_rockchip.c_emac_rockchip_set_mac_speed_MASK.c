
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_priv_data {TYPE_1__* soc_data; int grf; } ;
struct TYPE_2__ {int grf_speed_offset; int grf_offset; } ;


 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, unsigned int VAR_1)
{
 struct rockchip_priv_data *VAR_2 = VAR_0;
 u32 VAR_3 = VAR_2->soc_data->grf_speed_offset;
 u32 VAR_4;
 int VAR_5 = 0;

 switch (VAR_1) {
 case 10:
  VAR_4 = (1 << (VAR_3 + 16)) | (0 << VAR_3);
  break;
 case 100:
  VAR_4 = (1 << (VAR_3 + 16)) | (1 << VAR_3);
  break;
 default:
  FUNC_0("speed %u not supported\n", VAR_1);
  return;
 }

 VAR_5 = FUNC_1(VAR_2->grf, VAR_2->soc_data->grf_offset, VAR_4);
 if (VAR_5)
  FUNC_0("unable to apply speed %u to grf (%d)\n", VAR_1, VAR_5);
}
