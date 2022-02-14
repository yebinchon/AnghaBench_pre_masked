
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_long ;
typedef int u_int16_t ;
typedef int u_int ;
struct seeprom_config {int dummy; } ;
struct ahd_softc {char channel; int * seep_config; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int *) ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,int *,int,int,int ) ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*,int ) ;
 int FUNC_7 (struct ahd_softc*) ;
 int FUNC_8 (struct ahd_softc*,int ,int ) ;
 int FUNC_9 (struct ahd_softc*,int *) ;
 int FUNC_10 (struct ahd_softc*) ;
 int FUNC_11 (struct seeprom_config*) ;
 int FUNC_12 (struct ahd_softc*,int *,int,int) ;
 int * FUNC_13 (int,int ) ;
 int FUNC_14 (char*) ;

int
FUNC_15(struct Scsi_Host *VAR_4, char *VAR_5, int VAR_6)
{
 struct ahd_softc *VAR_7 = *(struct ahd_softc **)VAR_4->hostdata;
 ahd_mode_state VAR_8;
 int VAR_9;
 u_long VAR_10;
 int VAR_11;
 int VAR_12;


 VAR_12 = -VAR_1;
 FUNC_2(VAR_7, &VAR_10);
 VAR_11 = FUNC_1(VAR_7);
 if (!VAR_11)
  FUNC_3(VAR_7);

 VAR_8 = FUNC_7(VAR_7);
 FUNC_8(VAR_7, VAR_0, VAR_0);
 if (VAR_6 != sizeof(struct seeprom_config)) {
  FUNC_14("ahd_proc_write_seeprom: incorrect buffer size\n");
  goto done;
 }

 VAR_9 = FUNC_11((struct seeprom_config*)VAR_5);
 if (VAR_9 == 0) {
  FUNC_14("ahd_proc_write_seeprom: cksum verification failed\n");
  goto done;
 }

 VAR_9 = FUNC_0(VAR_7);
 if (!VAR_9) {
  FUNC_14("ahd_proc_write_seeprom: No Serial EEPROM\n");
  goto done;
 } else {
  u_int VAR_13;

  if (VAR_7->seep_config == ((void*)0)) {
   VAR_7->seep_config = FUNC_13(sizeof(*VAR_7->seep_config), VAR_3);
   if (VAR_7->seep_config == ((void*)0)) {
    FUNC_14("aic79xx: Unable to allocate serial "
           "eeprom buffer.  Write failing\n");
    goto done;
   }
  }
  FUNC_14("aic79xx: Writing Serial EEPROM\n");
  VAR_13 = 32 * (VAR_7->channel - 'A');
  FUNC_12(VAR_7, (u_int16_t *)VAR_5, VAR_13,
      sizeof(struct seeprom_config)/2);
  FUNC_4(VAR_7, (uint16_t *)VAR_7->seep_config,
     VAR_13, sizeof(struct seeprom_config)/2,
                   VAR_2);
  FUNC_5(VAR_7);
  VAR_12 = VAR_6;
 }

done:
 FUNC_6(VAR_7, VAR_8);
 if (!VAR_11)
  FUNC_10(VAR_7);
 FUNC_9(VAR_7, &VAR_10);
 return (VAR_12);
}
