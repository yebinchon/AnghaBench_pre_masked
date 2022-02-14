
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lpm; } ;
struct ci_hdrc {TYPE_2__* platdata; TYPE_1__ hw_bank; int phy; } ;
struct TYPE_4__ {int flags; int itc_setting; int tx_burst_size; int rx_burst_size; int ahb_burst_config; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ci_hdrc*,int ,int ) ;
 int FUNC_2 (struct ci_hdrc*,int ,int ) ;
 int FUNC_3 (struct ci_hdrc*,int ,int,int) ;
 int FUNC_4 (struct ci_hdrc*,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(struct ci_hdrc *VAR_27)
{
 bool VAR_28, VAR_29;

 VAR_28 = FUNC_1(VAR_27, VAR_15, VAR_24) == VAR_25;
 VAR_29 = FUNC_1(VAR_27, VAR_15, VAR_24) == VAR_26;

 if (VAR_28) {
  FUNC_5(VAR_27->phy, VAR_16);

  if (VAR_27->platdata->flags & VAR_1)
   FUNC_3(VAR_27, VAR_15, VAR_23,
     VAR_23);
 }

 if (VAR_29) {
  FUNC_5(VAR_27->phy, VAR_17);

  if (VAR_27->platdata->flags & VAR_2)
   FUNC_3(VAR_27, VAR_15, VAR_23,
     VAR_23);
 }

 if (VAR_27->platdata->flags & VAR_3) {
  if (VAR_27->hw_bank.lpm)
   FUNC_3(VAR_27, VAR_11, VAR_8, VAR_8);
  else
   FUNC_3(VAR_27, VAR_12, VAR_18, VAR_18);
 }

 if (VAR_27->platdata->flags & VAR_7)
  FUNC_3(VAR_27, VAR_13, VAR_21, VAR_20);

 FUNC_3(VAR_27, VAR_14, 0xff0000, VAR_27->platdata->itc_setting << 16);

 if (VAR_27->platdata->flags & VAR_4)
  FUNC_4(VAR_27, VAR_9, VAR_0,
   VAR_27->platdata->ahb_burst_config);


 if (!FUNC_2(VAR_27, VAR_9, VAR_0)) {
  if (VAR_27->platdata->flags & VAR_6)
   FUNC_3(VAR_27, VAR_10, VAR_22,
   VAR_27->platdata->tx_burst_size << FUNC_0(VAR_22));

  if (VAR_27->platdata->flags & VAR_5)
   FUNC_3(VAR_27, VAR_10, VAR_19,
    VAR_27->platdata->rx_burst_size);
 }
}
