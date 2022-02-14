
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int * macaddr; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int) ;
 int FUNC_6 (struct mt76x02_dev*,scalar_t__) ;
 int FUNC_7 (struct mt76x02_dev*,int ,int) ;
 int FUNC_8 (struct mt76x02_dev*,scalar_t__,int) ;
 int FUNC_9 (struct mt76x02_dev*) ;
 int FUNC_10 (struct mt76x02_dev*,int const*) ;
 int FUNC_11 (struct mt76x02_dev*,int,int,int *) ;
 int FUNC_12 (struct mt76x02_dev*,int,int,int *) ;
 int FUNC_13 (struct mt76x02_dev*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct mt76x02_dev*) ;
 int FUNC_16 (struct mt76x02_dev*) ;
 int FUNC_17 (struct mt76x02_dev*) ;
 int FUNC_18 (int,int) ;

int FUNC_19(struct mt76x02_dev *VAR_30, bool VAR_31)
{
 const u8 *VAR_32 = VAR_30->mt76.macaddr;
 u32 VAR_33;
 int VAR_34, VAR_35;

 if (!FUNC_14(&VAR_30->mt76))
  return -VAR_0;

 VAR_33 = FUNC_6(VAR_30, VAR_24);

 VAR_33 &= ~(VAR_29 |
   VAR_28 |
   VAR_27 |
   VAR_26 |
   VAR_25);
 VAR_33 |= FUNC_1(VAR_25, 3);

 FUNC_8(VAR_30, VAR_24, VAR_33);

 FUNC_17(VAR_30);
 FUNC_9(VAR_30);
 FUNC_16(VAR_30);

 FUNC_5(VAR_30, VAR_14,
     VAR_16 |
     VAR_15);

 if (FUNC_4(VAR_30))
  FUNC_5(VAR_30, VAR_9, VAR_10);

 FUNC_7(VAR_30, VAR_11, 0x0000f000);
 FUNC_5(VAR_30, VAR_21, FUNC_0(31));

 FUNC_8(VAR_30, VAR_19, 0x06000000);
 FUNC_8(VAR_30, VAR_20, 0x08800000);
 FUNC_18(5000, 10000);
 FUNC_8(VAR_30, VAR_19, 0x00000000);

 FUNC_8(VAR_30, VAR_18, 0x1401);
 FUNC_5(VAR_30, VAR_12, VAR_13);

 FUNC_10(VAR_30, VAR_32);
 FUNC_15(VAR_30);
 if (!VAR_31)
  return 0;

 for (VAR_34 = 0; VAR_34 < 256 / 32; VAR_34++)
  FUNC_8(VAR_30, VAR_23 + VAR_34 * 4, 0);

 for (VAR_34 = 0; VAR_34 < 256; VAR_34++) {
  FUNC_12(VAR_30, VAR_34, 0, ((void*)0));
  FUNC_8(VAR_30, FUNC_3(VAR_34), 0);
  FUNC_8(VAR_30, FUNC_3(VAR_34) + 4, 0);
 }

 for (VAR_34 = 0; VAR_34 < VAR_17; VAR_34++)
  FUNC_12(VAR_30, FUNC_2(VAR_34), VAR_34, ((void*)0));

 for (VAR_34 = 0; VAR_34 < 16; VAR_34++)
  for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
   FUNC_11(VAR_30, VAR_34, VAR_35, ((void*)0));

 for (VAR_34 = 0; VAR_34 < 16; VAR_34++)
  FUNC_6(VAR_30, VAR_22);

 FUNC_8(VAR_30, VAR_2,
  VAR_7 |
  VAR_8 |
  VAR_6 |
  VAR_5 |
  VAR_4 |
  VAR_1 |
  FUNC_1(VAR_3, 1));

 FUNC_13(VAR_30);

 return 0;
}
