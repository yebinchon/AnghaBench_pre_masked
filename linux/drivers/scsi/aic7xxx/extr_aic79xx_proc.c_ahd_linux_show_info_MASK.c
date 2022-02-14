
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* uint16_t ;
typedef int u_int ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int numscbs; } ;
struct ahd_softc {char* description; int features; int our_id; int * seep_config; TYPE_1__ scb_data; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (struct ahd_softc*,char*) ;
 int FUNC_1 (struct ahd_softc*,struct seq_file*,int ,char,int) ;
 int FUNC_2 (struct seq_file*,char*,char*,...) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,char*) ;

int
FUNC_5(struct seq_file *VAR_3, struct Scsi_Host *VAR_4)
{
 struct ahd_softc *VAR_5 = *(struct ahd_softc **)VAR_4->hostdata;
 char VAR_6[256];
 u_int VAR_7;
 u_int VAR_8;

 FUNC_2(VAR_3, "Adaptec AIC79xx driver version: %s\n",
    VAR_2);
 FUNC_2(VAR_3, "%s\n", VAR_5->description);
 FUNC_0(VAR_5, VAR_6);
 FUNC_2(VAR_3, "%s\n", VAR_6);
 FUNC_2(VAR_3, "Allocated SCBs: %d, SG List Length: %d\n\n",
    VAR_5->scb_data.numscbs, VAR_0);

 VAR_7 = 16;

 if (VAR_5->seep_config == ((void*)0))
  FUNC_4(VAR_3, "No Serial EEPROM\n");
 else {
  FUNC_4(VAR_3, "Serial EEPROM:\n");
  for (VAR_8 = 0; VAR_8 < sizeof(*VAR_5->seep_config)/2; VAR_8++) {
   if (((VAR_8 % 8) == 0) && (VAR_8 != 0)) {
    FUNC_3(VAR_3, '\n');
   }
   FUNC_2(VAR_3, "0x%.4x ",
      ((uint16_t*)VAR_5->seep_config)[VAR_8]);
  }
  FUNC_3(VAR_3, '\n');
 }
 FUNC_3(VAR_3, '\n');

 if ((VAR_5->features & VAR_1) == 0)
  VAR_7 = 8;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {

  FUNC_1(VAR_5, VAR_3, VAR_5->our_id, 'A',
                       VAR_8);
 }
 return 0;
}
