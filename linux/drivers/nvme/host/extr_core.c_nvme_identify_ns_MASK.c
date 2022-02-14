
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_id_ns {int dummy; } ;
struct nvme_ctrl {int device; int admin_q; } ;
struct TYPE_2__ {int cns; int nsid; int opcode; } ;
struct nvme_command {TYPE_1__ identify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct nvme_id_ns*) ;
 struct nvme_id_ns* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,struct nvme_command*,struct nvme_id_ns*,int) ;

__attribute__((used)) static int FUNC_5(struct nvme_ctrl *VAR_4,
  unsigned VAR_5, struct nvme_id_ns **VAR_6)
{
 struct nvme_command VAR_7 = { };
 int VAR_8;


 VAR_7.identify.opcode = VAR_3;
 VAR_7.identify.nsid = FUNC_0(VAR_5);
 VAR_7.identify.cns = VAR_2;

 *VAR_6 = FUNC_3(sizeof(**VAR_6), VAR_1);
 if (!*VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_4->admin_q, &VAR_7, *VAR_6, sizeof(**VAR_6));
 if (VAR_8) {
  FUNC_1(VAR_4->device, "Identify namespace failed (%d)\n", VAR_8);
  FUNC_2(*VAR_6);
 }

 return VAR_8;
}
