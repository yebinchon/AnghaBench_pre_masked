
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct mt7603_dev {int coverage_class; int slottime; TYPE_3__ mt76; } ;
struct TYPE_4__ {scalar_t__ band; } ;


 int FUNC_0 (int ,int) ;
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
 scalar_t__ VAR_16 ;
 int FUNC_1 (struct mt7603_dev*,int ,int) ;
 int FUNC_2 (struct mt7603_dev*,int ,int ,int) ;
 int FUNC_3 (struct mt7603_dev*,int ,int) ;
 int FUNC_4 (struct mt7603_dev*,int ,int) ;
 int FUNC_5 (int) ;

void FUNC_6(struct mt7603_dev *VAR_17)
{
 u32 VAR_18 = FUNC_0(VAR_15, 231) |
    FUNC_0(VAR_14, 48);
 u32 VAR_19 = FUNC_0(VAR_15, 60) |
     FUNC_0(VAR_14, 24);
 int VAR_20 = 3 * VAR_17->coverage_class;
 u32 VAR_21 = FUNC_0(VAR_15, VAR_20) |
    FUNC_0(VAR_14, VAR_20);
 int VAR_22;
 u32 VAR_23;

 if (VAR_17->mt76.chandef.chan->band == VAR_16)
  VAR_22 = 16;
 else
  VAR_22 = 10;

 FUNC_3(VAR_17, VAR_4,
   VAR_6 | VAR_5);
 FUNC_5(1);

 FUNC_4(VAR_17, VAR_12, VAR_18 + VAR_21);
 FUNC_4(VAR_17, VAR_13, VAR_19 + VAR_21);
 FUNC_4(VAR_17, VAR_7,
  FUNC_0(VAR_8, 360) |
  FUNC_0(VAR_9, 2) |
  FUNC_0(VAR_10, VAR_22) |
  FUNC_0(VAR_11, VAR_17->slottime));

 if (VAR_17->slottime < 20)
  VAR_23 = VAR_1;
 else
  VAR_23 = VAR_0;

 FUNC_2(VAR_17, VAR_2, VAR_3, VAR_23);

 FUNC_1(VAR_17, VAR_4,
     VAR_6 | VAR_5);
}
