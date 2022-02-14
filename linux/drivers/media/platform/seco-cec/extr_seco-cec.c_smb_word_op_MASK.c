
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(short VAR_19, u16 VAR_20, u8 VAR_21, u16 VAR_22,
         u8 VAR_23, u16 *VAR_24)
{
 unsigned int VAR_25;
 short VAR_26;
 int VAR_27 = 0;

 switch (VAR_19) {
 case 129:
  VAR_26 = VAR_3;
  break;
 case 128:
  VAR_26 = VAR_4;
  break;
 default:
  return -VAR_7;
 }


 for (VAR_25 = 0; VAR_25 <= VAR_14; ++VAR_25) {
  if (!(FUNC_0(VAR_13) & VAR_2))
   break;
  FUNC_2(VAR_17);
 }

 if (VAR_25 > VAR_14)

  FUNC_1(0xff, VAR_13);

 FUNC_1(0x00, VAR_10);
 FUNC_1((u8)(VAR_20 & 0xfe) | VAR_23, VAR_18);
 FUNC_1(VAR_21, VAR_9);
 FUNC_0(VAR_10);

 if (VAR_23 == VAR_16) {
  FUNC_1((u8)VAR_22, VAR_11);
  FUNC_1((u8)(VAR_22 >> 8), VAR_12);
 }

 FUNC_1(VAR_5 + VAR_26, VAR_10);

 for (VAR_25 = 0; VAR_25 <= VAR_14; VAR_25++) {
  if (!(FUNC_0(VAR_13) & VAR_0))
   break;
  FUNC_2(VAR_17);
 }

 if (VAR_25 > VAR_14) {
  VAR_27 = -VAR_6;
  goto err;
 }

 if (FUNC_0(VAR_13) & VAR_1) {
  VAR_27 = -VAR_8;
  goto err;
 }

 if (VAR_23 == VAR_15)
  *VAR_24 = ((FUNC_0(VAR_11) & 0xff) + ((FUNC_0(VAR_12) & 0xff) << 8));

err:
 FUNC_1(0xff, VAR_13);
 return VAR_27;
}
