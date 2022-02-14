
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*,...) ;
 char* FUNC_10 (int) ;
 char* FUNC_11 (int) ;

__attribute__((used)) static inline const char *FUNC_12(u32 VAR_2, u32 VAR_3, u64 VAR_4,
  u32 VAR_5)
{
 static char VAR_6[1024];
 int VAR_7;

 u32 VAR_8;
 u16 VAR_9;
 u16 VAR_10;

 u8 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 u8 VAR_15;
 u8 VAR_16;
 u8 VAR_17;

 bool VAR_18;
 bool VAR_19;

 VAR_8 = FUNC_6(VAR_2) << 16 |
  FUNC_5(VAR_5);

 VAR_12 = VAR_2 & VAR_1;
 VAR_11 = FUNC_1(VAR_2);
 VAR_13 = FUNC_0(VAR_2);
 VAR_17 = FUNC_2(VAR_2) + 1;
 VAR_18 = !!(VAR_2 & VAR_0);

 VAR_16 = (VAR_3 & (3 << 1)) >> 1;
 VAR_14 = FUNC_3(VAR_3);
 VAR_19 = !!(VAR_3 & (1 << 7));
 VAR_15 = FUNC_4(VAR_3);
 VAR_9 = FUNC_8(VAR_3);

 VAR_10 = FUNC_7(VAR_5);

 VAR_7 = FUNC_9(VAR_6, "State %s mult %d max P. Streams %d %s",
   FUNC_10(VAR_12), VAR_17,
   VAR_11, VAR_18 ? "LSA " : "");

 VAR_7 += FUNC_9(VAR_6 + VAR_7, "interval %d us max ESIT payload %d CErr %d ",
   (1 << VAR_13) * 125, VAR_8, VAR_16);

 VAR_7 += FUNC_9(VAR_6 + VAR_7, "Type %s %sburst %d maxp %d deq %016llx ",
   FUNC_11(VAR_14), VAR_19 ? "HID" : "",
   VAR_15, VAR_9, VAR_4);

 VAR_7 += FUNC_9(VAR_6 + VAR_7, "avg trb len %d", VAR_10);

 return VAR_6;
}
