
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int txmixer_gain_24g; } ;


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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int) ;
 int FUNC_4 (struct rt2x00_dev*,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_8 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_9 (int*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct rt2x00_dev *VAR_28)
{
 struct rt2800_drv_data *VAR_29 = VAR_28->drv_data;
 u8 VAR_30, VAR_31, VAR_32;
 u16 VAR_33;

 VAR_31 = FUNC_3(VAR_28, 17);

 FUNC_9(&VAR_31, VAR_12, 0);
 if (FUNC_7(VAR_28, VAR_24) ||
     FUNC_8(VAR_28, VAR_25, VAR_6) ||
     FUNC_8(VAR_28, VAR_26, VAR_7) ||
     FUNC_8(VAR_28, VAR_27, VAR_8)) {
  if (!FUNC_6(VAR_28))
   FUNC_9(&VAR_31, VAR_10, 1);
 }

 VAR_30 = FUNC_7(VAR_28, VAR_24) ? 1 : 2;
 if (VAR_29->txmixer_gain_24g >= VAR_30) {
  FUNC_9(&VAR_31, VAR_11,
      VAR_29->txmixer_gain_24g);
 }

 FUNC_4(VAR_28, 17, VAR_31);

 if (FUNC_7(VAR_28, VAR_26)) {

  VAR_32 = FUNC_0(VAR_28, 138);
  VAR_33 = FUNC_2(VAR_28, VAR_2);
  if (FUNC_5(VAR_33, VAR_3) == 1)
   FUNC_9(&VAR_32, VAR_0, 0);
  if (FUNC_5(VAR_33, VAR_4) == 1)
   FUNC_9(&VAR_32, VAR_1, 1);
  FUNC_1(VAR_28, 138, VAR_32);
 }

 if (FUNC_7(VAR_28, VAR_24)) {
  VAR_31 = FUNC_3(VAR_28, 27);
  if (FUNC_8(VAR_28, VAR_24, VAR_5))
   FUNC_9(&VAR_31, VAR_20, 3);
  else
   FUNC_9(&VAR_31, VAR_20, 0);
  FUNC_9(&VAR_31, VAR_21, 0);
  FUNC_9(&VAR_31, VAR_22, 0);
  FUNC_9(&VAR_31, VAR_23, 0);
  FUNC_4(VAR_28, 27, VAR_31);
 } else if (FUNC_7(VAR_28, VAR_25) ||
     FUNC_7(VAR_28, VAR_26) ||
     FUNC_7(VAR_28, VAR_27)) {
  VAR_31 = FUNC_3(VAR_28, 1);
  FUNC_9(&VAR_31, VAR_13, 1);
  FUNC_9(&VAR_31, VAR_14, 0);
  FUNC_9(&VAR_31, VAR_16, 0);
  FUNC_9(&VAR_31, VAR_15, 1);
  FUNC_9(&VAR_31, VAR_17, 1);
  FUNC_4(VAR_28, 1, VAR_31);

  VAR_31 = FUNC_3(VAR_28, 15);
  FUNC_9(&VAR_31, VAR_9, 0);
  FUNC_4(VAR_28, 15, VAR_31);

  VAR_31 = FUNC_3(VAR_28, 20);
  FUNC_9(&VAR_31, VAR_18, 0);
  FUNC_4(VAR_28, 20, VAR_31);

  VAR_31 = FUNC_3(VAR_28, 21);
  FUNC_9(&VAR_31, VAR_19, 0);
  FUNC_4(VAR_28, 21, VAR_31);
 }
}
