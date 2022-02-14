
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct us_data {scalar_t__ extra; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_4__ {scalar_t__ Ready; } ;
struct TYPE_3__ {scalar_t__ Ready; } ;
struct ene_ub6250_info {TYPE_2__ MS_Status; TYPE_1__ SD_Status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct us_data*) ;
 int FUNC_1 (struct us_data*,struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*,int ) ;
 int FUNC_3 (struct us_data*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_2, struct us_data *VAR_3)
{
 int VAR_4 = VAR_1;
 struct ene_ub6250_info *VAR_5 = (struct ene_ub6250_info *)(VAR_3->extra);


 FUNC_2(VAR_2, 0);
 if (FUNC_4(!(VAR_5->SD_Status.Ready || VAR_5->MS_Status.Ready)))
  VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == VAR_1) {
  VAR_4 = VAR_0;
  if (VAR_5->SD_Status.Ready)
   VAR_4 = FUNC_3(VAR_3, VAR_2);

  if (VAR_5->MS_Status.Ready)
   VAR_4 = FUNC_1(VAR_3, VAR_2);
 }
 return VAR_4;
}
