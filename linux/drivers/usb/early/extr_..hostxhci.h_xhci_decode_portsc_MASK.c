
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
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
 int FUNC_1 (char*,char*,...) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static inline const char *FUNC_3(u32 VAR_16)
{
 static char VAR_17[256];
 int VAR_18;

 VAR_18 = FUNC_1(VAR_17, "%s %s %s Link:%s PortSpeed:%d ",
        VAR_16 & VAR_9 ? "Powered" : "Powered-off",
        VAR_16 & VAR_2 ? "Connected" : "Not-connected",
        VAR_16 & VAR_6 ? "Enabled" : "Disabled",
        FUNC_2(VAR_16),
        FUNC_0(VAR_16));

 if (VAR_16 & VAR_4)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "OverCurrent ");
 if (VAR_16 & VAR_11)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "In-Reset ");

 VAR_18 += FUNC_1(VAR_17 + VAR_18, "Change: ");
 if (VAR_16 & VAR_3)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "CSC ");
 if (VAR_16 & VAR_7)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "PEC ");
 if (VAR_16 & VAR_15)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "WRC ");
 if (VAR_16 & VAR_5)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "OCC ");
 if (VAR_16 & VAR_10)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "PRC ");
 if (VAR_16 & VAR_8)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "PLC ");
 if (VAR_16 & VAR_1)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "CEC ");
 if (VAR_16 & VAR_0)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "CAS ");

 VAR_18 += FUNC_1(VAR_17 + VAR_18, "Wake: ");
 if (VAR_16 & VAR_12)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "WCE ");
 if (VAR_16 & VAR_13)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "WDE ");
 if (VAR_16 & VAR_14)
  VAR_18 += FUNC_1(VAR_17 + VAR_18, "WOE ");

 return VAR_17;
}
