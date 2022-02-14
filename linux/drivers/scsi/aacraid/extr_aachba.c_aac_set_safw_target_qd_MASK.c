
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_dev {TYPE_1__** hba_map; } ;
struct aac_ciss_identify_pd {int current_queue_depth_limit; } ;
struct TYPE_2__ {scalar_t__ devtype; int qd_limit; struct aac_ciss_identify_pd* safw_identify_resp; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct aac_dev *VAR_1, int VAR_2, int VAR_3)
{

 struct aac_ciss_identify_pd *VAR_4;

 if (VAR_1->hba_map[VAR_2][VAR_3].devtype != VAR_0)
  return;

 VAR_4 = VAR_1->hba_map[VAR_2][VAR_3].safw_identify_resp;
 if (VAR_4 == ((void*)0)) {
  VAR_1->hba_map[VAR_2][VAR_3].qd_limit = 32;
  return;
 }

 if (VAR_4->current_queue_depth_limit <= 0 ||
  VAR_4->current_queue_depth_limit > 255)
  VAR_1->hba_map[VAR_2][VAR_3].qd_limit = 32;
 else
  VAR_1->hba_map[VAR_2][VAR_3].qd_limit =
   VAR_4->current_queue_depth_limit;
}
