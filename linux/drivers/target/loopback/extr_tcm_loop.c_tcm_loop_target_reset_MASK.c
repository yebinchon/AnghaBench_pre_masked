
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcm_loop_tpg {int tl_transport_status; } ;
struct tcm_loop_hba {struct tcm_loop_tpg* tl_hba_tpgs; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_2__ {size_t id; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_3)
{
 struct tcm_loop_hba *VAR_4;
 struct tcm_loop_tpg *VAR_5;




 VAR_4 = *(struct tcm_loop_hba **)FUNC_1(VAR_3->device->host);
 if (!VAR_4) {
  FUNC_0("Unable to perform device reset without active I_T Nexus\n");
  return VAR_0;
 }



 VAR_5 = &VAR_4->tl_hba_tpgs[VAR_3->device->id];
 if (VAR_5) {
  VAR_5->tl_transport_status = VAR_2;
  return VAR_1;
 }
 return VAR_0;
}
