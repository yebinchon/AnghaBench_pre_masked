
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcm_loop_tpg {int dummy; } ;
struct tcm_loop_hba {struct tcm_loop_tpg* tl_hba_tpgs; } ;
struct scsi_cmnd {TYPE_1__* request; TYPE_2__* device; } ;
struct TYPE_4__ {size_t id; int lun; int host; } ;
struct TYPE_3__ {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tcm_loop_tpg*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_4)
{
 struct tcm_loop_hba *VAR_5;
 struct tcm_loop_tpg *VAR_6;
 int VAR_7 = VAR_0;




 VAR_5 = *(struct tcm_loop_hba **)FUNC_0(VAR_4->device->host);
 VAR_6 = &VAR_5->tl_hba_tpgs[VAR_4->device->id];
 VAR_7 = FUNC_1(VAR_6, VAR_4->device->lun,
     VAR_4->request->tag, VAR_2);
 return (VAR_7 == VAR_3) ? VAR_1 : VAR_0;
}
