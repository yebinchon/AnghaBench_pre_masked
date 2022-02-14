
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt7601u_dev {int const* beacon_offsets; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
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
 int FUNC_1 (struct mt7601u_dev*,int ) ;
 int FUNC_2 (struct mt7601u_dev*,int) ;
 int FUNC_3 (struct mt7601u_dev*,int,int) ;
 int FUNC_4 (struct mt7601u_dev*) ;
 int FUNC_5 (struct mt7601u_dev*) ;
 int FUNC_6 (struct mt7601u_dev*) ;
 int FUNC_7 (struct mt7601u_dev*) ;
 int FUNC_8 (struct mt7601u_dev*) ;
 int FUNC_9 (struct mt7601u_dev*) ;
 int FUNC_10 (struct mt7601u_dev*) ;
 int FUNC_11 (struct mt7601u_dev*) ;
 int FUNC_12 (struct mt7601u_dev*,int) ;
 int FUNC_13 (struct mt7601u_dev*) ;
 int FUNC_14 (struct mt7601u_dev*) ;
 int FUNC_15 (struct mt7601u_dev*) ;
 int FUNC_16 (struct mt7601u_dev*) ;
 int FUNC_17 (struct mt7601u_dev*) ;
 int FUNC_18 (struct mt7601u_dev*) ;
 int FUNC_19 (struct mt7601u_dev*,int ,int ,int) ;
 int FUNC_20 (struct mt7601u_dev*,int ) ;
 int FUNC_21 (struct mt7601u_dev*,int ) ;
 int FUNC_22 (struct mt7601u_dev*) ;
 int FUNC_23 (struct mt7601u_dev*,int ,int) ;
 int FUNC_24 (struct mt7601u_dev*) ;
 int FUNC_25 (struct mt7601u_dev*,int ,int) ;
 int FUNC_26 (struct mt7601u_dev*,int ,int,int ,int) ;

int FUNC_27(struct mt7601u_dev *VAR_18)
{
 static const u16 VAR_19[16] = {

  0xc000, 0xc200, 0xc400, 0xc600,
  0xc800, 0xca00, 0xcc00, 0xce00,
  0xd000, 0xd200, 0xd400, 0xd600,
  0xd800, 0xda00, 0xdc00, 0xde00
 };
 int VAR_20;

 VAR_18->beacon_offsets = VAR_19;

 FUNC_3(VAR_18, 1, 0);

 VAR_20 = FUNC_22(VAR_18);
 if (VAR_20)
  goto err;
 VAR_20 = FUNC_15(VAR_18);
 if (VAR_20)
  goto err;

 if (!FUNC_26(VAR_18, VAR_15,
       VAR_17 |
       VAR_16, 0, 100)) {
  VAR_20 = -VAR_0;
  goto err;
 }


 VAR_20 = FUNC_22(VAR_18);
 if (VAR_20)
  goto err;

 FUNC_18(VAR_18);
 FUNC_9(VAR_18);

 VAR_20 = FUNC_14(VAR_18);
 if (VAR_20)
  goto err;
 VAR_20 = FUNC_5(VAR_18);
 if (VAR_20)
  goto err_mcu;
 VAR_20 = FUNC_24(VAR_18);
 if (VAR_20)
  goto err_rx;

 if (!FUNC_26(VAR_18, VAR_7,
       VAR_9 | VAR_8, 0, 100)) {
  VAR_20 = -VAR_0;
  goto err_rx;
 }

 VAR_20 = FUNC_7(VAR_18);
 if (VAR_20)
  goto err_rx;
 VAR_20 = FUNC_11(VAR_18);
 if (VAR_20)
  goto err_rx;
 VAR_20 = FUNC_8(VAR_18);
 if (VAR_20)
  goto err_rx;
 VAR_20 = FUNC_10(VAR_18);
 if (VAR_20)
  goto err_rx;

 FUNC_25(VAR_18, VAR_1, (VAR_5 |
          VAR_3 |
          VAR_4 |
          VAR_2));

 FUNC_17(VAR_18);

 FUNC_19(VAR_18, VAR_13, VAR_14, 0x1e);

 FUNC_23(VAR_18, VAR_10,
     FUNC_0(VAR_12, 0x3f) |
     FUNC_0(VAR_11, 0x58));

 VAR_20 = FUNC_6(VAR_18);
 if (VAR_20)
  goto err_rx;

 VAR_20 = FUNC_16(VAR_18);
 if (VAR_20)
  goto err_rx;

 FUNC_20(VAR_18, 0);
 FUNC_21(VAR_18, 0);

 FUNC_12(VAR_18, 0);
 FUNC_2(VAR_18, 0);
 FUNC_1(VAR_18, VAR_6);

 return 0;

err_rx:
 FUNC_4(VAR_18);
err_mcu:
 FUNC_13(VAR_18);
err:
 FUNC_3(VAR_18, 0, 0);
 return VAR_20;
}
