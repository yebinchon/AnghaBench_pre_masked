
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {scalar_t__ extra; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_2__ {scalar_t__ Ready; scalar_t__ Insert; } ;
struct ene_ub6250_info {TYPE_1__ MS_Status; } ;


 int VAR_0 ;
 int FUNC_0 (struct us_data*) ;

__attribute__((used)) static int FUNC_1(struct us_data *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct ene_ub6250_info *VAR_3 = (struct ene_ub6250_info *)(VAR_1->extra);


 if (VAR_3->MS_Status.Insert && VAR_3->MS_Status.Ready) {
  return VAR_0;
 } else {
  FUNC_0(VAR_1);
  return VAR_0;
 }

 return VAR_0;
}
