
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* uint16_t ;
typedef int u_int ;
struct seq_file {int dummy; } ;
struct ahc_softc {char* description; int features; int our_id; int our_id_b; int * seep_config; TYPE_1__* scb_data; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_2__ {int numscbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (struct ahc_softc*,char*) ;
 int FUNC_1 (struct ahc_softc*,struct seq_file*,int,char,int,int) ;
 int FUNC_2 (struct seq_file*,char*,char*,...) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,char*) ;

int
FUNC_5(struct seq_file *VAR_4, struct Scsi_Host *VAR_5)
{
 struct ahc_softc *VAR_6 = *(struct ahc_softc **)VAR_5->hostdata;
 char VAR_7[256];
 u_int VAR_8;
 u_int VAR_9;

 FUNC_2(VAR_4, "Adaptec AIC7xxx driver version: %s\n",
    VAR_3);
 FUNC_2(VAR_4, "%s\n", VAR_6->description);
 FUNC_0(VAR_6, VAR_7);
 FUNC_2(VAR_4, "%s\n", VAR_7);
 FUNC_2(VAR_4, "Allocated SCBs: %d, SG List Length: %d\n\n",
    VAR_6->scb_data->numscbs, VAR_0);


 if (VAR_6->seep_config == ((void*)0))
  FUNC_4(VAR_4, "No Serial EEPROM\n");
 else {
  FUNC_4(VAR_4, "Serial EEPROM:\n");
  for (VAR_9 = 0; VAR_9 < sizeof(*VAR_6->seep_config)/2; VAR_9++) {
   if (((VAR_9 % 8) == 0) && (VAR_9 != 0)) {
    FUNC_3(VAR_4, '\n');
   }
   FUNC_2(VAR_4, "0x%.4x ",
      ((uint16_t*)VAR_6->seep_config)[VAR_9]);
  }
  FUNC_3(VAR_4, '\n');
 }
 FUNC_3(VAR_4, '\n');

 VAR_8 = 16;
 if ((VAR_6->features & (VAR_2|VAR_1)) == 0)
  VAR_8 = 8;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  u_int VAR_10;
  u_int VAR_11;
  char VAR_12;

  VAR_12 = 'A';
  VAR_10 = VAR_6->our_id;
  VAR_11 = VAR_9;
  if (VAR_9 > 7 && (VAR_6->features & VAR_1) != 0) {
   VAR_12 = 'B';
   VAR_10 = VAR_6->our_id_b;
   VAR_11 = VAR_9 % 8;
  }

  FUNC_1(VAR_6, VAR_4, VAR_10,
          VAR_12, VAR_11, VAR_9);
 }
 return 0;
}
