
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tx_napi; int napi_dev; int * q_rx; int * q_tx; } ;
struct mt7603_dev {TYPE_1__ mt76; } ;


 int FUNC_0 (int const*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct mt7603_dev*,int *,int,int ,int ) ;
 int FUNC_2 (struct mt7603_dev*,int *,int const,int ) ;
 int VAR_22 ;
 int FUNC_3 (struct mt7603_dev*) ;
 int FUNC_4 (struct mt7603_dev*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct mt7603_dev*) ;
 int FUNC_7 (struct mt7603_dev*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,int ) ;

int FUNC_10(struct mt7603_dev *VAR_23)
{
 static const u8 VAR_24[] = {
  [130] = 0,
  [131] = 1,
  [129] = 2,
  [128] = 3,
 };
 int VAR_25;
 int VAR_26;

 FUNC_5(&VAR_23->mt76);

 FUNC_4(VAR_23, VAR_15,
     VAR_18 |
     VAR_17 |
     VAR_16 |
     VAR_19);

 FUNC_7(VAR_23, VAR_20, ~0);
 FUNC_3(VAR_23);

 for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_24); VAR_26++) {
  VAR_25 = FUNC_2(VAR_23, &VAR_23->mt76.q_tx[VAR_26],
        VAR_24[VAR_26],
        VAR_14);
  if (VAR_25)
   return VAR_25;
 }

 VAR_25 = FUNC_2(VAR_23, &VAR_23->mt76.q_tx[VAR_9],
       VAR_13, VAR_14);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_2(VAR_23, &VAR_23->mt76.q_tx[VAR_8],
       VAR_12, VAR_2);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_2(VAR_23, &VAR_23->mt76.q_tx[VAR_6],
       VAR_10, VAR_2);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_2(VAR_23, &VAR_23->mt76.q_tx[VAR_7],
       VAR_11, VAR_2);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_1(VAR_23, &VAR_23->mt76.q_rx[VAR_4], 1,
       VAR_2, VAR_5);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_1(VAR_23, &VAR_23->mt76.q_rx[VAR_3], 0,
       VAR_0, VAR_5);
 if (VAR_25)
  return VAR_25;

 FUNC_7(VAR_23, VAR_1, 0);
 VAR_25 = FUNC_6(VAR_23);
 if (VAR_25)
  return VAR_25;

 FUNC_9(&VAR_23->mt76.napi_dev, &VAR_23->mt76.tx_napi,
     VAR_22, VAR_21);
 FUNC_8(&VAR_23->mt76.tx_napi);

 return 0;
}
