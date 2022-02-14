
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct td {int hwBE; int hwCBP; int hwNextTD; int index; int urb; int hwINFO; } ;
struct ohci_hcd {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_1 (struct ohci_hcd const*,int *) ;
 int FUNC_2 (struct ohci_hcd const*,char*,...) ;
 int FUNC_3 (struct ohci_hcd const*,struct td const*,unsigned int) ;

__attribute__((used)) static void FUNC_4 (const struct ohci_hcd *VAR_9, const char *VAR_10,
  const struct td *VAR_11)
{
 u32 VAR_12 = FUNC_1 (VAR_9, &VAR_11->hwINFO);

 FUNC_2 (VAR_9, "%s td %p%s; urb %p index %d; hw next td %08x\n",
  VAR_10, VAR_11,
  (VAR_12 & VAR_2) ? " (DONE)" : "",
  VAR_11->urb, VAR_11->index,
  FUNC_1 (VAR_9, &VAR_11->hwNextTD));
 if ((VAR_12 & VAR_4) == 0) {
  const char *VAR_13, *VAR_14;
  u32 VAR_15, VAR_16;

  switch (VAR_12 & VAR_6) {
  case 130: VAR_13 = VAR_7; break;
  case 129: VAR_13 = VAR_8; break;
  case 128: VAR_13 = "(CARRY)"; break;
  default: VAR_13 = "(?)"; break;
  }
  switch (VAR_12 & VAR_3) {
  case 131: VAR_14 = "SETUP"; break;
  case 133: VAR_14 = "IN"; break;
  case 132: VAR_14 = "OUT"; break;
  default: VAR_14 = "(bad pid)"; break;
  }
  FUNC_2 (VAR_9, "     info %08x CC=%x %s DI=%d %s %s\n", VAR_12,
   FUNC_0(VAR_12), VAR_13,
   (VAR_12 & VAR_1) >> 21, VAR_14,
   (VAR_12 & VAR_5) ? "R" : "");
  VAR_15 = FUNC_1 (VAR_9, &VAR_11->hwCBP);
  VAR_16 = FUNC_1 (VAR_9, &VAR_11->hwBE);
  FUNC_2 (VAR_9, "     cbp %08x be %08x (len %d)\n", VAR_15, VAR_16,
   VAR_15 ? (VAR_16 + 1 - VAR_15) : 0);
 } else {
  unsigned VAR_17;
  FUNC_2 (VAR_9, "  info %08x CC=%x FC=%d DI=%d SF=%04x\n", VAR_12,
   FUNC_0(VAR_12),
   (VAR_12 >> 24) & 0x07,
   (VAR_12 & VAR_1) >> 21,
   VAR_12 & 0x0000ffff);
  FUNC_2 (VAR_9, "  bp0 %08x be %08x\n",
   FUNC_1 (VAR_9, &VAR_11->hwCBP) & ~0x0fff,
   FUNC_1 (VAR_9, &VAR_11->hwBE));
  for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
   u16 VAR_18 = FUNC_3 (VAR_9, VAR_11, VAR_17);
   int VAR_19 = (VAR_18 >> 12) & 0x0f;
   FUNC_2 (VAR_9, "    psw [%d] = %2x, CC=%x %s=%d\n", VAR_17,
    VAR_18, VAR_19,
    (VAR_19 >= 0x0e) ? "OFFSET" : "SIZE",
    VAR_18 & 0x0fff);
  }
 }
}
