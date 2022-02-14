
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int tag; } ;
struct nvme_ns {int dummy; } ;
struct TYPE_3__ {int command_id; } ;
struct nvme_command {TYPE_1__ common; } ;
typedef int blk_status_t ;
struct TYPE_4__ {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int) ;
 int FUNC_1 (struct nvme_command*,int ,int) ;
 int FUNC_2 (struct nvme_command*,int ,int) ;
 int FUNC_3 (struct request*) ;
 TYPE_2__* FUNC_4 (struct request*) ;
 int FUNC_5 (struct nvme_ns*,struct request*,struct nvme_command*) ;
 int FUNC_6 (struct nvme_ns*,struct nvme_command*) ;
 int FUNC_7 (struct nvme_ns*,struct request*,struct nvme_command*) ;
 int FUNC_8 (struct nvme_ns*,struct request*,struct nvme_command*) ;
 int FUNC_9 (struct request*) ;
 int FUNC_10 (struct request*,struct nvme_command*) ;

blk_status_t FUNC_11(struct nvme_ns *VAR_2, struct request *VAR_3,
  struct nvme_command *VAR_4)
{
 blk_status_t VAR_5 = VAR_1;

 FUNC_3(VAR_3);

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 switch (FUNC_9(VAR_3)) {
 case 133:
 case 132:
  FUNC_1(VAR_4, FUNC_4(VAR_3)->cmd, sizeof(*VAR_4));
  break;
 case 131:
  FUNC_6(VAR_2, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_8(VAR_2, VAR_3, VAR_4);
  break;
 case 134:
  VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4);
  break;
 case 130:
 case 129:
  VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4);
  break;
 default:
  FUNC_0(1);
  return VAR_0;
 }

 VAR_4->common.command_id = VAR_3->tag;
 FUNC_10(VAR_3, VAR_4);
 return VAR_5;
}
