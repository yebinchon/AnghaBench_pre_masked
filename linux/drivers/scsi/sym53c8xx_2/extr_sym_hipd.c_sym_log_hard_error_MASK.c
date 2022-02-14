
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
typedef int u32 ;
struct sym_hcb {int scripta_ba; int scripta_sz; int scriptb_ba; int scriptb_sz; int features; scalar_t__ scriptb0; scalar_t__ scripta0; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sym_hcb*,int ) ;
 scalar_t__ FUNC_1 (struct sym_hcb*,int) ;
 int FUNC_2 (struct sym_hcb*,int ) ;
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
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 struct sym_hcb* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*) ;
 char* FUNC_7 (struct sym_hcb*) ;

__attribute__((used)) static void FUNC_8(struct Scsi_Host *VAR_12, u_short VAR_13, u_char VAR_14)
{
 struct sym_hcb *VAR_15 = FUNC_5(VAR_12);
 u32 VAR_16;
 int VAR_17;
 int VAR_18;
 char *VAR_19;
 u_char *VAR_20;
 int VAR_21;

 VAR_16 = FUNC_2(VAR_15, VAR_4);

 if (VAR_16 > VAR_15->scripta_ba &&
   VAR_16 <= VAR_15->scripta_ba + VAR_15->scripta_sz) {
  VAR_17 = VAR_16 - VAR_15->scripta_ba;
  VAR_18 = VAR_15->scripta_sz;
  VAR_20 = (u_char *) VAR_15->scripta0;
  VAR_19 = "scripta";
 }
 else if (VAR_15->scriptb_ba < VAR_16 &&
   VAR_16 <= VAR_15->scriptb_ba + VAR_15->scriptb_sz) {
  VAR_17 = VAR_16 - VAR_15->scriptb_ba;
  VAR_18 = VAR_15->scriptb_sz;
  VAR_20 = (u_char *) VAR_15->scriptb0;
  VAR_19 = "scriptb";
 } else {
  VAR_17 = VAR_16;
  VAR_18 = 0;
  VAR_20 = ((void*)0);
  VAR_19 = "mem";
 }

 FUNC_3 ("%s:%d: ERROR (%x:%x) (%x-%x-%x) (%x/%x/%x) @ (%s %x:%08x).\n",
  FUNC_7(VAR_15), (unsigned)FUNC_0(VAR_15, VAR_9)&0x0f, VAR_14, VAR_13,
  (unsigned)FUNC_0(VAR_15, VAR_10), (unsigned)FUNC_0(VAR_15, VAR_5),
  (unsigned)FUNC_0(VAR_15, VAR_6), (unsigned)FUNC_0(VAR_15, VAR_11),
  (unsigned)FUNC_0(VAR_15, VAR_7),
  (VAR_15->features & VAR_1) ? (unsigned)FUNC_0(VAR_15, VAR_8) : 0,
  VAR_19, VAR_17, (unsigned)FUNC_2(VAR_15, VAR_3));

 if (((VAR_17 & 3) == 0) &&
     (unsigned)VAR_17 < VAR_18) {
  FUNC_3 ("%s: script cmd = %08x\n", FUNC_7(VAR_15),
   FUNC_4((int) *(u32 *)(VAR_20 + VAR_17)));
 }

 FUNC_3("%s: regdump:", FUNC_7(VAR_15));
 for (VAR_21 = 0; VAR_21 < 24; VAR_21++)
  FUNC_3(" %02x", (unsigned)FUNC_1(VAR_15, VAR_21));
 FUNC_3(".\n");




 if (VAR_14 & (VAR_2|VAR_0))
  FUNC_6(VAR_12);
}
