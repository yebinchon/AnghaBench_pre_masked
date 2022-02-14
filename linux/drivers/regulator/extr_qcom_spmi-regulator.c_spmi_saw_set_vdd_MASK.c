
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


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
 int FUNC_0 () ;
 unsigned long VAR_10 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 bool VAR_17 = 0;
 unsigned long VAR_18;
 u8 VAR_19 = *(u8 *)VAR_12;

 FUNC_1(VAR_11, VAR_0, &VAR_15);
 FUNC_1(VAR_11, VAR_7, &VAR_13);
 FUNC_1(VAR_11, VAR_6, &VAR_14);


 VAR_13 &= ~VAR_8;
 VAR_13 |= (u32)VAR_19;

 VAR_14 &= ~VAR_8;
 VAR_14 |= (u32)VAR_19;


 VAR_17 = VAR_2 & VAR_15;
 if (VAR_17) {
  VAR_15 &= ~VAR_3;
  FUNC_2(VAR_11, VAR_0, VAR_15);
 }

 FUNC_2(VAR_11, VAR_5, 1);
 FUNC_2(VAR_11, VAR_7, VAR_13);
 FUNC_2(VAR_11, VAR_6, VAR_14);

 VAR_18 = VAR_10 + FUNC_4(100);
 do {
  FUNC_1(VAR_11, VAR_4, &VAR_16);
  VAR_16 &= VAR_9;
  if (VAR_16 == (u32)VAR_19)
   break;

  FUNC_0();

 } while (FUNC_3(VAR_10, VAR_18));


 if (VAR_17) {
  VAR_16 &= 0x3f;
  VAR_15 &= ~VAR_1;
  VAR_15 |= ((VAR_16 - 4) << 10);
  VAR_15 |= (VAR_16 << 17);
  VAR_15 |= VAR_3;
  FUNC_2(VAR_11, VAR_0, VAR_15);
 }
}
