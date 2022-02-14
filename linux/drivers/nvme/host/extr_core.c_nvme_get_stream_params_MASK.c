
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dtype; int doper; void* numd; void* nsid; int opcode; } ;
struct streams_directive_params {TYPE_1__ directive; } ;
struct nvme_ctrl {int admin_q; } ;
struct nvme_command {TYPE_1__ directive; } ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct streams_directive_params*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct streams_directive_params*,struct streams_directive_params*,int) ;

__attribute__((used)) static int FUNC_3(struct nvme_ctrl *VAR_3,
      struct streams_directive_params *VAR_4, u32 VAR_5)
{
 struct nvme_command VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(VAR_4, 0, sizeof(*VAR_4));

 VAR_6.directive.opcode = VAR_2;
 VAR_6.directive.nsid = FUNC_0(VAR_5);
 VAR_6.directive.numd = FUNC_0((sizeof(*VAR_4) >> 2) - 1);
 VAR_6.directive.doper = VAR_0;
 VAR_6.directive.dtype = VAR_1;

 return FUNC_2(VAR_3->admin_q, &VAR_6, VAR_4, sizeof(*VAR_4));
}
