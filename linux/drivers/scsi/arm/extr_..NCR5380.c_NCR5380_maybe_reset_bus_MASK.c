
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;
struct NCR5380_hostdata {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct NCR5380_hostdata*,int ,int,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct Scsi_Host*,char*) ;
 struct NCR5380_hostdata* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_7(struct Scsi_Host *VAR_6)
{
 struct NCR5380_hostdata *VAR_7 = FUNC_6(VAR_6);
 int VAR_8;

 for (VAR_8 = 1; (FUNC_1(VAR_5) & VAR_4) && VAR_8 <= 6; ++VAR_8) {
  switch (VAR_8) {
  case 1:
  case 3:
  case 5:
   FUNC_5(VAR_3, VAR_6, "SCSI bus busy, waiting up to five seconds\n");
   FUNC_0(VAR_7,
                         VAR_5, VAR_4, 0, 5 * VAR_2);
   break;
  case 2:
   FUNC_5(VAR_3, VAR_6, "bus busy, attempting abort\n");
   FUNC_2(VAR_6);
   break;
  case 4:
   FUNC_5(VAR_3, VAR_6, "bus busy, attempting reset\n");
   FUNC_3(VAR_6);




   if (VAR_7->flags & VAR_1)
    FUNC_4(2500);
   else
    FUNC_4(500);
   break;
  case 6:
   FUNC_5(VAR_3, VAR_6, "bus locked solid\n");
   return -VAR_0;
  }
 }
 return 0;
}
