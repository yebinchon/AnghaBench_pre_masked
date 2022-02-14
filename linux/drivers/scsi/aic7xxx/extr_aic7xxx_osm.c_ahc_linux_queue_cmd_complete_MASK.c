
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct ahc_softc {int dummy; } ;
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
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void
FUNC_3(struct ahc_softc *VAR_10, struct scsi_cmnd *VAR_11)
{






 {
  u_int VAR_12;

  switch (FUNC_0(VAR_11)) {
  case 139:
  case 141:
  case 134:
   VAR_12 = VAR_5;
   break;
  case 142:
   VAR_12 = VAR_0;
   break;
  case 150:
   VAR_12 = VAR_2;
   break;
  case 138:
  case 145:
   VAR_12 = VAR_1;
   break;
  case 133:
   VAR_12 = VAR_4;
   break;
  case 135:
  case 151:
   VAR_12 = VAR_8;
   break;
  case 130:
   VAR_12 = VAR_6;
   break;
  case 148:
   VAR_12 = VAR_9;
   break;
  case 131:
  case 140:
  case 152:
  case 146:
  case 147:
  case 129:
  case 132:
  case 149:
  case 144:
  case 137:
  case 128:
  case 136:
   VAR_12 = VAR_3;
   break;
  case 143:
   VAR_12 = VAR_7;
   break;
  default:

   VAR_12 = VAR_3;
   break;
  }

  FUNC_1(VAR_11, VAR_12);
 }

 VAR_11->scsi_done(VAR_11);
}
