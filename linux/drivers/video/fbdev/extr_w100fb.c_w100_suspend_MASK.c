
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(u32 VAR_15)
{
 u32 VAR_16;

 FUNC_2(0x7FFF8000, VAR_14 + VAR_7);
 FUNC_2(0x00FF0000, VAR_14 + VAR_8);

 VAR_16 = FUNC_0(VAR_14 + VAR_10);
 VAR_16 &= ~(0x00100000);
 VAR_16 |= 0xFF000000;
 FUNC_2(VAR_16, VAR_14 + VAR_10);

 VAR_16 = FUNC_0(VAR_14 + VAR_9);
 VAR_16 &= ~(0x00040000);
 VAR_16 |= 0x00080000;
 FUNC_2(VAR_16, VAR_14 + VAR_9);

 FUNC_1(1);

 if (VAR_15 == VAR_0) {

  VAR_16 = FUNC_0(VAR_14 + VAR_9);
  VAR_16 |= 0x40000000;
  FUNC_2(VAR_16, VAR_14 + VAR_9);


  VAR_16 = FUNC_0(VAR_14 + VAR_9);
  VAR_16 &= ~(0x00000001);
  FUNC_2(VAR_16, VAR_14 + VAR_9);
 } else {
  FUNC_2(0x00000000, VAR_14 + VAR_13);
  FUNC_2(0x000000BF, VAR_14 + VAR_1);
  FUNC_2(0x00000015, VAR_14 + VAR_12);

  FUNC_1(5);

  VAR_16 = FUNC_0(VAR_14 + VAR_11);
  VAR_16 |= 0x00000004;
  FUNC_2(VAR_16, VAR_14 + VAR_11);

  FUNC_2(0x00000000, VAR_14 + VAR_5);
  FUNC_2(0x00000000, VAR_14 + VAR_6);
  FUNC_2(0x00000000, VAR_14 + VAR_2);
  FUNC_2(0x00000000, VAR_14 + VAR_3);
  FUNC_2(0x00000000, VAR_14 + VAR_4);

  VAR_16 = FUNC_0(VAR_14 + VAR_9);
  VAR_16 |= 0xF0000000;
  VAR_16 &= ~(0x00000001);
  FUNC_2(VAR_16, VAR_14 + VAR_9);

  FUNC_2(0x0000001d, VAR_14 + VAR_12);
 }
}
