
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_napi; int napi_dev; int * q_rx; int * q_tx; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;


 int FUNC_0 (int) ;
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
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_1 (struct mt7615_dev*,int *,int ,int ) ;
 int FUNC_2 (struct mt7615_dev*,int ) ;
 int FUNC_3 (struct mt7615_dev*,int) ;
 int VAR_36 ;
 int FUNC_4 (struct mt7615_dev*,int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct mt7615_dev*) ;
 int FUNC_7 (struct mt7615_dev*,int,int,int ,int) ;
 int FUNC_8 (struct mt7615_dev*,int *,int,int ,int ,int ) ;
 int FUNC_9 (struct mt7615_dev*,int,int ,int) ;
 int FUNC_10 (struct mt7615_dev*,int,int) ;
 int FUNC_11 (struct mt7615_dev*,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int ,int ) ;

int FUNC_14(struct mt7615_dev *VAR_37)
{
 int VAR_38;

 FUNC_5(&VAR_37->mt76);

 FUNC_11(VAR_37, VAR_18,
  VAR_31 |
  VAR_21 |
  VAR_22 |
  VAR_24);

 FUNC_9(VAR_37, VAR_18,
         VAR_27, 0x1);

 FUNC_9(VAR_37, VAR_18,
         VAR_28, 0x1);

 FUNC_9(VAR_37, VAR_18,
         VAR_20, 0x3);

 FUNC_9(VAR_37, VAR_18,
         VAR_23, 0x3);

 FUNC_11(VAR_37, VAR_19, 0x1);
 FUNC_11(VAR_37, VAR_34, 0xf0000);
 FUNC_11(VAR_37, VAR_33, 0xf7f0000);
 FUNC_11(VAR_37, VAR_16, 0x4000026);
 FUNC_11(VAR_37, VAR_17, 0x18811881);
 FUNC_10(VAR_37, 0x7158, FUNC_0(16));
 FUNC_4(VAR_37, 0x7000, FUNC_0(23));
 FUNC_11(VAR_37, VAR_32, ~0);

 VAR_38 = FUNC_2(VAR_37, VAR_6);
 if (VAR_38)
  return VAR_38;

 VAR_38 = FUNC_1(VAR_37, &VAR_37->mt76.q_tx[VAR_15],
        VAR_3,
        VAR_5);
 if (VAR_38)
  return VAR_38;

 VAR_38 = FUNC_1(VAR_37, &VAR_37->mt76.q_tx[VAR_14],
        VAR_2,
        VAR_4);
 if (VAR_38)
  return VAR_38;


 VAR_38 = FUNC_8(VAR_37, &VAR_37->mt76.q_rx[VAR_11], 1,
          VAR_0, VAR_12,
          VAR_13);
 if (VAR_38)
  return VAR_38;

 VAR_38 = FUNC_8(VAR_37, &VAR_37->mt76.q_rx[VAR_10], 0,
          VAR_1, VAR_12,
          VAR_13);
 if (VAR_38)
  return VAR_38;

 FUNC_11(VAR_37, VAR_7, 0);

 VAR_38 = FUNC_6(VAR_37);
 if (VAR_38 < 0)
  return VAR_38;

 FUNC_13(&VAR_37->mt76.napi_dev, &VAR_37->mt76.tx_napi,
     VAR_36, VAR_35);
 FUNC_12(&VAR_37->mt76.tx_napi);

 FUNC_7(VAR_37, VAR_18,
    VAR_29 |
    VAR_25, 0, 1000);


 FUNC_10(VAR_37, VAR_18,
   VAR_30 |
   VAR_26);


 FUNC_3(VAR_37, VAR_8 | VAR_9);

 return 0;
}
