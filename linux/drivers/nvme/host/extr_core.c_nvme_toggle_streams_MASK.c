
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ctrl {int admin_q; } ;
struct TYPE_2__ {int endir; int tdtype; int dtype; int doper; int nsid; int opcode; } ;
struct nvme_command {TYPE_1__ directive; } ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_command*,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (int ,struct nvme_command*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct nvme_ctrl *VAR_6, bool VAR_7)
{
 struct nvme_command VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));

 VAR_8.directive.opcode = VAR_5;
 VAR_8.directive.nsid = FUNC_0(VAR_4);
 VAR_8.directive.doper = VAR_2;
 VAR_8.directive.dtype = VAR_1;
 VAR_8.directive.tdtype = VAR_3;
 VAR_8.directive.endir = VAR_7 ? VAR_0 : 0;

 return FUNC_2(VAR_6->admin_q, &VAR_8, ((void*)0), 0);
}
