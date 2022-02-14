
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm8001_tmf_task {int dummy; } ;
struct pm8001_hba_info {int dummy; } ;
struct pm8001_ccb_info {int dummy; } ;
struct TYPE_2__ {int (* ssp_tm_req ) (struct pm8001_hba_info*,struct pm8001_ccb_info*,struct pm8001_tmf_task*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,struct pm8001_ccb_info*,struct pm8001_tmf_task*) ;

__attribute__((used)) static int FUNC_1(struct pm8001_hba_info *VAR_1,
 struct pm8001_ccb_info *VAR_2, struct pm8001_tmf_task *VAR_3)
{
 return VAR_0->ssp_tm_req(VAR_1, VAR_2, VAR_3);
}
