
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct ov2659_platform_data {unsigned int link_frequency; } ;
struct TYPE_4__ {void* ctrl3; void* ctrl2; void* ctrl1; } ;
struct ov2659 {int xvclk_frequency; TYPE_1__ pll; struct i2c_client* client; struct ov2659_platform_data* pdata; } ;
struct i2c_client {int dev; } ;
struct TYPE_6__ {scalar_t__ div; void* reg; } ;
struct TYPE_5__ {scalar_t__ div; void* reg; } ;


 int FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *,char*,void*,void*,void*) ;

__attribute__((used)) static void FUNC_2(struct ov2659 *VAR_2)
{
 const struct ov2659_platform_data *VAR_3 = VAR_2->pdata;
 u8 VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 struct i2c_client *VAR_7 = VAR_2->client;
 unsigned int VAR_8 = VAR_3->link_frequency;
 u32 VAR_9, VAR_10, VAR_11;
 u32 VAR_12 = -1;
 u32 VAR_13, VAR_14;
 int VAR_15, VAR_16;

 for (VAR_15 = 0; VAR_0[VAR_15].div != 0; VAR_15++) {
  VAR_10 = VAR_0[VAR_15].div;
  for (VAR_16 = 0; VAR_1[VAR_16].div != 0; VAR_16++) {
   VAR_9 = VAR_1[VAR_16].div;
   for (VAR_11 = 1; VAR_11 <= 63; VAR_11++) {
    VAR_14 = VAR_2->xvclk_frequency;
    VAR_14 *= VAR_11;
    VAR_14 /= VAR_9;
    VAR_14 /= VAR_10;
    VAR_13 = VAR_14 - VAR_8;
    VAR_13 = FUNC_0(VAR_13);

    if ((VAR_13 < VAR_12) || (VAR_12 == -1)) {
     VAR_12 = VAR_13;
     VAR_4 = VAR_0[VAR_15].reg;
     VAR_5 = VAR_11;
     VAR_6 = VAR_1[VAR_16].reg;
    }
   }
  }
 }

 VAR_2->pll.ctrl1 = VAR_4;
 VAR_2->pll.ctrl2 = VAR_5;
 VAR_2->pll.ctrl3 = VAR_6;

 FUNC_1(&VAR_7->dev,
  "Actual reg config: ctrl1_reg: %02x ctrl2_reg: %02x ctrl3_reg: %02x\n",
  VAR_4, VAR_5, VAR_6);
}
