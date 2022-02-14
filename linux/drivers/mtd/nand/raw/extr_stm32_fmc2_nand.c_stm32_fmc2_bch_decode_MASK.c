
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


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
 int FUNC_0 (int,unsigned long*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_17, u8 *VAR_18, u32 *VAR_19)
{
 u32 VAR_20 = VAR_19[0];
 u32 VAR_21 = VAR_19[1];
 u32 VAR_22 = VAR_19[2];
 u32 VAR_23 = VAR_19[3];
 u32 VAR_24 = VAR_19[4];
 u16 VAR_25[8];
 int VAR_26, VAR_27;
 unsigned int VAR_28 = 0;


 if (FUNC_1(!(VAR_20 & VAR_1)))
  return 0;


 if (FUNC_2(VAR_20 & VAR_4))
  return -VAR_0;

 VAR_25[0] = VAR_21 & VAR_5;
 VAR_25[1] = (VAR_21 & VAR_6) >> VAR_7;
 VAR_25[2] = VAR_22 & VAR_8;
 VAR_25[3] = (VAR_22 & VAR_9) >> VAR_10;
 VAR_25[4] = VAR_23 & VAR_11;
 VAR_25[5] = (VAR_23 & VAR_12) >> VAR_13;
 VAR_25[6] = VAR_24 & VAR_14;
 VAR_25[7] = (VAR_24 & VAR_15) >> VAR_16;

 VAR_27 = (VAR_20 & VAR_2) >> VAR_3;
 for (VAR_26 = 0; VAR_26 < VAR_27; VAR_26++) {
  if (VAR_25[VAR_26] < VAR_17 * 8) {
   FUNC_0(VAR_25[VAR_26], (unsigned long *)VAR_18);
   VAR_28++;
  }
 }

 return VAR_28;
}
