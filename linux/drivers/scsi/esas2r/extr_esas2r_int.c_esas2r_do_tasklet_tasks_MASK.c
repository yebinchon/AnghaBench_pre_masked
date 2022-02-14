
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esas2r_adapter {int disable_cnt; int flags; TYPE_1__* host; } ;
struct TYPE_2__ {int shost_gendev; } ;


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
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (struct esas2r_adapter*) ;
 int FUNC_4 (struct esas2r_adapter*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int *,char*) ;
 int FUNC_8 (struct esas2r_adapter*) ;
 int FUNC_9 (struct esas2r_adapter*) ;
 int FUNC_10 (struct esas2r_adapter*,int ,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

void FUNC_14(struct esas2r_adapter *VAR_10)
{

 if (FUNC_13(VAR_4, &VAR_10->flags) ||
     FUNC_13(VAR_3, &VAR_10->flags)) {
  if (FUNC_13(VAR_4, &VAR_10->flags))
   FUNC_2(VAR_10);

  FUNC_4(VAR_10);
 }

 if (FUNC_13(VAR_1, &VAR_10->flags)) {
  FUNC_5("hard resetting bus");

  FUNC_1(VAR_1, &VAR_10->flags);

  if (FUNC_13(VAR_5, &VAR_10->flags))
   FUNC_12(VAR_0, &VAR_10->flags);
  else
   FUNC_10(VAR_10, VAR_9,
          VAR_7);
 }

 if (FUNC_13(VAR_0, &VAR_10->flags)) {
  FUNC_8(VAR_10);

  FUNC_7(VAR_8,
          &(VAR_10->host->shost_gendev),
          "scsi_report_bus_reset() called");

  FUNC_11(VAR_10->host, 0);

  FUNC_1(VAR_0, &VAR_10->flags);
  FUNC_1(VAR_2, &VAR_10->flags);

  FUNC_6(VAR_8, "Bus reset complete");
 }

 if (FUNC_13(VAR_6, &VAR_10->flags)) {
  FUNC_1(VAR_6, &VAR_10->flags);

  FUNC_9(VAR_10);
 }

 if (FUNC_0(&VAR_10->disable_cnt) == 0)
  FUNC_3(VAR_10);
}
