
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct us_data {int dummy; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_2__ {int lun; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,struct us_data*) ;
 int FUNC_1 (struct scsi_cmnd*,struct us_data*) ;
 int FUNC_2 (struct us_data*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_1, struct us_data *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2, "LUN=%d\n", (u8)VAR_1->device->lun);

 switch (VAR_1->device->lun) {
 case 0:




  VAR_3 = FUNC_1(VAR_1, VAR_2);
  break;

 case 1:
  VAR_1->device->lun = 0;
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  VAR_1->device->lun = 1;
  break;

 default:
     FUNC_2(VAR_2, "Invalid LUN %d\n", (u8)VAR_1->device->lun);
  VAR_3 = VAR_0;
  break;
 }
 return VAR_3;
}
