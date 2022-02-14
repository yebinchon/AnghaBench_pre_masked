
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pucan_timing_fast {int sjw; int tseg2; int tseg1; int brp; } ;
struct peak_canfd_priv {int ndev; } ;
struct can_bittiming {scalar_t__ brp; scalar_t__ phase_seg2; scalar_t__ phase_seg1; scalar_t__ prop_seg; scalar_t__ sjw; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,int ,int ,int ) ;
 struct pucan_timing_fast* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct peak_canfd_priv*) ;
 int FUNC_9 (struct peak_canfd_priv*) ;

__attribute__((used)) static int FUNC_10(struct peak_canfd_priv *VAR_1,
     const struct can_bittiming *VAR_2)
{
 struct pucan_timing_fast *VAR_3;

 VAR_3 = FUNC_7(FUNC_8(VAR_1), VAR_0);

 VAR_3->sjw = FUNC_1(VAR_2->sjw - 1);
 VAR_3->tseg1 = FUNC_2(VAR_2->prop_seg + VAR_2->phase_seg1 - 1);
 VAR_3->tseg2 = FUNC_3(VAR_2->phase_seg2 - 1);
 VAR_3->brp = FUNC_4(FUNC_0(VAR_2->brp - 1));

 FUNC_6(VAR_1->ndev,
     "data: brp=%u tseg1=%u tseg2=%u sjw=%u\n",
     FUNC_5(VAR_3->brp), VAR_3->tseg1, VAR_3->tseg2, VAR_3->sjw);

 return FUNC_9(VAR_1);
}
