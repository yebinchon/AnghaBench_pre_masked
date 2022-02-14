
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ohci_hcd {int num_ports; } ;


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
 int FUNC_0 (struct ohci_hcd*,int,int,char**,unsigned int*) ;
 int FUNC_1 (struct ohci_hcd*,char**,unsigned int*,char*,int,...) ;
 int FUNC_2 (struct ohci_hcd*) ;
 int FUNC_3 (struct ohci_hcd*) ;
 int FUNC_4 (struct ohci_hcd*,int) ;
 int FUNC_5 (struct ohci_hcd*) ;

__attribute__((used)) static void
FUNC_6 (
 struct ohci_hcd *VAR_15,
 int VAR_16,
 char **VAR_17,
 unsigned *VAR_18)
{
 u32 VAR_19, VAR_20;

 VAR_19 = FUNC_2 (VAR_15);
 if (VAR_19 == ~(u32)0)
  return;

 if (VAR_16) {
  FUNC_1 (VAR_15, VAR_17, VAR_18,
   "roothub.a %08x POTPGT=%d%s%s%s%s%s NDP=%d(%d)\n", VAR_19,
   ((VAR_19 & VAR_5) >> 24) & 0xff,
   (VAR_19 & VAR_2) ? " NOCP" : "",
   (VAR_19 & VAR_4) ? " OCPM" : "",
   (VAR_19 & VAR_0) ? " DT" : "",
   (VAR_19 & VAR_3) ? " NPS" : "",
   (VAR_19 & VAR_6) ? " PSM" : "",
   (VAR_19 & VAR_1), VAR_15->num_ports
   );
  VAR_19 = FUNC_3 (VAR_15);
  FUNC_1 (VAR_15, VAR_17, VAR_18,
   "roothub.b %08x PPCM=%04x DR=%04x\n",
   VAR_19,
   (VAR_19 & VAR_8) >> 16,
   (VAR_19 & VAR_7)
   );
  VAR_19 = FUNC_5 (VAR_15);
  FUNC_1 (VAR_15, VAR_17, VAR_18,
   "roothub.status %08x%s%s%s%s%s%s\n",
   VAR_19,
   (VAR_19 & VAR_9) ? " CRWE" : "",
   (VAR_19 & VAR_14) ? " OCIC" : "",
   (VAR_19 & VAR_12) ? " LPSC" : "",
   (VAR_19 & VAR_10) ? " DRWE" : "",
   (VAR_19 & VAR_13) ? " OCI" : "",
   (VAR_19 & VAR_11) ? " LPS" : ""
   );
 }

 for (VAR_20 = 0; VAR_20 < VAR_15->num_ports; VAR_20++) {
  VAR_19 = FUNC_4 (VAR_15, VAR_20);
  FUNC_0 (VAR_15, VAR_20, VAR_19, VAR_17, VAR_18);
 }
}
