
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pucan_timing_slow {int ewl; int sjw_t; int tseg2; int tseg1; int brp; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct peak_canfd_priv {int ndev; TYPE_1__ can; } ;
struct can_bittiming {scalar_t__ brp; scalar_t__ phase_seg2; scalar_t__ phase_seg1; scalar_t__ prop_seg; scalar_t__ sjw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,int ,int ,int ) ;
 struct pucan_timing_slow* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct peak_canfd_priv*) ;
 int FUNC_9 (struct peak_canfd_priv*) ;

__attribute__((used)) static int FUNC_10(struct peak_canfd_priv *VAR_2,
     const struct can_bittiming *VAR_3)
{
 struct pucan_timing_slow *VAR_4;

 VAR_4 = FUNC_7(FUNC_8(VAR_2), VAR_1);

 VAR_4->sjw_t = FUNC_1(VAR_3->sjw - 1,
    VAR_2->can.ctrlmode & VAR_0);
 VAR_4->tseg1 = FUNC_2(VAR_3->prop_seg + VAR_3->phase_seg1 - 1);
 VAR_4->tseg2 = FUNC_3(VAR_3->phase_seg2 - 1);
 VAR_4->brp = FUNC_4(FUNC_0(VAR_3->brp - 1));

 VAR_4->ewl = 96;

 FUNC_6(VAR_2->ndev,
     "nominal: brp=%u tseg1=%u tseg2=%u sjw=%u\n",
     FUNC_5(VAR_4->brp), VAR_4->tseg1, VAR_4->tseg2, VAR_4->sjw_t);

 return FUNC_9(VAR_2);
}
