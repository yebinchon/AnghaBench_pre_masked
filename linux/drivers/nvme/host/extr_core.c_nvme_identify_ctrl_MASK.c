
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_id_ctrl {int dummy; } ;
struct nvme_ctrl {int admin_q; } ;
struct TYPE_2__ {int cns; int opcode; } ;
struct nvme_command {TYPE_1__ identify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvme_id_ctrl*) ;
 struct nvme_id_ctrl* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct nvme_command*,struct nvme_id_ctrl*,int) ;

__attribute__((used)) static int FUNC_3(struct nvme_ctrl *VAR_4, struct nvme_id_ctrl **VAR_5)
{
 struct nvme_command VAR_6 = { };
 int VAR_7;


 VAR_6.identify.opcode = VAR_3;
 VAR_6.identify.cns = VAR_2;

 *VAR_5 = FUNC_1(sizeof(struct nvme_id_ctrl), VAR_1);
 if (!*VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_4->admin_q, &VAR_6, *VAR_5,
   sizeof(struct nvme_id_ctrl));
 if (VAR_7)
  FUNC_0(*VAR_5);
 return VAR_7;
}
