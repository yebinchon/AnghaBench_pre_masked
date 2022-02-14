
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct seq_file {int dummy; } ;
struct scsi_target {int dummy; } ;
struct scsi_device {int dummy; } ;
struct ahc_tmode_tstate {int dummy; } ;
struct ahc_softc {int features; TYPE_1__* platform_data; } ;
struct ahc_initiator_tinfo {int curr; int goal; int user; } ;
struct TYPE_2__ {struct scsi_target** starget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,struct scsi_device*) ;
 struct ahc_initiator_tinfo* FUNC_1 (struct ahc_softc*,char,size_t,size_t,struct ahc_tmode_tstate**) ;
 int FUNC_2 (struct seq_file*,int *) ;
 struct scsi_device* FUNC_3 (struct scsi_target*,int) ;
 int FUNC_4 (struct seq_file*,char*,size_t) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static void
FUNC_6(struct ahc_softc *VAR_2, struct seq_file *VAR_3,
        u_int VAR_4, char VAR_5, u_int VAR_6,
        u_int VAR_7)
{
 struct scsi_target *VAR_8;
 struct ahc_initiator_tinfo *VAR_9;
 struct ahc_tmode_tstate *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_1(VAR_2, VAR_5, VAR_4,
        VAR_6, &VAR_10);
 if ((VAR_2->features & VAR_1) != 0)
  FUNC_4(VAR_3, "Channel %c ", VAR_5);
 FUNC_4(VAR_3, "Target %d Negotiation Settings\n", VAR_6);
 FUNC_5(VAR_3, "\tUser: ");
 FUNC_2(VAR_3, &VAR_9->user);
 VAR_8 = VAR_2->platform_data->starget[VAR_7];
 if (!VAR_8)
  return;

 FUNC_5(VAR_3, "\tGoal: ");
 FUNC_2(VAR_3, &VAR_9->goal);
 FUNC_5(VAR_3, "\tCurr: ");
 FUNC_2(VAR_3, &VAR_9->curr);

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  struct scsi_device *VAR_12;

  VAR_12 = FUNC_3(VAR_8, VAR_11);

  if (VAR_12 == ((void*)0))
   continue;

  FUNC_0(VAR_3, VAR_12);
 }
}
