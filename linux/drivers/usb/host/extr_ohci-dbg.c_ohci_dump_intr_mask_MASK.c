
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ohci_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ohci_hcd*,char**,unsigned int*,char*,char*,int,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_1 (
 struct ohci_hcd *VAR_9,
 char *VAR_10,
 u32 VAR_11,
 char **VAR_12,
 unsigned *VAR_13)
{
 FUNC_0 (VAR_9, VAR_12, VAR_13, "%s 0x%08x%s%s%s%s%s%s%s%s%s\n",
  VAR_10,
  VAR_11,
  (VAR_11 & VAR_1) ? " MIE" : "",
  (VAR_11 & VAR_2) ? " OC" : "",
  (VAR_11 & VAR_4) ? " RHSC" : "",
  (VAR_11 & VAR_0) ? " FNO" : "",
  (VAR_11 & VAR_7) ? " UE" : "",
  (VAR_11 & VAR_3) ? " RD" : "",
  (VAR_11 & VAR_5) ? " SF" : "",
  (VAR_11 & VAR_8) ? " WDH" : "",
  (VAR_11 & VAR_6) ? " SO" : ""
  );
}
