
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ channel; int host; } ;
struct myrs_hba {TYPE_1__* ctlr_info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ physchan_present; } ;


 struct myrs_hba* FUNC_0 (int ) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int
FUNC_2(struct device *VAR_0)
{
 struct scsi_device *VAR_1 = FUNC_1(VAR_0);
 struct myrs_hba *VAR_2 = FUNC_0(VAR_1->host);

 return (VAR_1->channel >= VAR_2->ctlr_info->physchan_present) ? 1 : 0;
}
