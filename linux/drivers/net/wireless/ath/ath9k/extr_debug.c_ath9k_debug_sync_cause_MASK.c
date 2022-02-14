
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mac_sleep_access; int mac_asleep; int mac_awake; int pm_access; int local_timeout; int radm_cpl_timeout; int radm_cpl_ecrc_err; int radm_cpl_tlp_abort; int radm_cpl_dllp_abort; int radm_cpl_ep; int trcv_fifo_perr; int host1_perr; int host1_fatal; int pci_mode_conflict; int apb_timeout; int eeprom_illegal_access; int sync_mac_irq; int sync_rtc_irq; int sync_cause_all; } ;
struct TYPE_5__ {TYPE_1__ istats; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct ath_softc {TYPE_3__ debug; } ;


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

void FUNC_0(struct ath_softc *VAR_18, u32 VAR_19)
{
 if (VAR_19)
  VAR_18->debug.stats.istats.sync_cause_all++;
 if (VAR_19 & VAR_16)
  VAR_18->debug.stats.istats.sync_rtc_irq++;
 if (VAR_19 & VAR_7)
  VAR_18->debug.stats.istats.sync_mac_irq++;
 if (VAR_19 & VAR_1)
  VAR_18->debug.stats.istats.eeprom_illegal_access++;
 if (VAR_19 & VAR_0)
  VAR_18->debug.stats.istats.apb_timeout++;
 if (VAR_19 & VAR_9)
  VAR_18->debug.stats.istats.pci_mode_conflict++;
 if (VAR_19 & VAR_2)
  VAR_18->debug.stats.istats.host1_fatal++;
 if (VAR_19 & VAR_3)
  VAR_18->debug.stats.istats.host1_perr++;
 if (VAR_19 & VAR_17)
  VAR_18->debug.stats.istats.trcv_fifo_perr++;
 if (VAR_19 & VAR_13)
  VAR_18->debug.stats.istats.radm_cpl_ep++;
 if (VAR_19 & VAR_11)
  VAR_18->debug.stats.istats.radm_cpl_dllp_abort++;
 if (VAR_19 & VAR_15)
  VAR_18->debug.stats.istats.radm_cpl_tlp_abort++;
 if (VAR_19 & VAR_12)
  VAR_18->debug.stats.istats.radm_cpl_ecrc_err++;
 if (VAR_19 & VAR_14)
  VAR_18->debug.stats.istats.radm_cpl_timeout++;
 if (VAR_19 & VAR_4)
  VAR_18->debug.stats.istats.local_timeout++;
 if (VAR_19 & VAR_10)
  VAR_18->debug.stats.istats.pm_access++;
 if (VAR_19 & VAR_6)
  VAR_18->debug.stats.istats.mac_awake++;
 if (VAR_19 & VAR_5)
  VAR_18->debug.stats.istats.mac_asleep++;
 if (VAR_19 & VAR_8)
  VAR_18->debug.stats.istats.mac_sleep_access++;
}
