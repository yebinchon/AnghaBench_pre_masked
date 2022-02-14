
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,scalar_t__) ;
 int FUNC_3 (struct sdhci_host*,int ) ;

void FUNC_4(struct sdhci_host *VAR_29)
{
 FUNC_0("============ SDHCI REGISTER DUMP ===========\n");

 FUNC_0("Sys addr:  0x%08x | Version:  0x%08x\n",
     FUNC_2(VAR_29, VAR_12),
     FUNC_3(VAR_29, VAR_15));
 FUNC_0("Blk size:  0x%08x | Blk cnt:  0x%08x\n",
     FUNC_3(VAR_29, VAR_7),
     FUNC_3(VAR_29, VAR_5));
 FUNC_0("Argument:  0x%08x | Trn mode: 0x%08x\n",
     FUNC_2(VAR_29, VAR_3),
     FUNC_3(VAR_29, VAR_25));
 FUNC_0("Present:   0x%08x | Host ctl: 0x%08x\n",
     FUNC_2(VAR_29, VAR_20),
     FUNC_1(VAR_29, VAR_13));
 FUNC_0("Power:     0x%08x | Blk gap:  0x%08x\n",
     FUNC_1(VAR_29, VAR_19),
     FUNC_1(VAR_29, VAR_6));
 FUNC_0("Wake-up:   0x%08x | Clock:    0x%08x\n",
     FUNC_1(VAR_29, VAR_28),
     FUNC_3(VAR_29, VAR_10));
 FUNC_0("Timeout:   0x%08x | Int stat: 0x%08x\n",
     FUNC_1(VAR_29, VAR_24),
     FUNC_2(VAR_29, VAR_17));
 FUNC_0("Int enab:  0x%08x | Sig enab: 0x%08x\n",
     FUNC_2(VAR_29, VAR_16),
     FUNC_2(VAR_29, VAR_22));
 FUNC_0("ACmd stat: 0x%08x | Slot int: 0x%08x\n",
     FUNC_3(VAR_29, VAR_4),
     FUNC_3(VAR_29, VAR_23));
 FUNC_0("Caps:      0x%08x | Caps_1:   0x%08x\n",
     FUNC_2(VAR_29, VAR_8),
     FUNC_2(VAR_29, VAR_9));
 FUNC_0("Cmd:       0x%08x | Max curr: 0x%08x\n",
     FUNC_3(VAR_29, VAR_11),
     FUNC_2(VAR_29, VAR_18));
 FUNC_0("Resp[0]:   0x%08x | Resp[1]:  0x%08x\n",
     FUNC_2(VAR_29, VAR_21),
     FUNC_2(VAR_29, VAR_21 + 4));
 FUNC_0("Resp[2]:   0x%08x | Resp[3]:  0x%08x\n",
     FUNC_2(VAR_29, VAR_21 + 8),
     FUNC_2(VAR_29, VAR_21 + 12));
 FUNC_0("Host ctl2: 0x%08x\n",
     FUNC_3(VAR_29, VAR_14));

 if (VAR_29->flags & VAR_27) {
  if (VAR_29->flags & VAR_26) {
   FUNC_0("ADMA Err:  0x%08x | ADMA Ptr: 0x%08x%08x\n",
       FUNC_2(VAR_29, VAR_2),
       FUNC_2(VAR_29, VAR_1),
       FUNC_2(VAR_29, VAR_0));
  } else {
   FUNC_0("ADMA Err:  0x%08x | ADMA Ptr: 0x%08x\n",
       FUNC_2(VAR_29, VAR_2),
       FUNC_2(VAR_29, VAR_0));
  }
 }

 FUNC_0("============================================\n");
}
