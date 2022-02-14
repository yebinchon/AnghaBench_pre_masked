
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vpd ;
typedef int uint16_t ;
typedef int u_int ;
struct vpd_config {int dummy; } ;
struct seeprom_config {int adapter_control; } ;
struct ahd_softc {char channel; struct seeprom_config* seep_config; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (struct ahd_softc*,int) ;
 int VAR_9 ;
 int FUNC_2 (struct ahd_softc*) ;
 char FUNC_3 (struct ahd_softc*,scalar_t__) ;
 int FUNC_4 (struct ahd_softc*,scalar_t__) ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*,struct seeprom_config*) ;
 int FUNC_7 (struct ahd_softc*,struct vpd_config*) ;
 int FUNC_8 (struct ahd_softc*,int *,int,int,int ) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (struct ahd_softc*,int) ;
 int FUNC_11 (struct seeprom_config*) ;
 scalar_t__ VAR_10 ;
 int FUNC_12 (struct seeprom_config*) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static int
FUNC_14(struct ahd_softc *VAR_11)
{
 struct vpd_config VAR_12;
 struct seeprom_config *VAR_13;
 u_int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_13 = VAR_11->seep_config;
 VAR_15 = FUNC_0(VAR_11);
 if (VAR_15) {
  u_int VAR_17;




  if (VAR_10)
   FUNC_13("%s: Reading VPD from SEEPROM...",
          FUNC_5(VAR_11));


  VAR_17 = ((2 * sizeof(*VAR_13))
       + (sizeof(VAR_12) * (VAR_11->channel - 'A'))) / 2;

  VAR_16 = FUNC_8(VAR_11, (uint16_t *)&VAR_12,
      VAR_17, sizeof(VAR_12)/2,
                    VAR_8);
  if (VAR_16 == 0)
   VAR_16 = FUNC_7(VAR_11, &VAR_12);
  if (VAR_10)
   FUNC_13("%s: VPD parsing %s\n",
          FUNC_5(VAR_11),
          VAR_16 == 0 ? "successful" : "failed");

  if (VAR_10)
   FUNC_13("%s: Reading SEEPROM...", FUNC_5(VAR_11));


  VAR_17 = (sizeof(*VAR_13) / 2) * (VAR_11->channel - 'A');

  VAR_16 = FUNC_8(VAR_11, (uint16_t *)VAR_13,
      VAR_17, sizeof(*VAR_13)/2,
                    VAR_5);

  if (VAR_16 != 0) {
   FUNC_13("Unable to read SEEPROM\n");
   VAR_15 = 0;
  } else {
   VAR_15 = FUNC_11(VAR_13);

   if (VAR_10) {
    if (VAR_15 == 0)
     FUNC_13 ("checksum error\n");
    else
     FUNC_13 ("done.\n");
   }
  }
  FUNC_9(VAR_11);
 }

 if (!VAR_15) {
  u_int VAR_18;
  FUNC_10(VAR_11, 0xFF);
  VAR_18 = FUNC_3(VAR_11, VAR_7 + VAR_6);
  if (VAR_18 != 0xFF
   && ((FUNC_3(VAR_11, VAR_7 + 0) == 'A'
     && FUNC_3(VAR_11, VAR_7 + 1) == 'D'
     && FUNC_3(VAR_11, VAR_7 + 2) == 'P'
     && FUNC_3(VAR_11, VAR_7 + 3) == 'T')
    || (FUNC_3(VAR_11, VAR_7 + 0) == 'B'
     && FUNC_3(VAR_11, VAR_7 + 1) == 'I'
     && FUNC_3(VAR_11, VAR_7 + 2) == 'O'
     && FUNC_3(VAR_11, VAR_7 + 3) == 'S')
    || (FUNC_3(VAR_11, VAR_7 + 0) == 'A'
     && FUNC_3(VAR_11, VAR_7 + 1) == 'S'
     && FUNC_3(VAR_11, VAR_7 + 2) == 'P'
     && FUNC_3(VAR_11, VAR_7 + 3) == 'I'))) {
   uint16_t *VAR_19;
   int VAR_20;

   FUNC_10(VAR_11, VAR_18);
   VAR_19 = (uint16_t *)VAR_13;
   for (VAR_20 = 0; VAR_20 < 64; VAR_20 += 2)
    *VAR_19++ = FUNC_4(VAR_11, VAR_7+VAR_20);
   VAR_15 = FUNC_11(VAR_13);
   if (VAR_15)
    VAR_11->flags |= VAR_1;
  }
 }
 if (!VAR_15) {
  if (VAR_10)
   FUNC_13("%s: No SEEPROM available.\n", FUNC_5(VAR_11));
  VAR_11->flags |= VAR_2;
  VAR_16 = FUNC_2(VAR_11);
  VAR_14 = VAR_3|VAR_4;
  FUNC_12(VAR_11->seep_config);
  VAR_11->seep_config = ((void*)0);
 } else {
  VAR_16 = FUNC_6(VAR_11, VAR_13);
  VAR_14 = VAR_13->adapter_control;
 }
 if (VAR_16 != 0)
  return (VAR_16);

 FUNC_1(VAR_11, VAR_14);

 return (0);
}
