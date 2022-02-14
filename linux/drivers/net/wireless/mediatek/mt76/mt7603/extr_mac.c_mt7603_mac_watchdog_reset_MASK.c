
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int irqmask; } ;
struct TYPE_4__ {int beacon_int; int hw; int * napi; int pre_tbtt_tasklet; int tx_napi; int tx_tasklet; int mutex; int state; int q_rx; int q_tx; TYPE_1__ mmio; } ;
struct mt7603_dev {scalar_t__ cur_reset_cause; TYPE_2__ mt76; scalar_t__* reset_cause; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mt7603_dev*,int,int) ;
 int FUNC_5 (struct mt7603_dev*) ;
 int FUNC_6 (struct mt7603_dev*,int ) ;
 int FUNC_7 (struct mt7603_dev*,int ) ;
 int FUNC_8 (struct mt7603_dev*) ;
 int FUNC_9 (struct mt7603_dev*) ;
 int FUNC_10 (struct mt7603_dev*) ;
 int FUNC_11 (struct mt7603_dev*) ;
 int FUNC_12 (struct mt7603_dev*,int ,int) ;
 int FUNC_13 (struct mt7603_dev*,int) ;
 int FUNC_14 (struct mt7603_dev*,int,int) ;
 int FUNC_15 (struct mt7603_dev*,int ,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int,int) ;

__attribute__((used)) static void FUNC_26(struct mt7603_dev *VAR_10)
{
 int VAR_11 = VAR_10->mt76.beacon_int;
 u32 VAR_12 = VAR_10->mt76.mmio.irqmask;
 int VAR_13;

 FUNC_2(VAR_10->mt76.hw);
 FUNC_22(VAR_0, &VAR_10->mt76.state);


 FUNC_16(&VAR_10->mt76);

 FUNC_23(&VAR_10->mt76.tx_tasklet);
 FUNC_23(&VAR_10->mt76.pre_tbtt_tasklet);
 FUNC_19(&VAR_10->mt76.napi[0]);
 FUNC_19(&VAR_10->mt76.napi[1]);
 FUNC_19(&VAR_10->mt76.tx_napi);

 FUNC_17(&VAR_10->mt76.mutex);

 FUNC_4(VAR_10, -1, 0);

 if (VAR_10->reset_cause[VAR_7] ||
     VAR_10->cur_reset_cause == VAR_8 ||
     VAR_10->cur_reset_cause == VAR_6 ||
     VAR_10->cur_reset_cause == VAR_9)
  FUNC_11(VAR_10);

 if (VAR_10->reset_cause[VAR_7])
  goto skip_dma_reset;

 FUNC_9(VAR_10);

 FUNC_12(VAR_10, VAR_1,
     VAR_3 | VAR_4 |
     VAR_5);
 FUNC_25(1000, 2000);

 FUNC_6(VAR_10, VAR_12);

 FUNC_15(VAR_10, VAR_1, VAR_2);

 FUNC_10(VAR_10);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_10->mt76.q_tx); VAR_13++)
  FUNC_14(VAR_10, VAR_13, 1);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_10->mt76.q_rx); VAR_13++)
  FUNC_13(VAR_10, VAR_13);

 FUNC_5(VAR_10);

 FUNC_8(VAR_10);

 FUNC_7(VAR_10, VAR_12);

skip_dma_reset:
 FUNC_1(VAR_0, &VAR_10->mt76.state);
 FUNC_18(&VAR_10->mt76.mutex);

 FUNC_24(&VAR_10->mt76.tx_tasklet);
 FUNC_20(&VAR_10->mt76.tx_napi);
 FUNC_21(&VAR_10->mt76.tx_napi);

 FUNC_24(&VAR_10->mt76.pre_tbtt_tasklet);
 FUNC_4(VAR_10, -1, VAR_11);

 FUNC_20(&VAR_10->mt76.napi[0]);
 FUNC_21(&VAR_10->mt76.napi[0]);

 FUNC_20(&VAR_10->mt76.napi[1]);
 FUNC_21(&VAR_10->mt76.napi[1]);

 FUNC_3(VAR_10->mt76.hw);
 FUNC_16(&VAR_10->mt76);
}
