
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int pos; } ;
struct csiphy_lanes_cfg {int num_data; TYPE_3__* data; TYPE_2__ clk; } ;
struct csiphy_device {scalar_t__ base; int timer_clk_rate; } ;
struct csiphy_config {TYPE_1__* csi2; } ;
struct TYPE_6__ {int pos; } ;
struct TYPE_4__ {struct csiphy_lanes_cfg lane_cfg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_11 ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_12 ;
 scalar_t__ FUNC_13 (int) ;
 int VAR_13 ;
 int FUNC_14 (int ,int,int,int ) ;
 int FUNC_15 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_16(struct csiphy_device *VAR_14,
    struct csiphy_config *VAR_15,
    u32 VAR_16, u8 VAR_17, u8 VAR_18)
{
 struct csiphy_lanes_cfg *VAR_19 = &VAR_15->csi2->lane_cfg;
 u8 VAR_20;
 u8 VAR_21, VAR_22 = 0;
 int VAR_23;

 VAR_20 = FUNC_14(VAR_16, VAR_17, VAR_19->num_data,
         VAR_14->timer_clk_rate);

 VAR_21 = FUNC_0(VAR_19->clk.pos);
 for (VAR_23 = 0; VAR_23 < VAR_19->num_data; VAR_23++)
  VAR_21 |= FUNC_0(VAR_19->data[VAR_23].pos * 2);

 FUNC_15(VAR_21, VAR_14->base + FUNC_1(5));

 VAR_21 = VAR_0;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(6));

 for (VAR_23 = 0; VAR_23 <= VAR_19->num_data; VAR_23++) {
  if (VAR_23 == VAR_19->num_data)
   VAR_22 = 7;
  else
   VAR_22 = VAR_19->data[VAR_23].pos * 2;

  VAR_21 = VAR_1;
  VAR_21 |= 0x17;
  FUNC_15(VAR_21, VAR_14->base + FUNC_2(VAR_22));

  VAR_21 = VAR_2;
  FUNC_15(VAR_21, VAR_14->base + FUNC_3(VAR_22));

  VAR_21 = VAR_20;
  FUNC_15(VAR_21, VAR_14->base + FUNC_4(VAR_22));

  VAR_21 = VAR_5 |
   VAR_4;
  FUNC_15(VAR_21, VAR_14->base + FUNC_6(VAR_22));

  VAR_21 = VAR_6;
  FUNC_15(VAR_21, VAR_14->base + FUNC_7(VAR_22));

  VAR_21 = VAR_7;
  FUNC_15(VAR_21, VAR_14->base + FUNC_8(VAR_22));

  VAR_21 = VAR_9 |
   VAR_8;
  FUNC_15(VAR_21, VAR_14->base + FUNC_9(VAR_22));

  VAR_21 = VAR_10;
  FUNC_15(VAR_21, VAR_14->base + FUNC_10(VAR_22));

  VAR_21 = VAR_13;
  FUNC_15(VAR_21, VAR_14->base + FUNC_13(VAR_22));

  VAR_21 = VAR_11;
  FUNC_15(VAR_21, VAR_14->base +
        FUNC_11(VAR_22));
 }

 VAR_21 = VAR_1;
 FUNC_15(VAR_21, VAR_14->base + FUNC_2(VAR_22));

 VAR_21 = VAR_3;
 FUNC_15(VAR_21, VAR_14->base + FUNC_5(VAR_22));

 VAR_21 = VAR_12;
 FUNC_15(VAR_21, VAR_14->base + FUNC_12(VAR_22));

 VAR_21 = 0xff;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(11));

 VAR_21 = 0xff;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(12));

 VAR_21 = 0xfb;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(13));

 VAR_21 = 0xff;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(14));

 VAR_21 = 0x7f;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(15));

 VAR_21 = 0xff;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(16));

 VAR_21 = 0xff;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(17));

 VAR_21 = 0xef;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(18));

 VAR_21 = 0xff;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(19));

 VAR_21 = 0xff;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(20));

 VAR_21 = 0xff;
 FUNC_15(VAR_21, VAR_14->base + FUNC_1(21));
}
