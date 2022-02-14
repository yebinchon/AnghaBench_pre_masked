
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath9k_hw_capabilities {int hw_caps; } ;
struct ath_hw {TYPE_3__* curchan; TYPE_2__* caldata; scalar_t__ chip_fullsleep; struct ath9k_hw_capabilities caps; } ;
struct ath_common {TYPE_1__* bus_ops; } ;
struct ath9k_channel {scalar_t__ channel; int channelFlags; } ;
struct TYPE_6__ {scalar_t__ channel; int channelFlags; } ;
struct TYPE_5__ {int cal_flags; } ;
struct TYPE_4__ {scalar_t__ ath_bus_type; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_6 (struct ath_hw*) ;
 struct ath_common* FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*,int) ;
 int FUNC_11 (struct ath_common*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct ath_hw *VAR_10, struct ath9k_channel *VAR_11)
{
 struct ath_common *VAR_12 = FUNC_7(VAR_10);
 struct ath9k_hw_capabilities *VAR_13 = &VAR_10->caps;
 int VAR_14;

 if (FUNC_1(VAR_10) && VAR_12->bus_ops->ath_bus_type == VAR_1)
  goto fail;

 if (VAR_10->chip_fullsleep)
  goto fail;

 if (!VAR_10->curchan)
  goto fail;

 if (VAR_11->channel == VAR_10->curchan->channel)
  goto fail;

 if ((VAR_10->curchan->channelFlags | VAR_11->channelFlags) &
     (VAR_2 | VAR_4))
  goto fail;




 if (!(VAR_13->hw_caps & VAR_0) &&
     ((VAR_11->channelFlags ^ VAR_10->curchan->channelFlags) & ~VAR_3))
  goto fail;

 if (!FUNC_6(VAR_10))
  goto fail;





 if (FUNC_2(VAR_10) && (VAR_10->caldata &&
     (!FUNC_12(VAR_9, &VAR_10->caldata->cal_flags) ||
      !FUNC_12(VAR_8, &VAR_10->caldata->cal_flags) ||
      !FUNC_12(VAR_7, &VAR_10->caldata->cal_flags))))
  goto fail;

 FUNC_11(VAR_12, VAR_6, "FastChannelChange for %d -> %d\n",
  VAR_10->curchan->channel, VAR_11->channel);

 VAR_14 = FUNC_5(VAR_10, VAR_11);
 if (!VAR_14)
  goto fail;

 if (FUNC_9(VAR_10))
  FUNC_4(VAR_10, 0);

 FUNC_8(VAR_10, VAR_10->curchan);
 FUNC_10(VAR_10, 1);

 if (FUNC_0(VAR_10))
  FUNC_3(VAR_10, VAR_11);

 return 0;
fail:
 return -VAR_5;
}
