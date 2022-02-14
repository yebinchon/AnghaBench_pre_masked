
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct tridentfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct tridentfb_par*,int,int) ;
 int FUNC_2 (struct tridentfb_par*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct tridentfb_par *VAR_6,
      u32 VAR_7, u32 VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11, u32 VAR_12)
{
 int VAR_13 = 0;
 u16 VAR_14, VAR_15, VAR_16, VAR_17;

 if ((VAR_7 < VAR_9) && (VAR_8 == VAR_10)) {
  VAR_13 |= 0x0200;
  VAR_14 = VAR_7 + VAR_11 - 1;
  VAR_15 = VAR_9 + VAR_11 - 1;
 } else {
  VAR_14 = VAR_7;
  VAR_15 = VAR_9;
 }

 if (VAR_8 < VAR_10) {
  VAR_13 |= 0x0100;
  VAR_16 = VAR_8 + VAR_12 - 1;
  VAR_17 = VAR_10 + VAR_12 - 1;
 } else {
  VAR_16 = VAR_8;
  VAR_17 = VAR_10;
 }

 FUNC_2(VAR_6, VAR_0, 0x4 | VAR_13);
 FUNC_1(VAR_6, VAR_5, 0x2127);
 FUNC_2(VAR_6, VAR_4, FUNC_0(VAR_14, VAR_16));
 FUNC_2(VAR_6, VAR_3, FUNC_0(VAR_15, VAR_17));
 FUNC_2(VAR_6, VAR_2, FUNC_0(VAR_11 - 1, VAR_12 - 1));
 FUNC_1(VAR_6, 1, VAR_1);
}
