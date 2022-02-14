
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
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
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0x0004;

 if ((VAR_7 < VAR_9) && (VAR_8 == VAR_10)) {
  VAR_17 |= 0x0200;
  VAR_13 = VAR_7 + VAR_11 - 1;
  VAR_14 = VAR_9 + VAR_11 - 1;
 } else {
  VAR_13 = VAR_7;
  VAR_14 = VAR_9;
 }

 if (VAR_8 < VAR_10) {
  VAR_17 |= 0x0100;
  VAR_15 = VAR_8 + VAR_12 - 1;
  VAR_16 = VAR_10 + VAR_12 - 1;
 } else {
  VAR_15 = VAR_8;
  VAR_16 = VAR_10;
 }

 FUNC_2(VAR_6, VAR_0, VAR_17);
 FUNC_1(VAR_6, VAR_5, 0x2127);
 FUNC_2(VAR_6, VAR_4, FUNC_0(VAR_15, VAR_13));
 FUNC_2(VAR_6, VAR_3, FUNC_0(VAR_16, VAR_14));
 FUNC_2(VAR_6, VAR_2, FUNC_0(VAR_12, VAR_11));
 FUNC_1(VAR_6, 0x01, VAR_1);
}
