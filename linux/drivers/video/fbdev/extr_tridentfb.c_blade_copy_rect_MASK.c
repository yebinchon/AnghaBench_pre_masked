
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
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct tridentfb_par*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tridentfb_par *VAR_7,
       u32 VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11, u32 VAR_12, u32 VAR_13)
{
 int VAR_14 = 2;
 u32 VAR_15 = FUNC_0(VAR_8, VAR_9);
 u32 VAR_16 = FUNC_0(VAR_8 + VAR_12 - 1, VAR_9 + VAR_13 - 1);
 u32 VAR_17 = FUNC_0(VAR_10, VAR_11);
 u32 VAR_18 = FUNC_0(VAR_10 + VAR_12 - 1, VAR_11 + VAR_13 - 1);

 if ((VAR_9 > VAR_11) || ((VAR_9 == VAR_11) && (VAR_8 > VAR_10)))
  VAR_14 = 0;

 FUNC_1(VAR_7, VAR_3, VAR_4);
 FUNC_1(VAR_7, VAR_0, 0xE0000000 | 1 << 19 | 1 << 4 | 1 << 2 | VAR_14);

 FUNC_1(VAR_7, VAR_5, VAR_14 ? VAR_16 : VAR_15);
 FUNC_1(VAR_7, VAR_6, VAR_14 ? VAR_15 : VAR_16);
 FUNC_1(VAR_7, VAR_1, VAR_14 ? VAR_18 : VAR_17);
 FUNC_1(VAR_7, VAR_2, VAR_14 ? VAR_17 : VAR_18);
}
