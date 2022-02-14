
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
struct csiphy_config {int combo_mode; TYPE_1__* csi2; } ;
struct TYPE_6__ {int pos; } ;
struct TYPE_4__ {struct csiphy_lanes_cfg lane_cfg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct csiphy_device *VAR_4,
    struct csiphy_config *VAR_5,
    u32 VAR_6, u8 VAR_7, u8 VAR_8)
{
 struct csiphy_lanes_cfg *VAR_9 = &VAR_5->csi2->lane_cfg;
 u8 VAR_10;
 u8 VAR_11, VAR_12 = 0;
 int VAR_13 = 0;

 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_9->num_data,
         VAR_4->timer_clk_rate);

 FUNC_5(0x1, VAR_4->base +
         VAR_2);
 FUNC_5(0x1, VAR_4->base +
         VAR_3);

 VAR_11 = 0x1;
 VAR_11 |= VAR_8 << 1;
 FUNC_5(VAR_11, VAR_4->base + VAR_0);

 VAR_11 = VAR_5->combo_mode << 4;
 FUNC_5(VAR_11, VAR_4->base + VAR_1);

 for (VAR_13 = 0; VAR_13 <= VAR_9->num_data; VAR_13++) {
  if (VAR_13 == VAR_9->num_data)
   VAR_12 = VAR_9->clk.pos;
  else
   VAR_12 = VAR_9->data[VAR_13].pos;

  FUNC_5(0x10, VAR_4->base +
          FUNC_2(VAR_12));
  FUNC_5(VAR_10, VAR_4->base +
          FUNC_3(VAR_12));
  FUNC_5(0x3f, VAR_4->base +
          FUNC_1(VAR_12));
  FUNC_5(0x3f, VAR_4->base +
          FUNC_0(VAR_12));
 }
}
