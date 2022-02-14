
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {scalar_t__ subclass; } ;
struct TYPE_2__ {int parent; } ;
struct scsi_target {int no_report_luns; int pdt_1f_for_no_lun; TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct us_data* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_target *VAR_1)
{
 struct us_data *VAR_2 = FUNC_1(FUNC_0(VAR_1->dev.parent));







 VAR_1->no_report_luns = 1;
 if (VAR_2->subclass == VAR_0)
  VAR_1->pdt_1f_for_no_lun = 1;

 return 0;
}
