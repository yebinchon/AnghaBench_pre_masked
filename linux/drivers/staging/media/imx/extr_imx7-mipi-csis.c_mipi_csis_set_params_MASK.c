
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_data_lanes; } ;
struct csi_state {scalar_t__ wrap_clk; TYPE_2__* csis_fmt; int hs_settle; TYPE_1__ bus; } ;
struct TYPE_4__ {int data_alignment; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct csi_state*) ;
 int FUNC_2 (struct csi_state*,int ) ;
 int FUNC_3 (struct csi_state*,int ) ;
 int FUNC_4 (struct csi_state*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct csi_state *VAR_16)
{
 int VAR_17 = VAR_16->bus.num_data_lanes;
 u32 VAR_18;

 VAR_18 = FUNC_2(VAR_16, VAR_3);
 VAR_18 &= ~VAR_4;
 VAR_18 |= (VAR_17 - 1) << VAR_5;
 FUNC_4(VAR_16, VAR_3, VAR_18);

 FUNC_1(VAR_16);

 FUNC_3(VAR_16, VAR_16->hs_settle);

 VAR_18 = FUNC_2(VAR_16, VAR_11);
 if (VAR_16->csis_fmt->data_alignment == 32)
  VAR_18 |= VAR_10;
 else
  VAR_18 &= ~VAR_10;
 FUNC_4(VAR_16, VAR_11, VAR_18);

 VAR_18 = (0 << VAR_13) |
  (0 << VAR_15) |
  (0 << VAR_14);
 FUNC_4(VAR_16, VAR_12, VAR_18);

 VAR_18 = FUNC_2(VAR_16, VAR_0);
 VAR_18 &= ~VAR_2;
 if (VAR_16->wrap_clk)
  VAR_18 |= VAR_2;
 else
  VAR_18 &= ~VAR_2;

 VAR_18 |= FUNC_0(15);
 VAR_18 &= ~VAR_1;
 FUNC_4(VAR_16, VAR_0, VAR_18);

 FUNC_4(VAR_16, VAR_9, 0x1f4);
 FUNC_4(VAR_16, VAR_8, 0);


 VAR_18 = FUNC_2(VAR_16, VAR_3);
 FUNC_4(VAR_16, VAR_3,
   VAR_18 | VAR_6 |
   VAR_7);
}
