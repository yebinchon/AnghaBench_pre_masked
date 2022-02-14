
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int dummy; } ;


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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ql_adapter*,int ) ;
 int FUNC_2 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ql_adapter *VAR_22, u32 *VAR_23)
{
 u32 VAR_24, VAR_25;
 u32 VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 u32 VAR_30 = VAR_19;
 u32 VAR_31;
 u32 VAR_32;

 for (VAR_26 = 0; VAR_26 < VAR_20; VAR_26++) {
  switch (VAR_26) {

  case 0:
   VAR_30 |= VAR_0;
   VAR_31 = VAR_4;
   VAR_32 = VAR_5;
   break;
  case 1:
   VAR_31 = VAR_5;
   VAR_32 = VAR_5;
   break;
  case 2:
  case 3:
   VAR_31 = VAR_5;
   VAR_32 = VAR_5;
   break;
  case 4:
   VAR_31 = VAR_6;
   VAR_32 = VAR_7;
   break;
  case 5:
   VAR_31 = VAR_8;
   VAR_32 = VAR_9;
   break;
  case 6:
   VAR_31 = VAR_16;
   VAR_32 = VAR_17;
   break;
  case 7:
   VAR_31 = VAR_12;
   VAR_32 = VAR_13;
   break;
  case 8:
   VAR_31 = VAR_14;
   VAR_32 = VAR_15;
   break;
  case 9:
   VAR_31 = VAR_10;
   VAR_32 = VAR_11;
   break;
  default:
   FUNC_0("Bad type!!! 0x%08x\n", VAR_26);
   VAR_31 = 0;
   VAR_32 = 0;
   break;
  }
  for (VAR_27 = 0; VAR_27 < VAR_31; VAR_27++) {
   for (VAR_28 = 0; VAR_28 < VAR_32; VAR_28++) {
    VAR_29 = VAR_30
     | (VAR_26 << VAR_21)
     | (VAR_27 << VAR_3)
     | (VAR_28);
    FUNC_2(VAR_22, VAR_2, VAR_29);
    VAR_24 = 0;
    while ((VAR_24 & VAR_18) == 0) {
     VAR_24 = FUNC_1(VAR_22,
        VAR_2);
    }
    VAR_25 = FUNC_1(VAR_22, VAR_1);
    *VAR_23 = VAR_24;
    VAR_23++;
    *VAR_23 = VAR_25;
    VAR_23++;
   }
  }
 }
}
