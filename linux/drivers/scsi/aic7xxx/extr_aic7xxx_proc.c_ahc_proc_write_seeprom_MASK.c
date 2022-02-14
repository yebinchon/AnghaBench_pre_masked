
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_long ;
typedef int u_int16_t ;
typedef int u_int ;
struct seeprom_descriptor {int sd_DI; int sd_DO; int sd_CK; int sd_CS; int sd_RDY; scalar_t__ sd_MS; void* sd_chip; void* sd_dataout_offset; void* sd_status_offset; void* sd_control_offset; struct ahc_softc* sd_ahc; } ;
struct seeprom_config {int dummy; } ;
struct ahc_softc {int chip; int flags; char channel; int * seep_config; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct ahc_softc*,struct seeprom_descriptor*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,int *) ;
 int FUNC_3 (struct ahc_softc*) ;
 int FUNC_4 (struct seeprom_descriptor*,int *,int,int) ;
 int FUNC_5 (struct seeprom_descriptor*) ;
 int FUNC_6 (struct ahc_softc*,int *) ;
 int FUNC_7 (struct ahc_softc*) ;
 int FUNC_8 (struct seeprom_config*) ;
 int FUNC_9 (struct seeprom_descriptor*,int *,int,int) ;
 int * FUNC_10 (int,int ) ;
 int FUNC_11 (char*) ;

int
FUNC_12(struct Scsi_Host *VAR_22, char *VAR_23, int VAR_24)
{
 struct ahc_softc *VAR_25 = *(struct ahc_softc **)VAR_22->hostdata;
 struct seeprom_descriptor VAR_26;
 int VAR_27;
 u_long VAR_28;
 int VAR_29;
 int VAR_30;


 VAR_30 = -VAR_10;
 FUNC_2(VAR_25, &VAR_28);
 VAR_29 = FUNC_1(VAR_25);
 if (!VAR_29)
  FUNC_3(VAR_25);

 if (VAR_24 != sizeof(struct seeprom_config)) {
  FUNC_11("ahc_proc_write_seeprom: incorrect buffer size\n");
  goto done;
 }

 VAR_27 = FUNC_8((struct seeprom_config*)VAR_23);
 if (VAR_27 == 0) {
  FUNC_11("ahc_proc_write_seeprom: cksum verification failed\n");
  goto done;
 }

 VAR_26.sd_ahc = VAR_25;
 if ((VAR_25->chip & VAR_2) != 0) {
  VAR_26.sd_control_offset = VAR_15;
  VAR_26.sd_status_offset = VAR_20;
  VAR_26.sd_dataout_offset = VAR_20;
  VAR_26.sd_chip = VAR_3;
  VAR_26.sd_MS = 0;
  VAR_26.sd_RDY = VAR_9;
  VAR_26.sd_CS = VAR_6;
  VAR_26.sd_CK = VAR_5;
  VAR_26.sd_DO = VAR_8;
  VAR_26.sd_DI = VAR_7;
  VAR_27 = VAR_21;
 } else {
  FUNC_11("ahc_proc_write_seeprom: unsupported adapter type\n");
  goto done;
 }

 if (!VAR_27) {
  FUNC_11("ahc_proc_write_seeprom: No Serial EEPROM\n");
  goto done;
 } else {
  u_int VAR_31;

  if (VAR_25->seep_config == ((void*)0)) {
   VAR_25->seep_config = FUNC_10(sizeof(*VAR_25->seep_config), VAR_11);
   if (VAR_25->seep_config == ((void*)0)) {
    FUNC_11("aic7xxx: Unable to allocate serial "
           "eeprom buffer.  Write failing\n");
    goto done;
   }
  }
  FUNC_11("aic7xxx: Writing Serial EEPROM\n");
  VAR_31 = 32 * (VAR_25->channel - 'A');
  FUNC_9(&VAR_26, (u_int16_t *)VAR_23, VAR_31,
      sizeof(struct seeprom_config)/2);
  FUNC_4(&VAR_26, (uint16_t *)VAR_25->seep_config,
     VAR_31, sizeof(struct seeprom_config)/2);




  VAR_30 = VAR_24;
 }

done:
 if (!VAR_29)
  FUNC_7(VAR_25);
 FUNC_6(VAR_25, &VAR_28);
 return (VAR_30);
}
