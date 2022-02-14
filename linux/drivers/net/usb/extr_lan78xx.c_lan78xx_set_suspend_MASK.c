
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct lan78xx_net {int dummy; } ;


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
 int FUNC_0 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct lan78xx_net*,int ,int*) ;
 int FUNC_7 (int const*,int) ;
 int FUNC_8 (struct lan78xx_net*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct lan78xx_net *VAR_32, u32 VAR_33)
{
 u32 VAR_34;
 int VAR_35;
 int VAR_36;
 u16 VAR_37;
 u32 VAR_38;
 u32 VAR_39;
 const u8 VAR_40[3] = { 0x01, 0x00, 0x5E };
 const u8 VAR_41[3] = { 0x33, 0x33 };
 const u8 VAR_42[2] = { 0x08, 0x06 };

 VAR_35 = FUNC_6(VAR_32, VAR_2, &VAR_34);
 VAR_34 &= ~VAR_3;
 VAR_35 = FUNC_8(VAR_32, VAR_2, VAR_34);
 VAR_35 = FUNC_6(VAR_32, VAR_0, &VAR_34);
 VAR_34 &= ~VAR_1;
 VAR_35 = FUNC_8(VAR_32, VAR_0, VAR_34);

 VAR_35 = FUNC_8(VAR_32, VAR_21, 0);
 VAR_35 = FUNC_8(VAR_32, VAR_22, 0);
 VAR_35 = FUNC_8(VAR_32, VAR_20, 0xFFF1FF1FUL);

 VAR_38 = 0;

 VAR_39 = 0;
 VAR_35 = FUNC_6(VAR_32, VAR_5, &VAR_39);
 VAR_39 &= ~VAR_7;
 VAR_39 |= VAR_8;

 for (VAR_36 = 0; VAR_36 < VAR_4; VAR_36++)
  VAR_35 = FUNC_8(VAR_32, FUNC_0(VAR_36), 0);

 VAR_36 = 0;
 if (VAR_33 & VAR_18) {
  VAR_39 |= VAR_6;

  VAR_39 |= VAR_12;
  VAR_39 &= ~VAR_11;
  VAR_39 |= VAR_9;
 }
 if (VAR_33 & VAR_16) {
  VAR_38 |= VAR_24;

  VAR_39 |= VAR_12;
  VAR_39 &= ~VAR_11;
  VAR_39 |= VAR_10;
 }
 if (VAR_33 & VAR_15) {
  VAR_38 |= VAR_23;

  VAR_39 |= VAR_12;
  VAR_39 &= ~VAR_11;
  VAR_39 |= VAR_9;
 }
 if (VAR_33 & VAR_17) {
  VAR_38 |= VAR_26;


  VAR_37 = FUNC_7(VAR_40, 3);
  VAR_35 = FUNC_8(VAR_32, FUNC_0(VAR_36),
     VAR_28 |
     VAR_31 |
     (0 << VAR_29) |
     (VAR_37 & VAR_27));

  VAR_35 = FUNC_8(VAR_32, FUNC_1(VAR_36), 7);
  VAR_35 = FUNC_8(VAR_32, FUNC_2(VAR_36), 0);
  VAR_35 = FUNC_8(VAR_32, FUNC_3(VAR_36), 0);
  VAR_35 = FUNC_8(VAR_32, FUNC_4(VAR_36), 0);
  VAR_36++;


  VAR_37 = FUNC_7(VAR_41, 2);
  VAR_35 = FUNC_8(VAR_32, FUNC_0(VAR_36),
     VAR_28 |
     VAR_31 |
     (0 << VAR_29) |
     (VAR_37 & VAR_27));

  VAR_35 = FUNC_8(VAR_32, FUNC_1(VAR_36), 3);
  VAR_35 = FUNC_8(VAR_32, FUNC_2(VAR_36), 0);
  VAR_35 = FUNC_8(VAR_32, FUNC_3(VAR_36), 0);
  VAR_35 = FUNC_8(VAR_32, FUNC_4(VAR_36), 0);
  VAR_36++;

  VAR_39 |= VAR_12;
  VAR_39 &= ~VAR_11;
  VAR_39 |= VAR_9;
 }
 if (VAR_33 & VAR_19) {
  VAR_38 |= VAR_25;

  VAR_39 |= VAR_12;
  VAR_39 &= ~VAR_11;
  VAR_39 |= VAR_9;
 }
 if (VAR_33 & VAR_14) {
  VAR_38 |= VAR_26;




  VAR_37 = FUNC_7(VAR_42, 2);
  VAR_35 = FUNC_8(VAR_32, FUNC_0(VAR_36),
     VAR_28 |
     VAR_30 |
     (0 << VAR_29) |
     (VAR_37 & VAR_27));

  VAR_35 = FUNC_8(VAR_32, FUNC_1(VAR_36), 0x3000);
  VAR_35 = FUNC_8(VAR_32, FUNC_2(VAR_36), 0);
  VAR_35 = FUNC_8(VAR_32, FUNC_3(VAR_36), 0);
  VAR_35 = FUNC_8(VAR_32, FUNC_4(VAR_36), 0);
  VAR_36++;

  VAR_39 |= VAR_12;
  VAR_39 &= ~VAR_11;
  VAR_39 |= VAR_9;
 }

 VAR_35 = FUNC_8(VAR_32, VAR_21, VAR_38);


 if (FUNC_5((unsigned long)VAR_33) > 1) {
  VAR_39 |= VAR_12;
  VAR_39 &= ~VAR_11;
  VAR_39 |= VAR_9;
 }
 VAR_35 = FUNC_8(VAR_32, VAR_5, VAR_39);


 VAR_35 = FUNC_6(VAR_32, VAR_5, &VAR_34);
 VAR_34 |= VAR_13;
 VAR_35 = FUNC_8(VAR_32, VAR_5, VAR_34);

 VAR_35 = FUNC_6(VAR_32, VAR_0, &VAR_34);
 VAR_34 |= VAR_1;
 VAR_35 = FUNC_8(VAR_32, VAR_0, VAR_34);

 return 0;
}
