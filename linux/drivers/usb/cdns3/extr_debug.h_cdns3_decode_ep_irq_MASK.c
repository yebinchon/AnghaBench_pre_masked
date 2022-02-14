
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static inline char *FUNC_1(char *VAR_13,
      u32 VAR_14,
      const char *VAR_15)
{
 int VAR_16;

 VAR_16 = FUNC_0(VAR_13, "IRQ for %s: %08x ", VAR_15, VAR_14);

 if (VAR_14 & VAR_9)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "SETUP ");
 if (VAR_14 & VAR_1)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "IOC ");
 if (VAR_14 & VAR_4)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "ISP ");
 if (VAR_14 & VAR_0)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "DESCMIS ");
 if (VAR_14 & VAR_11)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "STREAMR ");
 if (VAR_14 & VAR_5)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "MD_EXIT ");
 if (VAR_14 & VAR_12)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "TRBERR ");
 if (VAR_14 & VAR_6)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "NRDY ");
 if (VAR_14 & VAR_8)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "PRIME ");
 if (VAR_14 & VAR_10)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "SIDERRT ");
 if (VAR_14 & VAR_7)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "OUTSMM ");
 if (VAR_14 & VAR_3)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "ISOERR ");
 if (VAR_14 & VAR_2)
  VAR_16 += FUNC_0(VAR_13 + VAR_16, "IOT ");

 return VAR_13;
}
