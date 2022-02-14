
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int irqmask; } ;
struct TYPE_6__ {int hw; int * napi; int pre_tbtt_tasklet; int tx_napi; int tx_tasklet; int state; int mutex; scalar_t__ beacon_mask; int * q_rx; int * q_tx; TYPE_2__* mcu_ops; TYPE_1__ mmio; } ;
struct mt76x02_dev {TYPE_3__ mt76; scalar_t__ ed_monitor; } ;
struct TYPE_5__ {int mcu_restart; } ;


 int FUNC_0 (int *) ;
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
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mt76x02_dev*,int,int) ;
 int FUNC_6 (struct mt76x02_dev*) ;
 int FUNC_7 (struct mt76x02_dev*,int) ;
 int FUNC_8 (struct mt76x02_dev*,int,int) ;
 int FUNC_9 (struct mt76x02_dev*,int,int) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (struct mt76x02_dev*,int ,int) ;
 int FUNC_12 (struct mt76x02_dev*,int ) ;
 int FUNC_13 (struct mt76x02_dev*,int ) ;
 int FUNC_14 (struct mt76x02_dev*) ;
 int FUNC_15 (struct mt76x02_dev*,int ,int) ;
 int FUNC_16 (struct mt76x02_dev*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int,int) ;

__attribute__((used)) static void FUNC_26(struct mt76x02_dev *VAR_12)
{
 u32 VAR_13 = VAR_12->mt76.mmio.irqmask;
 bool VAR_14 = VAR_12->mt76.mcu_ops->mcu_restart;
 int VAR_15;

 FUNC_3(VAR_12->mt76.hw);
 FUNC_22(VAR_0, &VAR_12->mt76.state);

 FUNC_23(&VAR_12->mt76.pre_tbtt_tasklet);
 FUNC_23(&VAR_12->mt76.tx_tasklet);
 FUNC_19(&VAR_12->mt76.tx_napi);

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_12->mt76.napi); VAR_15++)
  FUNC_19(&VAR_12->mt76.napi[VAR_15]);

 FUNC_17(&VAR_12->mt76.mutex);

 if (VAR_14)
  FUNC_16(VAR_12);

 if (VAR_12->mt76.beacon_mask)
  FUNC_5(VAR_12, VAR_1,
      VAR_2 |
      VAR_3);

 FUNC_12(VAR_12, VAR_13);


 FUNC_5(VAR_12, VAR_6, VAR_7);
 FUNC_11(VAR_12, VAR_5, 0);
 FUNC_5(VAR_12, VAR_8,
     VAR_10 | VAR_9);
 FUNC_25(5000, 10000);
 FUNC_11(VAR_12, VAR_4, 0xffffffff);


 FUNC_9(VAR_12, 0x734, 0x3);

 if (VAR_14)
  FUNC_6(VAR_12);

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_12->mt76.q_tx); VAR_15++)
  FUNC_8(VAR_12, VAR_15, 1);

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_12->mt76.q_rx); VAR_15++)
  FUNC_7(VAR_12, VAR_15);

 FUNC_14(VAR_12);

 if (VAR_12->ed_monitor)
  FUNC_9(VAR_12, VAR_6, VAR_7);

 if (VAR_12->mt76.beacon_mask && !VAR_14)
  FUNC_9(VAR_12, VAR_1,
    VAR_2 |
    VAR_3);

 FUNC_13(VAR_12, VAR_13);

 FUNC_18(&VAR_12->mt76.mutex);

 FUNC_1(VAR_0, &VAR_12->mt76.state);

 FUNC_24(&VAR_12->mt76.tx_tasklet);
 FUNC_20(&VAR_12->mt76.tx_napi);
 FUNC_21(&VAR_12->mt76.tx_napi);

 FUNC_24(&VAR_12->mt76.pre_tbtt_tasklet);

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_12->mt76.napi); VAR_15++) {
  FUNC_20(&VAR_12->mt76.napi[VAR_15]);
  FUNC_21(&VAR_12->mt76.napi[VAR_15]);
 }

 if (VAR_14) {
  FUNC_15(VAR_12, VAR_11, 1);
  FUNC_2(VAR_12->mt76.hw);
 } else {
  FUNC_4(VAR_12->mt76.hw);
  FUNC_10(&VAR_12->mt76);
 }
}
