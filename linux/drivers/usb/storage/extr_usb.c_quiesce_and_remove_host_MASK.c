
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {int delay_wait; int dflags; int pusb_intf; int scan_dwork; TYPE_1__* pusb_dev; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 struct Scsi_Host* FUNC_6 (struct us_data*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct us_data *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_6(VAR_3);


 if (VAR_3->pusb_dev->state == VAR_0) {
  FUNC_4(VAR_1, &VAR_3->dflags);
  FUNC_8(&VAR_3->delay_wait);
 }





 FUNC_0(&VAR_3->scan_dwork);


 if (FUNC_5(VAR_2, &VAR_3->dflags))
  FUNC_7(VAR_3->pusb_intf);





 FUNC_2(VAR_4);





 FUNC_1(VAR_4);
 FUNC_4(VAR_1, &VAR_3->dflags);
 FUNC_3(VAR_4);
 FUNC_8(&VAR_3->delay_wait);
}
